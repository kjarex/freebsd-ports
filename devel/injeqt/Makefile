PORTNAME=	injeqt
PORTVERSION=	1.2.0
PORTREVISION=	5
CATEGORIES=	devel

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Dependency injection framework for Qt
WWW=		https://github.com/vogel/injeqt/

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	vogel

USES=		cmake compiler:c++11-lib pathfix qt:5
USE_QT=		core buildtools:build qmake:build testlib:build
USE_LDCONFIG=	yes

CMAKE_ON=	DISABLE_EXAMPLES \
		DISABLE_COVERAGE

PLIST_SUB=	VERSION=${PORTVERSION:R}

.include <bsd.port.mk>
