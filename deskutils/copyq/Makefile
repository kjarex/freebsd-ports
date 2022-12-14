PORTNAME=	copyq
DISTVERSIONPREFIX=	v
DISTVERSION=	6.2.0
CATEGORIES=	deskutils

MAINTAINER=	eduardo@FreeBSD.org
COMMENT=	Qt5 based clipboard manager
WWW=		https://github.com/hluk/CopyQ

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${LOCALBASE}/share/ECM/cmake/ECMConfig.cmake:devel/kf5-extra-cmake-modules
LIB_DEPENDS=	libdouble-conversion.so:devel/double-conversion \
		libfreetype.so:print/freetype2 \
		libgraphite2.so:graphics/graphite2 \
		libharfbuzz.so:print/harfbuzz \
		libicui18n.so:devel/icu \
		libpcre.so:devel/pcre \
		libpcre2-16.so:devel/pcre2 \
		libpng16.so:graphics/png \
		libwayland-client.so:graphics/wayland \
		libzstd.so:archivers/zstd

USES=		cmake compiler:c++11-lang gl gnome iconv:wchar_t kde:5 qt:5 \
		xorg
USE_GITHUB=	yes
GH_ACCOUNT=	hluk
GH_PROJECT=	CopyQ
USE_GL=		gl
USE_GNOME=	glib20
USE_KDE=	notifications
USE_LDCONFIG=	yes

USE_QT=		core declarative gui network script svg wayland widgets \
		x11extras buildtools:build linguisttools:build qmake:build \
		imageformats:run
USE_XORG=	x11 xau xcb xdmcp xtst

LDFLAGS+=	-Wl,--as-needed

PORTSCOUT=	limit:^d\.d\.

OPTIONS_DEFINE=		PLUGINS WEBKIT
OPTIONS_DEFAULT=	PLUGINS WEBKIT
OPTIONS_SUB=		yes

PLUGINS_CMAKE_BOOL=	WITH_PLUGINS

WEBKIT_IMPLIES=		PLUGINS
WEBKIT_USE=		QT=webkit
WEBKIT_CMAKE_BOOL=	WITH_WEBKIT

.include <bsd.port.mk>
