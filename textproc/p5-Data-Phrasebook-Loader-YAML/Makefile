PORTNAME=	Data-Phrasebook-Loader-YAML
PORTVERSION=	0.13
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Loader class for phrasebook implementations using YAML
WWW=		https://metacpan.org/release/Data-Phrasebook-Loader-YAML

LICENSE=	ART20

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Data-Phrasebook>=0.24:textproc/p5-Data-Phrasebook \
		p5-YAML>=0.35:textproc/p5-YAML
TEST_DEPENDS=	p5-Test-Distribution>=0:devel/p5-Test-Distribution

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
