PORTNAME=	gcolor3
DISTVERSIONPREFIX=	v
DISTVERSION=	2.3.1
CATEGORIES=	graphics

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Colour picker is a simple color chooser
WWW=		https://www.hjdskes.nl/projects/gcolor3/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		gnome gettext meson libtool pkgconfig
USE_GITLAB=	yes
GL_SITE=	https://gitlab.gnome.org
GL_ACCOUNT=	World
GL_COMMIT=	17dca0125fc3c931418d8723b684332d35bd5715
USE_GNOME=	cairo gdkpixbuf2 gtk30 intltool

MESON_ARGS=	-Dwerror=false

.include <bsd.port.mk>
