PORTNAME=	kColorPicker
DISTVERSIONPREFIX=	v
DISTVERSION=	0.2.0
PORTREVISION=	1
CATEGORIES=	graphics kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt based Color Picker library with popup menu
WWW=		https://github.com/ksnip/kColorPicker

LICENSE=	LGPL3+
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake compiler:c++11-lang qt:5
USE_GITHUB=	yes
GH_ACCOUNT=	ksnip
USE_QT=		core gui widgets \
		buildtools:build qmake:build testlib:build

CMAKE_ON=	BUILD_SHARED_LIBS

.include <bsd.port.mk>
