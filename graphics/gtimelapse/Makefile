PORTNAME=	gtimelapse
DISTVERSION=	0.1
PORTREVISION=	17
CATEGORIES=	graphics
MASTER_SITES=	SF/${PORTNAME}/Relase	# yes, this is not a typo (here)

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Application for capturing images to generate timelapse videos
WWW=		https://sourceforge.net/projects/gtimelapse/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libgphoto2.so:graphics/libgphoto2

WRKSRC=		${WRKDIR}/${PORTNAME}

GNU_CONFIGURE=	yes
USES=		autoreconf compiler:c++11-lib libtool pkgconfig
USE_WX=		3.0
USE_CXXSTD=	c++11
WX_CONF_ARGS=	absolute

PLIST_FILES=	bin/${PORTNAME}

DESKTOP_ENTRIES="gTimelapse" "" "" "${PORTNAME}" "Graphics;GTK;" ""

.include <bsd.port.mk>
