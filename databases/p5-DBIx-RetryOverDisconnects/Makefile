PORTNAME=	DBIx-RetryOverDisconnects
PORTVERSION=	0.08
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	vovkasm@gmail.com
COMMENT=	Keeps database connection persistent
WWW=		https://metacpan.org/release/DBIx-RetryOverDisconnects

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DBI>0:databases/p5-DBI \
		p5-Exception-Class>0:devel/p5-Exception-Class

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
