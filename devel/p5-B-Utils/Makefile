PORTNAME=	B-Utils
PORTVERSION=	0.27
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Helper functions for op tree manipulation
WWW=		https://metacpan.org/release/B-Utils

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-ExtUtils-Depends>=0.301:devel/p5-ExtUtils-Depends

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/B/Utils/Utils.so

.include <bsd.port.mk>
