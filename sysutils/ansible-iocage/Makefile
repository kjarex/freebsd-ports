PORTNAME=	ansible-iocage
DISTVERSION=	g20200327
PORTEPOCH=	1
CATEGORIES=	sysutils
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lcook@FreeBSD.org
COMMENT=	Ansible module for iocage
WWW=		https://github.com/fractalcells/ansible-iocage

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		ansible:module python shebangfix
USE_GITHUB=	yes
GH_ACCOUNT=	fractalcells
GH_TAGNAME=	0f0b5e6e5df45b653ed8c512207cb4cc2f58f82d
SHEBANG_FILES=	iocage

NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES=	${ANSIBLE_MODULESDIR}/iocage
PORTDOCS=	README.md

OPTIONS_DEFINE=	DOCS

do-install:
	${MKDIR} ${STAGEDIR}${ANSIBLE_MODULESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/iocage \
		${STAGEDIR}${ANSIBLE_MODULESDIR}/iocage

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} \
		${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
