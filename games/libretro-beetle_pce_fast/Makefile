PORTNAME=	libretro-beetle_pce_fast
PORTVERSION=	0.20220205
CATEGORIES=	games

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Standalone port of Mednafen PCE Fast to libretro
WWW=		https://github.com/libretro/beetle-pce-fast-libretro

LICENSE=	GPLv2

USES=		compiler:c++11-lib gmake
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	libretro
GH_PROJECT=	beetle-pce-fast-libretro
GH_TAGNAME=	e880168

PLIST_FILES=	lib/libretro/mednafen_pce_fast_libretro.so

do-install:
	${MKDIR} ${STAGEDIR}/${PREFIX}/lib/libretro;
	${INSTALL_LIB} ${WRKSRC}/mednafen_pce_fast_libretro.so ${STAGEDIR}/${PREFIX}/lib/libretro;

.include <bsd.port.mk>
