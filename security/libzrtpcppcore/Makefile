PORTNAME=	libzrtpcppcore
PORTVERSION=	4.6.6
PORTREVISION=	4
DISTVERSIONPREFIX=	V
CATEGORIES=	security

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GNU ZRTP library
WWW=		https://github.com/wernerd/ZRTPCPP

LICENSE=	LGPL3+
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GITHUB=	yes
GH_ACCOUNT=	wernerd
GH_PROJECT=	ZRTPCPP

USES=		cmake:noninja compiler:c++11-lib
USE_CXXSTD=	c++11
CMAKE_ARGS=	-DCORE_LIB:BOOL=ON
USE_LDCONFIG=	yes

.include <bsd.port.mk>
