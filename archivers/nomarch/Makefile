PORTNAME=	nomarch
PORTVERSION=	1.4
CATEGORIES=	archivers
MASTER_SITES=	SUNSITE/utils/compress

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Extracts files from the old '.arc' archive format
WWW=		http://rus.members.beeb.net/nomarch.html

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

PLIST_FILES=	bin/nomarch share/man/man1/nomarch.1.gz
PORTDOCS=	COPYING ChangeLog NEWS README TODO
MAKE_ARGS=	CC="${CC}" CFLAGS="${CFLAGS}"

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/nomarch ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/nomarch.1 ${STAGEDIR}${PREFIX}/share/man/man1
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for i in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${i} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
