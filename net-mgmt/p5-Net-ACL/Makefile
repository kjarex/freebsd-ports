PORTNAME=	Net-ACL
PORTVERSION=	0.07
PORTREVISION=	2
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Class representing a generic access-list/route-map
WWW=		https://metacpan.org/release/Net-ACL

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Cisco-Reconfig>=0.05:net-mgmt/p5-Cisco-Reconfig \
		p5-IO-String>=1.02:devel/p5-IO-String \
		p5-Net-Netmask>=0:net-mgmt/p5-Net-Netmask
TEST_DEPENDS=	p5-Test-Signature>=1.04:devel/p5-Test-Signature

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
