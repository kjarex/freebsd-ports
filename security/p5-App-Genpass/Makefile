PORTNAME=	App-Genpass
PORTVERSION=	2.401
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:XSAWYERX
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Quickly and easily create secure passwords
WWW=		https://metacpan.org/release/App-Genpass

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Config-Any>=0:devel/p5-Config-Any \
		p5-File-HomeDir>=0:devel/p5-File-HomeDir \
		p5-List-AllUtils>=0:devel/p5-List-AllUtils \
		p5-Math-Random-Secure>=0.06:math/p5-Math-Random-Secure \
		p5-Moo>=0:devel/p5-Moo \
		p5-MooX-Types-MooseLike>=0:devel/p5-MooX-Types-MooseLike \
		p5-namespace-clean>=0.20:devel/p5-namespace-clean
TEST_DEPENDS=	p5-List-MoreUtils>=0:lang/p5-List-MoreUtils \
		p5-Test-Deep>=0:devel/p5-Test-Deep

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
