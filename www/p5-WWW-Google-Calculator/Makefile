PORTNAME=	WWW-Google-Calculator
PORTVERSION=	0.07
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	Simple interface for Google calculator
WWW=		https://metacpan.org/release/WWW-Google-Calculator

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Accessor>=0:devel/p5-Class-Accessor \
		p5-HTML-Parser>=0:www/p5-HTML-Parser \
		p5-URI>=0:net/p5-URI \
		p5-WWW-Mechanize>=0:www/p5-WWW-Mechanize

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
