PORTNAME=	libptytty
PORTVERSION=	2.0
CATEGORIES=	sysutils
MASTER_SITES=	http://dist.schmorp.de/libptytty/%SUBDIR%/
MASTER_SITE_SUBDIR=	. Attic

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	OS independent and secure pseudo-tty management
WWW=		http://software.schmorp.de/pkg/libptytty.html

LICENSE=	GPLv2

USES=		cmake

OPTIONS_DEFINE=	DOCS EXAMPLES

PORTDOCS=	README
PORTEXAMPLES=	c-sample.c

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

post-install-EXAMPLES-on:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/eg/c-sample.c ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
