PORTNAME=	DateTime-TimeZone-LMT
PORTVERSION=	1.01
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Local Mean Time time zone for DateTime
WWW=		https://metacpan.org/pod/DateTime::TimeZone::LMT

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DateTime>=0.12:devel/p5-DateTime \
		p5-DateTime-TimeZone>=0.13:devel/p5-DateTime-TimeZone \
		p5-Params-Validate>=0:devel/p5-Params-Validate
TEST_DEPENDS=	p5-Test-Fatal>=0:devel/p5-Test-Fatal

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
