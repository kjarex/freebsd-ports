PORTNAME=	Test-Moose-More
PORTVERSION=	0.050
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	More tools for testing Moose packages
WWW=		https://metacpan.org/release/Test-Moose-More

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Data-OptList>=0:devel/p5-Data-OptList \
		p5-List-MoreUtils>=0:lang/p5-List-MoreUtils \
		p5-Moose>=0:devel/p5-Moose \
		p5-Sub-Exporter-Progressive>=0:devel/p5-Sub-Exporter-Progressive \
		p5-Syntax-Keyword-Junction>=0:devel/p5-Syntax-Keyword-Junction
TEST_DEPENDS=	p5-TAP-SimpleOutput>=0.009:devel/p5-TAP-SimpleOutput \
		p5-Test-CheckDeps>=0.010:devel/p5-Test-CheckDeps \
		p5-namespace-autoclean>=0:devel/p5-namespace-autoclean

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
