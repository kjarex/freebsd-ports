PORTNAME=	netmagis
PORTREVISION=	1
PKGNAMESUFFIX=	-database

COMMENT=	Utilities for the netmagis database server

LICENSE=	CECILL-B

RUN_DEPENDS=	netmagis-config:net-mgmt/netmagis-common \
		pwgen:sysutils/pwgen \
		tcltls>=1.4.1:devel/tcltls \
		${LOCALBASE}/share/certs/ca-root-nss.crt:security/ca_root_nss

WANT_PGSQL+=	server pltcl

MASTERDIR=	${.CURDIR}/../netmagis-common

PKGMESSAGE=	${.CURDIR}/pkg-message
PLIST=		${.CURDIR}/pkg-plist

OPTIONS_DEFINE=	EXAMPLES

.include "${MASTERDIR}/Makefile"
