PORTNAME=	IO-Callback
PORTVERSION=	2.00
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to emulate file interface for a code reference
WWW=		https://metacpan.org/release/IO-Callback

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-IO-String>=0:devel/p5-IO-String
TEST_DEPENDS=	p5-File-Slurp>=0:devel/p5-File-Slurp \
		p5-Test-Exception>=0:devel/p5-Test-Exception \
		p5-Test-NoWarnings>=0:devel/p5-Test-NoWarnings

USES=		perl5
USE_PERL5=	modbuild

NO_ARCH=	yes

.include <bsd.port.mk>
