PORTNAME=	XML-Fast
PORTVERSION=	0.17
CATEGORIES=	net
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple and fast XML to hash conversion
WWW=		https://metacpan.org/release/XML-Fast

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/XML/Fast/Fast.so

.include <bsd.port.mk>
