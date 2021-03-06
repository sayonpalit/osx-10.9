use Log::Log4perl;
use Log::Log4perl::Appender::TestBuffer;
use Log::Log4perl::Appender::File;
use File::Spec;
use Test::More;

our $LOG_DISPATCH_PRESENT = 0;

BEGIN { 
    eval { require Log::Dispatch; };
    if($@) {
       plan skip_all => "only with Log::Dispatch";
    } else {
       $LOG_DISPATCH_PRESENT = 1;
       plan tests => 1;
    }
};

my $WORK_DIR = "tmp";
if(-d "t") {
    $WORK_DIR = File::Spec->catfile(qw(t tmp));
}
unless (-e "$WORK_DIR"){
    mkdir("$WORK_DIR", 0755) || die "can't create $WORK_DIR ($!)";
}

use vars qw(@outfiles $test_logfile); 
$test_logfile = File::Spec->catfile($WORK_DIR,'test1.log');
@outfiles = ($test_logfile,);
foreach my $f (@outfiles){
    unlink $f if (-e $f);
}


my $conf = <<CONF;
log4j.category.cat1      = INFO, myAppender

log4j.appender.myAppender=org.apache.log4j.ConsoleAppender
log4j.appender.myAppender.Target=System.out
log4j.appender.myAppender.layout=org.apache.log4j.PatternLayout
log4j.appender.myAppender.layout.ConversionPattern=%-5p %c - %m%n
CONF

Log::Log4perl->init(\$conf);

my $logger = Log::Log4perl->get_logger('cat1');

#hmm, I wonder how portable this is, maybe check $^O first?
use vars qw($OLDOUT); #for -w
open(OLDOUT, ">&STDOUT");
open (TOUCH, ">>$test_logfile");# `touch $test_logfile`;
close TOUCH;
open(STDOUT, ">$test_logfile") || die "Can't redirect stdout $test_logfile $!";
select(STDOUT); $| = 1;     # make unbuffered



$logger->debug("debugging message 1 ");
$logger->info("info message 1 ");      
$logger->warn("warning message 1 ");   
$logger->fatal("fatal message 1 ");   


close(STDOUT);
open(STDOUT, ">&OLDOUT");


my ($result, $expected);

$expected = <<EOL;
INFO  cat1 - info message 1 
WARN  cat1 - warning message 1 
FATAL cat1 - fatal message 1 
EOL

{local $/ = undef;
 open (F, "$test_logfile") || die $!;
 $result = <F>;
 close F;
}
is ($result, $expected);

foreach my $f (@outfiles){
    unlink $f if (-e $f);
}

