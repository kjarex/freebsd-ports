PORTNAME=	blackshadeselite
PORTVERSION=	0.0.1
PORTREVISION=	11
CATEGORIES=	games
MASTER_SITES=	https://mirror.amdmi3.ru/distfiles/

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Psychic Bodyguard FPS - protect the VIP
WWW=		https://web.archive.org/web/20170521213338/http://home.gna.org/blackshadeselite/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libvorbis.so:audio/libvorbis

USES=		compiler:c++11-lang gl gmake openal:al,alut sdl tar:bzip2
USE_CXXSTD=	c++98
USE_SDL=	sdl
USE_GL=		gl glu

MAKE_ARGS=	CC="${CC}" CXX="${CXX}"
LDFLAGS_i386=	-Wl,-znotext

WRKSRC=		${WRKDIR}/${PORTNAME}

PLIST_FILES=	bin/blackshades
PORTDOCS=	Readme Readme.elite
PORTDATA=	*

OPTIONS_DEFINE=	DOCS

MAKE_JOBS_UNSAFE=	yes

post-extract:
	@${FIND} ${WRKSRC}/Data -name '._*' -delete

post-patch:
	@${REINPLACE_CMD} -e '/InitGL/ s|.*|chdir("${DATADIR}"); &|' ${WRKSRC}/Source/Main.cpp

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/objs/blackshades ${STAGEDIR}${PREFIX}/bin/
	@cd ${WRKSRC} && ${COPYTREE_SHARE} Data ${STAGEDIR}${DATADIR}/

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
