PORTNAME=	Audio-Scan
PORTVERSION=	1.01
CATEGORIES=	audio perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Scanner for audio file metadata and tag information
WWW=		https://metacpan.org/release/Audio-Scan

LICENSE=	GPLv2

TEST_DEPENDS=	p5-Test-Warn>=0:devel/p5-Test-Warn

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Audio/Scan/Scan.so

.include <bsd.port.mk>
