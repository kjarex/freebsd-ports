PORTNAME=	Catalyst-Plugin-CookiedSession
PORTVERSION=	0.35
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Catalyst Plugin for storing sessions in a browser cookie
WWW=		https://metacpan.org/release/Catalyst-Plugin-CookiedSession

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Accessor>=0:devel/p5-Class-Accessor \
		p5-Crypt-CBC>=0:security/p5-Crypt-CBC \
		p5-Crypt-Rijndael>=0:security/p5-Crypt-Rijndael \
		p5-JSON-XS-VersionOneAndTwo>=0:converters/p5-JSON-XS-VersionOneAndTwo \
		p5-Catalyst-Runtime>=0:www/p5-Catalyst-Runtime

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
