PORTNAME=	Net-Libdnet6
PORTVERSION=	0.28
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Add IPv6 support to Net::Libdnet
WWW=		https://metacpan.org/release/Net-Libdnet6

LICENSE=	ART10
LICENSE_FILE=	${WRKSRC}/LICENSE.Artistic

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Net-Libdnet>=0.98:net/p5-Net-Libdnet \
		p5-Net-IPv6Addr>=0.2:net-mgmt/p5-Net-IPv6Addr

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
