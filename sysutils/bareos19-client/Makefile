PORTNAME=	bareos
PKGNAMESUFFIX=	19-client

COMMENT=	Backup archiving recovery open sourced (client)

CONFLICTS=	bareos18-client bareos17-client bareos-client

WITH_CLIENT_ONLY=yes
USE_RC_SUBR=	bareos-fd

PLIST=		${PKGDIR}/pkg-plist.client
MASTERDIR=	${.CURDIR}/../../sysutils/bareos19-server

OPTIONS_GROUP=	PLUGINS
OPTIONS_GROUP_PLUGINS=	CEPHFS GFAPI RADOS
OPTIONS_DEFINE=	NLS PYTHON LMDB SCSICRYPTO

CEPHFS_DESC=	CEPHFS fd plugin support
GFAPI_DESC=	GFAPI fd plugin support
RADOS_DESC=	RADOS fd plugin support
LMDB_DESC=	Enable build of LMDB support

.include "${MASTERDIR}/Makefile"
