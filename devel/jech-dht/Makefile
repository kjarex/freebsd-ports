PORTNAME=	dht
PORTVERSION=	0.26
CATEGORIES=	devel
MASTER_SITES=	http://www.pps.univ-paris-diderot.fr/~jch/software/files/

MAINTAINER=	rigoletto@FreeBSD.org
COMMENT=	Mainline variant of Kademlia Distributed Hash Table (DHT)
WWW=		http://www.pps.univ-paris-diderot.fr/~jch/software/bittorrent/

LICENSE=	MIT

USES=		uidfix

USE_LDCONFIG=	yes
MAKE_ENV=	STAGEDIR="${STAGEDIR}"

MAKEFILE=	${FILESDIR}/BSDmakefile

post-build:
	${SETENV} ${MAKE_ENV} ${MAKE} -C ${WRKSRC} -f \
		${FILESDIR}/Makefile.example

pre-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/include/dht

post-install:
	${SETENV} ${MAKE_ENV} ${MAKE} -C ${WRKSRC} -f \
		${FILESDIR}/Makefile.example install

.include <bsd.port.mk>
