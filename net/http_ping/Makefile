PORTNAME=	http_ping
PORTVERSION=	20050629
PORTREVISION=	1
CATEGORIES=	net www
MASTER_SITES=	http://www.acme.com/software/${PORTNAME}/
DISTNAME=	${PORTNAME}_29jun2005

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Measure HTTP Latency
WWW=		https://www.acme.com/software/http_ping/

USES=		ssl
WRKSRC=		${WRKDIR}/${PORTNAME}
CFLAGS+=	-I${OPENSSLINC}
LDFLAGS+=	-L${OPENSSLLIB}
PLIST_FILES=	bin/http_ping man/man1/http_ping.1.gz

.include <bsd.port.mk>
