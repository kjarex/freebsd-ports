PORTNAME=	Math-Random-ISAAC-XS
PORTVERSION=	1.004
PORTREVISION=	3
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JAWNSY
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	C implementation of the ISAAC PRNG Algorithm
WWW=		https://metacpan.org/release/Math-Random-ISAAC-XS

LICENSE=	PD MIT ART10 ART20 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	p5-Test-NoWarnings>0:devel/p5-Test-NoWarnings

USES=		perl5
USE_PERL5=	modbuild

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Math/Random/ISAAC/XS/XS.so

.include <bsd.port.mk>
