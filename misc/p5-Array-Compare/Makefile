PORTNAME=	Array-Compare
PORTVERSION=	3.0.8
DISTVERSIONPREFIX=	v
CATEGORIES=	misc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for comparing arrays
WWW=		https://metacpan.org/release/Array-Compare

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Moo>0:devel/p5-Moo \
		p5-Type-Tiny>0:devel/p5-Type-Tiny
TEST_DEPENDS=	p5-Test-NoWarnings>0:devel/p5-Test-NoWarnings

USES=		perl5
USE_PERL5=	modbuild

NO_ARCH=	yes

PLIST_FILES=	${SITE_PERL}/Array/Compare.pm \
		${SITE_MAN3}/Array::Compare.3.gz

.include <bsd.port.mk>
