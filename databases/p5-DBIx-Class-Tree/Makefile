PORTNAME=	DBIx-Class-Tree
PORTVERSION=	0.03003
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to manipulate and analyze tree structured data
WWW=		https://metacpan.org/release/DBIx-Class-Tree

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DBIx-Class>=0.08100:databases/p5-DBIx-Class
TEST_DEPENDS=	p5-Test-Exception>=0:devel/p5-Test-Exception \
		p5-DBD-SQLite>=0:databases/p5-DBD-SQLite

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
