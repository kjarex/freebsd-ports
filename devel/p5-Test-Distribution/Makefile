PORTNAME=	Test-Distribution
PORTVERSION=	2.00
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perform tests on all modules of a distribution
WWW=		https://metacpan.org/release/Test-Distribution

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-File-Find-Rule>=0:devel/p5-File-Find-Rule \
		p5-Pod-Coverage>=0:devel/p5-Pod-Coverage \
		p5-Test-Pod>=0:devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=0:devel/p5-Test-Pod-Coverage

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
