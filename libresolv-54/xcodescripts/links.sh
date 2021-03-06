#!/bin/bash
set -e -x

if [ "$ACTION" = installhdrs ]; then exit 0; fi

# check if we're building for the simulator
if [ "${RC_ProjectName%_Sim}" != "${RC_ProjectName}" ] ; then
	DSTROOT="${DSTROOT}${SDKROOT}"
fi

LIBDIR="$DSTROOT"/usr/lib
ln -s libresolv.9.dylib "$LIBDIR"/libresolv.dylib
chown -h "$INSTALL_OWNER:$INSTALL_GROUP" "$LIBDIR"/libresolv.dylib
chmod -h 0755 "$LIBDIR"/libresolv.dylib
