PORTNAME=	scct
PORTVERSION=	0.1
CATEGORIES=	sysutils

MAINTAINER=	jrm@FreeBSD.org
COMMENT=	Simple Cluster_SSH Clone using Tmux
WWW=		https://github.com/Jehops/scct

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	tmux:sysutils/tmux

NO_ARCH=	yes
NO_BUILD=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	Jehops

PLIST_FILES=	bin/scct
PORTDOCS=	README.org

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/scct ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.org ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
