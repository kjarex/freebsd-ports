PORTNAME=	libretro-stella2014
PORTVERSION=	0.20220205
CATEGORIES=	games

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Port of Stella (Atari 2600) to libretro (2014)
WWW=		https://github.com/libretro/stella2014-libretro

LICENSE=	GPLv2

USES=		compiler:c++11-lib gmake
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	libretro
GH_PROJECT=	stella2014-libretro
GH_TAGNAME=	1a2e96b

PLIST_FILES=	lib/libretro/stella2014_libretro.so

do-install:
	${MKDIR} ${STAGEDIR}/${PREFIX}/lib/libretro;
	${INSTALL_LIB} ${WRKSRC}/stella2014_libretro.so ${STAGEDIR}/${PREFIX}/lib/libretro;

.include <bsd.port.mk>
