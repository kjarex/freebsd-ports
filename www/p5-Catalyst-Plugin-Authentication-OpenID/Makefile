PORTNAME=	Catalyst-Plugin-Authentication-OpenID
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	www security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:BTROTT
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	OpenID Authentication
WWW=		https://metacpan.org/release/BTROTT/Catalyst-Plugin-Authentication-OpenID-0.02

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Catalyst-Runtime>=0:www/p5-Catalyst-Runtime \
		p5-LWPx-ParanoidAgent>=0:www/p5-LWPx-ParanoidAgent \
		p5-Net-OpenID-Consumer>=0:net/p5-Net-OpenID-Consumer

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
