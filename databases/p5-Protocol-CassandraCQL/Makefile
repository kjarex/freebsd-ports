PORTNAME=	Protocol-CassandraCQL
PORTVERSION=	0.11
PORTREVISION=	2
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:PEVANS
PKGNAMEPREFIX=	p5-

MAINTAINER=	admins@perceptyx.com
COMMENT=	Wire protocol support functions for Cassandra CQL3
WWW=		https://metacpan.org/release/Protocol-CassandraCQL

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Compress-Snappy>0:archivers/p5-Compress-Snappy
TEST_DEPENDS=	p5-Test-Fatal>0:devel/p5-Test-Fatal \
		p5-Test-HexString>0:devel/p5-Test-HexString

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
