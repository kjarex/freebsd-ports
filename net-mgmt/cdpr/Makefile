PORTNAME=	cdpr
PORTVERSION=	2.4
CATEGORIES=	net-mgmt
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Cisco Discovery Protocol Reporter
WWW=		http://www.monkeymental.com/nuke/

LICENSE=	GPLv2

USES=		dos2unix tar:tgz
DOS2UNIX_GLOB=	*.c *.h
LDFLAGS+=	-L${LOCALBASE}/lib -lpcap

# Upstreams website seems dead. Fix build with clang11
CFLAGS+=		-fcommon

DOCSDIR=	${PREFIX}/share/doc/${PKGNAMEPREFIX}${PORTNAME}

OPTIONS_DEFINE=	DOCS

do-build:
	(cd ${WRKSRC} && ${CC} ${CFLAGS} ${LDFLAGS} -o ${PORTNAME} ${PORTNAME}.c cdprs.c conffile.c)

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/cdprs/* ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/cdpr.conf ${STAGEDIR}${DATADIR}
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.cdprs ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
