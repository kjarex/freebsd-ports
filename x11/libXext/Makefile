PORTNAME=	libXext
PORTVERSION=	1.3.4
PORTEPOCH=	1
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X11 Extension library
WWW=		https://www.freedesktop.org/Software/xlibs

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cpe xorg xorg-cat:lib
USE_XORG=	x11 xau xorgproto
CPE_VENDOR=	x
CPE_PRODUCT=	libxext

CONFIGURE_ARGS+=--disable-specs --without-xmlto
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
