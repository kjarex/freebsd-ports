PORTNAME=	Net-Works
PORTVERSION=	0.22
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MAXMIND
PKGNAMEPREFIX=	p5-

MAINTAINER=	pi@FreeBSD.org
COMMENT=	APIs for IP addresses and networks
WWW=		https://metacpan.org/release/Net-Works

LICENSE=	ART20

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-List-AllUtils>=0.03:devel/p5-List-AllUtils \
		p5-Math-Int128>=0.07:math/p5-Math-Int128 \
		p5-namespace-autoclean>=0.13:devel/p5-namespace-autoclean \
		p5-Moo>=0:devel/p5-Moo
TEST_DEPENDS=	p5-Test-Fatal>=0:devel/p5-Test-Fatal

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
