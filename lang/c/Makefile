PORTNAME=	c
DISTVERSIONPREFIX=	v
DISTVERSION=	0.14
CATEGORIES=	lang

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	Tool to compile and run C programs like a shell script
WWW=		https://github.com/ryanmjacobs/c

LICENSE=	MIT

RUN_DEPENDS=	bash:shells/bash

USE_GITHUB=	yes
GH_ACCOUNT=	ryanmjacobs

NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
