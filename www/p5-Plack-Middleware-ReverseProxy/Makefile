PORTNAME=	Plack-Middleware-ReverseProxy
PORTVERSION=	0.16
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to support app to run as a reverse proxy backend
WWW=		https://metacpan.org/release/Plack-Middleware-ReverseProxy

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Plack>=0.9988:www/p5-Plack

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
