/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License (the "License").
 * You may not use this file except in compliance with the License.
 *
 * You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
 * or http://www.opensolaris.org/os/licensing.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file at usr/src/OPENSOLARIS.LICENSE.
 * If applicable, add the following below this CDDL HEADER, with the
 * fields enclosed by brackets "[]" replaced with your own identifying
 * information: Portions Copyright [yyyy] [name of copyright owner]
 *
 * CDDL HEADER END
 */

/*
 * Copyright 2006 Sun Microsystems, Inc.  All rights reserved.
 * Use is subject to license terms.
 */

#pragma	ident	"@(#)err.badbcopy3.d	1.1	06/08/28 SMI"

/*
 * ASSERTION:
 *	bcopy should not copy from one memory location to another
 *	if the memory is not properly allocated
 *
 * SECTION: Actions and Subroutines/bcopy()
 *
 */

#pragma D option quiet

BEGIN
{
	/* Attempt to copy to a NULL address */
#if !defined(__APPLE__)
	bcopy((void *)&`kmem_flags, (void *)NULL, sizeof (int));
#else
	bcopy((void *)&`max_ncpus, (void *)NULL, sizeof (int));
#endif /* __APPLE__ */
	exit(1);
}

ERROR
{
	exit(1);
}
