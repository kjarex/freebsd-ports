PORTNAME=	MooseX-Role-Matcher
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	anes@anes.su
COMMENT=	Generic object matching based on attributes and methods
WWW=		https://metacpan.org/release/MooseX-Role-Matcher

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-List-MoreUtils>=0:lang/p5-List-MoreUtils \
		p5-MooseX-Role-Parameterized>=0.03:devel/p5-MooseX-Role-Parameterized
TEST_DEPENDS=	p5-Test-Deep>=0:devel/p5-Test-Deep

USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
