PORTNAME=	edlib
DISTVERSION=	1.2.7
CATEGORIES=	biology

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Fast C++ library for sequence alignment using edit distance
WWW=		https://github.com/Martinsos/edlib

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake:testing compiler:c++14-lang
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	Martinsos
GH_TAGNAME=	d5774b4

CMAKE_ON=	BUILD_SHARED_LIBS
CMAKE_OFF=	EDLIB_BUILD_EXAMPLES

.include <bsd.port.mk>
