PORTNAME=	redkite
DISTVERSIONPREFIX=	v
DISTVERSION=	1.3.1
CATEGORIES=	x11-toolkits

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	GUI toolkit
WWW=		https://github.com/iurie-sw/redkite

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake compiler:c++17-lang gnome localbase:ldflags
USE_GITHUB=	yes
GH_ACCOUNT=	iurie-sw
USE_GNOME=	cairo

CMAKE_ARGS=	-DCMAKE_INSTALL_LIBDIR=${PREFIX}/lib
CMAKE_OFF=	ENABLE_EXAMPLES

.include <bsd.port.mk>
