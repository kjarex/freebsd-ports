PORTNAME=	libretro-fbneo
PORTVERSION=	0.20220406
CATEGORIES=	games

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Final Burn Alpha fork for libretro
WWW=		https://github.com/libretro/FBNeo

LICENSE=	FBNeo
LICENSE_NAME=	FBNeo
LICENSE_FILE=	${WRKSRC}/src/license.txt
LICENSE_PERMS=	dist-mirror pkg-mirror auto-accept

BROKEN=		does not build: non-const lvalue reference to type 'basic_ostringstream<...>' cannot bind to a temporary of type 'basic_ostringstream<...>'

USES=		compiler:c11 gmake gl
USE_LDCONFIG=	yes
USE_GL=		gl

PLIST_FILES=	lib/libretro/fbneo_libretro.so

USE_GITHUB=	yes
GH_ACCOUNT=	libretro
GH_PROJECT=	FBNeo
GH_TAGNAME=	01bf2e1

MAKEFILE=	Makefile.freebsd

do-install:
	${MKDIR} ${STAGEDIR}/${PREFIX}/lib/libretro;
	${INSTALL_LIB} ${WRKSRC}/src/burner/libretro/fbneo_libretro.so ${STAGEDIR}/${PREFIX}/lib/libretro;

.include <bsd.port.mk>
