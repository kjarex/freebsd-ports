PORTNAME=	findmaildirs
PORTVERSION=	0.4
CATEGORIES=	mail

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Simple utility to create list of maildirs for mutt
WWW=		https://github.com/AMDmi3/findmaildirs

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GITHUB=	yes
GH_ACCOUNT=	AMDmi3

PLIST_FILES=	bin/${PORTNAME}

PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.md ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
