PORTNAME=	Devel-GlobalDestruction-XS
PORTVERSION=	0.03
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Faster implementation of the Devel::GlobalDestruction API
WWW=		https://metacpan.org/release/Devel-GlobalDestruction-XS

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Devel/GlobalDestruction/XS/XS.so

.include <bsd.port.mk>
