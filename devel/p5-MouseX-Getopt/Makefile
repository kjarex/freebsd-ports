PORTNAME=	MouseX-Getopt
PORTVERSION=	0.3600
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C/00$//}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for a Mouse role to process command line options
WWW=		https://metacpan.org/release/MouseX-Getopt

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-Mouse>=0.64:devel/p5-Mouse \
	p5-Getopt-Long-Descriptive>=0.091:devel/p5-Getopt-Long-Descriptive
TEST_DEPENDS=	p5-Test-Exception>=0:devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	modbuild
NO_ARCH=	YES

.include <bsd.port.mk>
