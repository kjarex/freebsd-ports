PORTNAME=	re
PORTVERSION=	0.5.8
CATEGORIES=	audio devel
MASTER_SITES=	http://www.creytiv.com/pub/

MAINTAINER=	crees@FreeBSD.org
COMMENT=	Library for real-time comms with async IO support
WWW=		http://www.creytiv.com/re.html

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/docs/COPYING

USES=		gmake ssl
USE_LDCONFIG=	yes
MAKE_ARGS+=	SYSROOT_ALT=${OPENSSLBASE}

PORTDATA=	re.mk

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/include/${PORTNAME} ${STAGEDIR}${DATADIR}
	(cd ${WRKSRC}/include && \
	    ${COPYTREE_SHARE} \*.h ${STAGEDIR}${PREFIX}/include/${PORTNAME})
	${INSTALL_DATA} ${WRKSRC}/mk/${PORTNAME}.mk ${STAGEDIR}${DATADIR}
	${INSTALL_LIB} ${WRKSRC}/lib${PORTNAME}.[sa]* ${STAGEDIR}${PREFIX}/lib

.include <bsd.port.mk>
