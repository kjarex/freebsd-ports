PORTNAME=	Plack-Middleware-SocketIO
PORTVERSION=	0.00904
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for Socket.IO Plack middleware
WWW=		https://metacpan.org/release/Plack-Middleware-SocketIO

LICENSE=	ART20

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-AnyEvent>0:devel/p5-AnyEvent \
	p5-JSON>0:converters/p5-JSON \
	p5-Plack>0:www/p5-Plack \
	p5-Protocol-WebSocket>=0.00901:www/p5-Protocol-WebSocket \
	p5-Try-Tiny>0:lang/p5-Try-Tiny

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
