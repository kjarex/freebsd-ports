PORTNAME=	Module-Implementation
PORTVERSION=	0.09
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Loads one of several alternate underlying implementations for a module
WWW=		https://metacpan.org/release/Module-Implementation

LICENSE=	ART20

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Module-Runtime>=0.012:devel/p5-Module-Runtime \
		p5-Try-Tiny>=0:lang/p5-Try-Tiny
TEST_DEPENDS=	p5-Test-Fatal>=0.006:devel/p5-Test-Fatal \
		p5-Test-NoTabs>=0:devel/p5-Test-NoTabs \
		p5-Test-Requires>=0:devel/p5-Test-Requires \
		p5-Test-Taint>=0:devel/p5-Test-Taint

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
