PORTNAME=	WWW-Shorten-Googl
PORTVERSION=	1.02
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	cowboyneal@gmail.com
COMMENT=	Perl interface to goo.gl
WWW=		https://metacpan.org/release/WWW-Shorten-Googl

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-WWW-Shorten>=1.98:www/p5-WWW-Shorten \
		p5-libwww>=5.75:www/p5-libwww \
		p5-LWP-Protocol-https>=0:www/p5-LWP-Protocol-https \
		p5-JSON-Any>=0:converters/p5-JSON-Any

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
