PORTNAME=	Data-Validate-IP
PORTVERSION=	0.27
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DROLSKY
PKGNAMEPREFIX=	p5-

MAINTAINER=	freebsd-ports@t-b-o-h.net
COMMENT=	Common data validation methods for IPs
WWW=		https://metacpan.org/release/Data-Validate-IP

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-NetAddr-IP>=4:net-mgmt/p5-NetAddr-IP
TEST_DEPENDS=	p5-Test-Requires>=0:devel/p5-Test-Requires \
		p5-Test-Taint>=0:devel/p5-Test-Taint

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
