PORTNAME=	geekcode
PORTVERSION=	1.7.3
CATEGORIES=	misc
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Geek Code Generator
WWW=		http://geekcode.sourceforge.net/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

MAKE_ARGS=	CC="${CC}" CFLAGS="${CFLAGS} -fcommon"

PLIST_FILES=	bin/geekcode
PORTDOCS=	geekcode.txt

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/geekcode ${STAGEDIR}${PREFIX}/bin

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/geekcode.txt ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
