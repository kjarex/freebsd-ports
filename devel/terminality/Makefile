PORTNAME=	terminality
PORTVERSION=	2.1
CATEGORIES=	devel
MASTER_SITES=	LOCAL/gabor
DISTNAME=	tn-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Cross-platform terminal manipulation library

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING.LIB

USES=		ncurses
USE_CSTD=	gnu89

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e 's@-lncurses@$$(LDFLAGS) -lncurses@g' \
		${WRKSRC}/demo/Makefile ${WRKSRC}/dlgc/Makefile

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/include/tn
	${INSTALL_DATA} ${WRKSRC}/*.h ${STAGEDIR}${PREFIX}/include/tn
	${INSTALL_DATA} ${WRKSRC}/libtn.a ${STAGEDIR}${PREFIX}/lib

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${CP} -R ${WRKSRC}/doc/* ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
