PORTNAME=	Catalyst-Plugin-FillInForm
PORTVERSION=	0.12
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Automatically fill in forms in Catalyst using HTML::FillInForms
WWW=		https://metacpan.org/release/Catalyst-Plugin-FillInForm

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Catalyst-Runtime>=5.7000:www/p5-Catalyst-Runtime \
		p5-HTML-FillInForm>=0:www/p5-HTML-FillInForm \
		p5-Catalyst-Action-RenderView>=0:www/p5-Catalyst-Action-RenderView

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
