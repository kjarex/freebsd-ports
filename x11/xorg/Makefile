PORTNAME=	xorg
PORTVERSION=	7.7
PORTREVISION=	3
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.Org complete distribution metaport
WWW=		https://www.x.org/

USES=		metaport

RUN_DEPENDS+=	${LOCALBASE}/libdata/pkgconfig/dri.pc:graphics/mesa-dri

# data
RUN_DEPENDS+=	${LOCALBASE}/libdata/pkgconfig/xbitmaps.pc:x11/xbitmaps \
		${LOCALBASE}/share/icons/handhelds/cursors/X_cursor:x11-themes/xcursor-themes

OPTIONS_DEFINE=	DOCS

DOCS_RUN_DEPENDS+=	${LOCALBASE}/share/doc/xorg-docs/README.xml:x11/xorg-docs

# app, lib, font, driver
RUN_DEPENDS+=	xorg-apps>0:x11/xorg-apps \
		xorg-libraries>0:x11/xorg-libraries \
		xorg-fonts>0:x11-fonts/xorg-fonts \
		xorg-drivers>0:x11-drivers/xorg-drivers

.if defined(XORG_COMPLETE)
RUN_DEPENDS+=	Xnest:x11-servers/xorg-server@xnest \
		Xvfb:x11-servers/xorg-server@xvfb
.endif

.include <bsd.port.mk>
