PORTNAME=	MooX-Options
PORTVERSION=	4.103
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	espen@tagestad.no
COMMENT=	Option keywords to your object (Mo/Moo/Moose)
WWW=		https://metacpan.org/release/MooX-Options

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Data-Record>=0:devel/p5-Data-Record \
		p5-Getopt-Long-Descriptive>=0.091:devel/p5-Getopt-Long-Descriptive \
		p5-JSON>=0:converters/p5-JSON \
		p5-MRO-Compat>=0:devel/p5-MRO-Compat \
		p5-Moo>=1.003001:devel/p5-Moo \
		p5-MooX-ConfigFromFile>=0:devel/p5-MooX-ConfigFromFile \
		p5-Path-Class>=0.32:devel/p5-Path-Class \
		p5-Regexp-Common>=0:textproc/p5-Regexp-Common \
		p5-Term-Size-Any>=0:devel/p5-Term-Size-Any \
		p5-Unicode-LineBreak>=0:textproc/p5-Unicode-LineBreak \
		p5-strictures>=0:devel/p5-strictures \
		p5-MooX-Locale-Passthrough>=0:devel/p5-MooX-Locale-Passthrough
TEST_DEPENDS=	p5-Capture-Tiny>=0:devel/p5-Capture-Tiny \
		p5-Mo>=0:devel/p5-Mo \
		p5-Moose>=0:devel/p5-Moose \
		p5-Role-Tiny>=0:devel/p5-Role-Tiny \
		p5-Test-Requires>=0:devel/p5-Test-Requires \
		p5-Test-Trap>=0:devel/p5-Test-Trap \
		p5-Try-Tiny>=0:lang/p5-Try-Tiny \
		p5-namespace-clean>=0:devel/p5-namespace-clean

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
