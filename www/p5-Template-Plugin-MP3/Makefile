PORTNAME=	Template-Plugin-MP3
PORTVERSION=	1.02
PORTREVISION=	1
CATEGORIES=	www textproc audio perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	TT Plugin that wraps around the MP3::Info module
WWW=		https://metacpan.org/release/Template-Plugin-MP3

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Template-Toolkit>=0:www/p5-Template-Toolkit \
		p5-MP3-Info>=0:audio/p5-MP3-Info

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
