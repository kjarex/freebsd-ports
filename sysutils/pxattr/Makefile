PORTNAME=	pxattr
PORTVERSION=	2.1.0
CATEGORIES=	sysutils
MASTER_SITES=	https://www.lesbonscomptes.com/pxattr/

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Portable utility to work with file extended attributes
WWW=		https://www.lesbonscomptes.com/pxattr/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

PLIST_FILES=	bin/${PORTNAME}
PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

do-install-DOCS-on:
	cd ${WRKSRC}/doc/html && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
