PORTNAME=	MooseX-Types-DateTime
PORTVERSION=	0.13
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ETHER
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	DateTime related constraints and coercions for Moose
WWW=		https://metacpan.org/release/MooseX-Types-DateTime

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENCE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DateTime>=0.43.02:devel/p5-DateTime \
		p5-DateTime-Locale>=0.40.01:devel/p5-DateTime-Locale \
		p5-DateTime-TimeZone>=0.95:devel/p5-DateTime-TimeZone \
		p5-Moose>=0.41:devel/p5-Moose \
		p5-MooseX-Types>=0.30:devel/p5-MooseX-Types \
		p5-namespace-clean>=0.19:devel/p5-namespace-clean
TEST_DEPENDS=	p5-Test-Fatal>=0:devel/p5-Test-Fatal

USES=		perl5
USE_PERL5=	modbuildtiny

NO_ARCH=	yes

.include <bsd.port.mk>
