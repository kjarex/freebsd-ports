PORTNAME=	Authen-PluggableCaptcha
PORTVERSION=	0.05
PORTREVISION=	3
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Pluggable Captcha framework for Perl
WWW=		https://metacpan.org/release/Authen-PluggableCaptcha

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Number-Spell>=0:textproc/p5-Number-Spell \
		p5-HTML-Email-Obfuscate>=0:security/p5-HTML-Email-Obfuscate

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
