PORTNAME=	DateTime-Calendar-FrenchRevolutionary
PORTVERSION=	0.17
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Dates in the French Revolutionary Calendar
WWW=		https://metacpan.org/release/DateTime-Calendar-FrenchRevolutionary

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DateTime>=0.14:devel/p5-DateTime \
		p5-Params-Validate>=0:devel/p5-Params-Validate \
		p5-Roman>=1.22:math/p5-Roman

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
