PORTNAME=	debugedit
PORTVERSION=	20170411.1
CATEGORIES=	devel

MAINTAINER=	ports@FreeBSD.org
COMMENT=	ELF file debug information extractor and editor
WWW=		https://github.com/CoryXie/DebugEdit

LICENSE=	GPLv2+

LIB_DEPENDS=	libpopt.so:devel/popt

USE_GITHUB=	yes
GH_ACCOUNT=	CoryXie
GH_PROJECT=	DebugEdit
GH_TAGNAME=	b1e81ec

USES=		gmake

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/debugedit ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.txt ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
