PORTNAME=	Crypt-Password-Util
PORTVERSION=	0.17
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Crypt password utilities
WWW=		https://metacpan.org/release/Crypt-Password-Util

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Bytes-Random-Secure>=0:security/p5-Bytes-Random-Secure
TEST_DEPENDS=	p5-Sort-Versions>=0:devel/p5-Sort-Versions

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
