PORTNAME=	CHI-Driver-DBI
PORTVERSION=	1.27
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JSWARTZ
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Use DBI for CHI unified cache interface storage
WWW=		https://metacpan.org/release/CHI-Driver-DBI

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-CHI>=0.241:devel/p5-CHI \
		p5-DBI>=1.26:databases/p5-DBI \
		p5-Moose>=0.66:devel/p5-Moose

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
