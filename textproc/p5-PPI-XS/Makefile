PORTNAME=	PPI-XS
PORTVERSION=	0.910
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN/PPI
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	XS acceleration for the PPI perl parser
WWW=		https://metacpan.org/release/PPI-XS

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-PPI>=1.000:textproc/p5-PPI

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/PPI/XS/XS.so

.include <bsd.port.mk>
