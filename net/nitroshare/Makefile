PORTNAME=	nitroshare
DISTVERSION=	0.3.4-642
DISTVERSIONSUFFIX=	-g2046ccb
PORTREVISION=	3
CATEGORIES=	net

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Network file transfer application
WWW=		https://nitroshare.net/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	libqhttpengine.so:www/qhttpengine \
		libqmdnsengine.so:dns/qmdnsengine

USES=		cmake compiler:c++11-lang qt:5
USE_GITHUB=	yes
GH_PROJECT=	${PORTNAME}-desktop
USE_QT=		core gui network widgets buildtools:build qmake:build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
