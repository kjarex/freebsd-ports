PORTNAME=	List-SomeUtils-XS
PORTVERSION=	0.58
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	XS implementation for List::SomeUtils
WWW=		https://metacpan.org/release/List-SomeUtils-XS

LICENSE=	ART20
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	p5-Test-LeakTrace>=0:devel/p5-Test-LeakTrace \
		p5-Test-Warnings>=0.006:devel/p5-Test-Warnings

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/List/SomeUtils/XS/XS.so

.include <bsd.port.mk>
