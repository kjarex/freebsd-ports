PORTNAME=	Catalyst-View-HTML-Template-Compiled
PORTVERSION=	0.16
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	HTML::Template::Compiled View Class
WWW=		https://metacpan.org/release/Catalyst-View-HTML-Template-Compiled

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTML-Template-Compiled>=0.74:www/p5-HTML-Template-Compiled \
		p5-Path-Class>=0:devel/p5-Path-Class \
		p5-Catalyst-Runtime>=0:www/p5-Catalyst-Runtime \
		p5-Catalyst-Devel>=1.00:www/p5-Catalyst-Devel

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
