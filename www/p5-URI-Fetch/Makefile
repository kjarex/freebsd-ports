PORTNAME=	URI-Fetch
PORTVERSION=	0.130
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C/0$//}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Smart URI fetching/caching
WWW=		https://metacpan.org/release/URI-Fetch

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-ErrorHandler>=0:devel/p5-Class-ErrorHandler \
		p5-URI>=0:net/p5-URI \
		p5-libwww>=0:www/p5-libwww
TEST_DEPENDS=	p5-Test-RequiresInternet>=0.05:devel/p5-Test-RequiresInternet

OPTIONS_DEFINE=	CACHE
CACHE_DESC=	Caching support

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

CACHE_BUILD_DEPENDS=	p5-Cache>=0:devel/p5-Cache
CACHE_RUN_DEPENDS=	p5-Cache>=0:devel/p5-Cache

.include <bsd.port.mk>
