PORTNAME=	spellutils
PORTVERSION=	0.7
PORTREVISION=	4
CATEGORIES=	textproc
MASTER_SITES=	LOCAL/thierry

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Programs used to isolate some parts or texts before spell-checking
WWW=		https://www.sourcefiles.org/Utilities/Text_Utilities/spellutils-0.7.tar.bz2.shtml

LICENSE=	GPLv2

GNU_CONFIGURE=	yes
USES=		gettext tar:bzip2
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib -lintl

DOCS=		NEWS README
EXAMPLES=	aspell.sl

OPTIONS_DEFINE=	DOCS EXAMPLES

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
.for FILE in ${DOCS}
	${INSTALL_DATA} ${WRKSRC}/${FILE} ${STAGEDIR}${DOCSDIR}
.endfor
.endif
.if ${PORT_OPTIONS:MEXAMPLES}
.for FILE in ${EXAMPLES}
	${INSTALL_DATA} ${FILESDIR}/${FILE} ${STAGEDIR}${EXAMPLESDIR}
.endfor
.endif

.include <bsd.port.mk>
