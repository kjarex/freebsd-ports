PORTNAME=	rcadm
PORTVERSION=	0.1
CATEGORIES=	sysutils

MAINTAINER=	reinier@skoef.nl
COMMENT=	Utility for administrating rc.conf
WWW=		https://github.com/skoef/rcadm

USE_GITHUB=	yes
GH_ACCOUNT=	skoef
GH_TAGNAME=	7a1bf44

PLIST_FILES=	sbin/${PORTNAME}

do-build:
.for file in ${PORTNAME}
	${REINPLACE_CMD} -e 's#/usr/local#${LOCALBASE}#g' ${WRKSRC}/${file}
.endfor

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/sbin

.include <bsd.port.mk>
