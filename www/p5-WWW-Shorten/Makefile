PORTNAME=	WWW-Shorten
PORTVERSION=	3.094
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Abstract interface to URL shortening sites
WWW=		https://metacpan.org/release/WWW-Shorten

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-libwww>=5.835:www/p5-libwww \
		p5-Try-Tiny>=0.24:lang/p5-Try-Tiny

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

PORTSCOUT=	limit:^[0-9\.]+$$

.include <bsd.port.mk>
