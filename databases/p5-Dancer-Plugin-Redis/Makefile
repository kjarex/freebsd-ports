PORTNAME=	Dancer-Plugin-Redis
PORTVERSION=	0.8
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Redis database connector for Dancer
WWW=		https://metacpan.org/release/Dancer-Plugin-Redis

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Dancer>=0:www/p5-Dancer \
		p5-Redis>=1.9550:databases/p5-Redis

USES=		perl5
USE_PERL5=	modbuild

NO_ARCH=	yes

PORTSCOUT=	skipv:0.10,0.11,0.12,0.13,0.14

.include <bsd.port.mk>
