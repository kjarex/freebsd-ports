PORTNAME=	DBIx-Class-Tree-NestedSet
PORTVERSION=	0.10
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to manage trees of data using the nested set model
WWW=		https://metacpan.org/release/DBIx-Class-Tree-NestedSet

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-DBIx-Class>=0.08:databases/p5-DBIx-Class
TEST_DEPENDS=	p5-DBICx-TestDatabase>=0:databases/p5-DBICx-TestDatabase \
		p5-Test-Exception>=0:devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
