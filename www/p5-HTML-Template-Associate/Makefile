PORTNAME=	HTML-Template-Associate
PORTVERSION=	2.01
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ALEXP
PKGNAMEPREFIX=	p5-

MAINTAINER=	rodrigo@FreeBSD.org
COMMENT=	Bridges gap between HTML::Template and other modules
WWW=		https://metacpan.org/release/HTML-Template-Associate

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTML-Template>=0:www/p5-HTML-Template \
		p5-Data-FormValidator>=0:textproc/p5-Data-FormValidator

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
