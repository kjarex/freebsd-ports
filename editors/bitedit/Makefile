PORTNAME=	bitedit
PORTVERSION=	0.9.4
CATEGORIES=	editors
MASTER_SITES=	http://freebsdcluster.org/~mich/software/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple ncurses file editing program
WWW=		http://ledge.co.za/bitedit/

LICENSE=	GPLv2

USES=		ncurses
MAKE_ARGS=	CFLAGS="${CFLAGS} -DVERSION=\\\"${PORTVERSION}\\\""

DOCSDIR=	${PREFIX}/share/doc/${PORTNAME}

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bitedit ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/bitedit.txt ${STAGEDIR}${DOCSDIR}/bitedit.txt

.include <bsd.port.mk>
