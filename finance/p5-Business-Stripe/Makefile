PORTNAME=	Business-Stripe
PORTVERSION=	0.07
CATEGORIES=	finance perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 module interface for the Stripe.com payment system
WWW=		https://metacpan.org/release/Business-Stripe

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTTP-Message>=0.0:www/p5-HTTP-Message \
		p5-JSON>=0.0:converters/p5-JSON \
		p5-libwww>0.0:www/p5-libwww

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
