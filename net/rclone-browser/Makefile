PORTNAME=	rclone-browser
DISTVERSION=	1.8.0
CATEGORIES=	net

MAINTAINER=	driesm@FreeBSD.org
COMMENT=	Simple cross platform GUI for rclone
WWW=		https://github.com/kapitainsky/RcloneBrowser

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rclone:net/rclone

USES=		cmake pkgconfig qt:5
USE_GITHUB=	yes
GH_ACCOUNT=	kapitainsky
GH_PROJECT=	RcloneBrowser
USE_QT=		buildtools:build core gui qmake:build widgets

# Prepare for Qt5-5.15
CFLAGS+=	-Wno-deprecated

.include <bsd.port.mk>
