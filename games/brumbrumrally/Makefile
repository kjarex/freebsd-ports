PORTNAME=	brumbrumrally
PORTVERSION=	0.7
CATEGORIES=	games
MASTER_SITES=	http://dataapa.net/brumbrumrally/files/

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Racing game with randomized tracks
WWW=		https://dataapa.net/brumbrumrally/

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		dos2unix gmake sdl
DOS2UNIX_FILES=	src/hqx/common.h
USE_SDL=	sdl image net

PORTDOCS=	NEWS README
PORTDATA=	*

OPTIONS_DEFINE=	DOCS

post-build:
	@${STRIP_CMD} ${WRKSRC}/${PORTNAME}

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${STAGEDIR}${DOCSDIR}/
.endfor

.include <bsd.port.mk>
