PORTNAME=	Data-Validate-URI
PORTVERSION=	0.07
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	freebsd-ports@t-b-o-h.net
COMMENT=	Common data validation methods for URIs
WWW=		https://metacpan.org/release/Data-Validate-URI

BUILD_DEPENDS=	p5-Data-Validate-Domain>=0:dns/p5-Data-Validate-Domain \
		p5-Data-Validate-IP>=0:net-mgmt/p5-Data-Validate-IP
RUN_DEPENDS=	p5-Data-Validate-Domain>=0:dns/p5-Data-Validate-Domain \
		p5-Data-Validate-IP>=0:net-mgmt/p5-Data-Validate-IP

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
