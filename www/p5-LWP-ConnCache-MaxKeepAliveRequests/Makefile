PORTNAME=	LWP-ConnCache-MaxKeepAliveRequests
PORTVERSION=	0.33
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Connection cache that enforces a max keep alive limit
WWW=		https://metacpan.org/release/LWP-ConnCache-MaxKeepAliveRequests

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-libwww>=0:www/p5-libwww \
		p5-Moose>=0:devel/p5-Moose

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
