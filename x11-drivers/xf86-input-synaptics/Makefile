PORTNAME=	xf86-input-synaptics
PORTVERSION=	1.9.1
PORTREVISION=	9
CATEGORIES=	x11-drivers

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.Org synaptics input driver
WWW=		https://www.x.org/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		pathfix xorg xorg-cat:driver
USE_XORG=	x11 xtst

OPTIONS_DEFINE=	EVDEV
OPTIONS_DEFAULT_FreeBSD_12=	EVDEV
OPTIONS_DEFAULT_FreeBSD_13=	EVDEV
OPTIONS_DEFAULT_FreeBSD_14=	EVDEV
OPTIONS_DEFAULT=${OPTIONS_DEFAULT_${OPSYS}_${OSREL:R}}
EVDEV_DESC=	Use evdev for input events (requires kernel support)

EVDEV_CONFIGURE_ENV=	BUILD_EVENTCOMM=yes
EVDEV_BUILD_DEPENDS=	${LOCALBASE}/include/linux/input.h:devel/evdev-proto
EVDEV_LIB_DEPENDS=	libevdev.so:devel/libevdev

.include <bsd.port.mk>
