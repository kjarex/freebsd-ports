PORTNAME=	xfce4-calculator-plugin
PORTVERSION=	0.7.1
PORTREVISION=	1
CATEGORIES=	math xfce
MASTER_SITES=	XFCE/panel-plugins
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Simple calculator for the Xfce panel
WWW=		https://goodies.xfce.org/projects/panel-plugins/xfce4-calculator-plugin

LICENSE=	GPLv2

USES=		compiler:c11 gettext-tools gmake gnome libtool pkgconfig \
		tar:bz2 xfce xorg
USE_GNOME=	cairo gtk30 intltool
USE_XFCE=	panel
USE_XORG=	x11

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

.include <bsd.port.mk>
