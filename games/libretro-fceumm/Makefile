PORTNAME=	libretro-fceumm
PORTVERSION=	0.20220406
CATEGORIES=	games

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Unofficial build of FCEU Ultra by CaH4e3
WWW=		https://github.com/libretro/libretro-fceumm

LICENSE=	GPLv2

USES=		compiler:c++11-lib gmake
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	libretro
GH_TAGNAME=	b3c35b6

PLIST_FILES=	lib/libretro/fceumm_libretro.so

do-install:
	${MKDIR} ${STAGEDIR}/${PREFIX}/lib/libretro;
	${INSTALL_LIB} ${WRKSRC}/fceumm_libretro.so ${STAGEDIR}/${PREFIX}/lib/libretro;

.include <bsd.port.mk>
