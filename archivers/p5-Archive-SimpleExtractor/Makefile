PORTNAME=	Archive-SimpleExtractor
PORTVERSION=	0.11
PORTREVISION=	2
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple module for extract archives
WWW=		https://metacpan.org/release/Archive-SimpleExtractor

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Archive-Rar>=2.02:archivers/p5-Archive-Rar \
		p5-Archive-Zip>=1.30:archivers/p5-Archive-Zip
TEST_DEPENDS=	p5-Test-Pod>=0:devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=0:devel/p5-Test-Pod-Coverage

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
