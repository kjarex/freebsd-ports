PORTNAME=	Benchmark-Timer
PORTVERSION=	0.7112
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Code benchmarking tool
WWW=		https://metacpan.org/release/Benchmark-Timer

LICENSE=	GPLv2

BUILD_DEPENDS=	p5-Module-Install>0:devel/p5-Module-Install \
		p5-URI>=0:net/p5-URI

OPTIONS_DEFINE=	SAMPLE
OPTIONS_DEFAULT=	SAMPLE
SAMPLE_DESC=	Statistical Sampling Support
SAMPLE_BUILD_DEPENDS=	p5-Statistics-TTest>1:math/p5-Statistics-TTest

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes
.include <bsd.port.mk>
