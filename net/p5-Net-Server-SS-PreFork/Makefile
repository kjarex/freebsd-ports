PORTNAME=	Net-Server-SS-PreFork
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Hot-deployable variant of Net::Server::PreFork
WWW=		https://metacpan.org/release/Net-Server-SS-PreFork

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Net-Server>0:net/p5-Net-Server \
		p5-Server-Starter>=0.02:net/p5-Server-Starter

TEST_DEPENDS=	p5-HTTP-Server-Simple>0:www/p5-HTTP-Server-Simple \
		p5-Test-SharedFork>0:devel/p5-Test-SharedFork \
		p5-Test-TCP>=0.06:devel/p5-Test-TCP \
		p5-libwww>0:www/p5-libwww

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
