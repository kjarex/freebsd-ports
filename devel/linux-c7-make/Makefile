PORTNAME=	make
PORTVERSION=	3.82
DISTVERSIONSUFFIX=	-24.el7
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	GNU make utility (Linux CentOS ${LINUX_DIST_VER})
WWW=		https://www.gnu.org/software/make/

USES=		cpe linux:c7
CPE_VENDOR=	gnu
USE_LINUX_RPM=	nolib

DESCR=		${.CURDIR}/../gmake/pkg-descr

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	yes

.include <bsd.port.mk>
