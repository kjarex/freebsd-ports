PORTNAME=	MooX-Cmd
PORTVERSION=	0.017
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Giving an easy Moo style way to make command organized CLI apps
WWW=		https://metacpan.org/release/MooX-Cmd

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-IO-TieCombine>=0:devel/p5-IO-TieCombine \
		p5-Module-Pluggable>=4.8:devel/p5-Module-Pluggable \
		p5-Moo>=0.009013:devel/p5-Moo \
		p5-Package-Stash>=0.33:devel/p5-Package-Stash \
		p5-Regexp-Common>=2011121001:textproc/p5-Regexp-Common \
		p5-Test-LoadAllModules>=0.021:devel/p5-Test-LoadAllModules
TEST_DEPENDS=	p5-IO-TieCombine>=0:devel/p5-IO-TieCombine

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
