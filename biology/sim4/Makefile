PORTNAME=	sim4
PORTVERSION=	2003.09.21
PORTREVISION=	1
CATEGORIES=	biology
MASTER_SITES=	http://globin.cse.psu.edu/ftp/dist/sim4/
DISTNAME=	${PORTNAME}.${PORTVERSION:S/./-/g}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Algorithm for aligning expressed DNA with genomic sequences
WWW=		http://globin.cse.psu.edu/

LICENSE=	GPLv2

WRKSRC=		${WRKDIR}/sim4.${PORTVERSION:S/./-/g}

ALL_TARGET=	sim4
PLIST_FILES=	bin/sim4

post-patch:
	${REINPLACE_CMD} -e 's|^CC=|CC?=|g ; \
		s|^CFLAGS=|CFLAGS+=|g' ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/sim4 ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
