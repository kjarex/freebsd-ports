PORTNAME=	Module-Manifest
PORTVERSION=	1.09
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Parse and examine a Perl distribution MANIFEST file
WWW=		https://metacpan.org/release/Module-Manifest

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Params-Util>=0:devel/p5-Params-Util \
		p5-Test-Warn>=0:devel/p5-Test-Warn
TEST_DEPENDS=	p5-Test-Exception>=0:devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
