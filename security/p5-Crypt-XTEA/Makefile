PORTNAME=	Crypt-XTEA
PORTVERSION=	0.0108
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Implementation of the eXtended Tiny Encryption Algorithm
WWW=		https://metacpan.org/pod/Crypt::XTEA

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Scalar-Util-Numeric>=0.40:devel/p5-Scalar-Util-Numeric
TEST_DEPENDS=	p5-Crypt-CBC>=0:security/p5-Crypt-CBC

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Crypt/XTEA/XTEA.so

.include <bsd.port.mk>
