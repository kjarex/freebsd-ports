PORTNAME=	POE-Component-Client-DNS-Recursive
PORTVERSION=	1.12
CATEGORIES=	dns perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Recursive DNS client for POE
WWW=		https://metacpan.org/release/POE-Component-Client-DNS-Recursive

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Net-DNS>=0:dns/p5-Net-DNS \
		p5-Net-IP-Minimal>=0:net/p5-Net-IP-Minimal \
		p5-POE>=1.004:devel/p5-POE

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
