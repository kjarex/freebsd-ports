PORTNAME=	JSON-Parse
PORTVERSION=	0.62
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Read JSON into a Perl variable
WWW=		https://metacpan.org/release/JSON-Parse

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/JSON/Parse/Parse.so

.include <bsd.port.mk>
