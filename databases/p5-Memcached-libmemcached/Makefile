PORTNAME=	Memcached-libmemcached
PORTVERSION=	1.001801
PORTREVISION=	1
CATEGORIES=	databases devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Thin fast full interface to the libmemcached client API
WWW=		https://metacpan.org/release/Memcached-libmemcached

LIB_DEPENDS=	libmemcached.so:databases/libmemcached

USES=		perl5
USE_PERL5=	configure
USE_LDCONFIG=	yes

post-extract:
	@${RM} -r ${WRKDIR}/src

post-patch:
	@${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|g' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
