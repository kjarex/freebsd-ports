PORTNAME=	InlineX-CPP2XS
PORTVERSION=	0.25
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SISYPHUS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Convert from Inline C++ code to XS
WWW=		https://metacpan.org/release/InlineX-CPP2XS

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Inline>=0.50:devel/p5-Inline \
		p5-Inline-CPP>=0.39:devel/p5-Inline-CPP
TEST_DEPENDS=	p5-Test-Warn>=0.24:devel/p5-Test-Warn

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
