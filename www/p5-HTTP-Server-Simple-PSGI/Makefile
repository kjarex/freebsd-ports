PORTNAME=	HTTP-Server-Simple-PSGI
PORTVERSION=	0.16
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PSGI handler for HTTP::Server::Simple
WWW=		https://metacpan.org/release/HTTP-Server-Simple-PSGI

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTTP-Server-Simple>=0.42:www/p5-HTTP-Server-Simple

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

post-patch:
# Remove bundle Plack::Handler::HTTP::Server::Simple
	@${RM} -r ${WRKSRC}/lib/Plack/

.include <bsd.port.mk>
