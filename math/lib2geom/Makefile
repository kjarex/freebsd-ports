PORTNAME=	lib2geom
DISTVERSION=	1.1
PORTREVISION=	3
CATEGORIES=	math gnome
MASTER_SITES=	https://gitlab.com/inkscape/${PORTNAME}/-/archive/${DISTVERSION}/

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Easy to use 2D geometry library in C++
WWW=		https://gitlab.com/inkscape/lib2geom

BUILD_DEPENDS=	googletest>0:devel/googletest
LIB_DEPENDS=	libdouble-conversion.so:devel/double-conversion \
		libgsl.so:math/gsl \
		libboost_thread.so:devel/boost-libs

USES=		cmake gettext-runtime gnome localbase:ldflags pkgconfig
USE_GNOME=	cairo glib20
CMAKE_ON=	2GEOM_BUILD_SHARED

.include <bsd.port.mk>
