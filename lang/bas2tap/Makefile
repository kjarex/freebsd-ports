PORTNAME=	bas2tap
PORTVERSION=	2.6
CATEGORIES=	lang
MASTER_SITES=	https://live.worldofspectrum.org/files/download/4e49dd79ef083d8/
DISTNAME=	${PORTNAME}${PORTVERSION:C/\.//}-generic

MAINTAINER=	rene@FreeBSD.org
COMMENT=	Convert 48k/128k ZX Spectrum BASIC text files to TAP files
WWW=		http://www.worldofspectrum.org/utilities.html

LICENSE=	GPLv2

USES=		zip

NO_WRKSUBDIR=	yes
PORTDOCS=	${PORTNAME}.doc
PLIST_FILES=	bin/${PORTNAME}

OPTIONS_DEFINE=	DOCS

do-build:
	${CC} ${WRKSRC}/${PORTNAME}.c -o ${WRKSRC}/${PORTNAME} -lm ${CFLAGS}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for file in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${file} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
