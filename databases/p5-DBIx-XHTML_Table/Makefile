PORTNAME=	DBIx-XHTML_Table
PORTVERSION=	1.49
CATEGORIES=	databases www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Create XHTML tables from SQL queries
WWW=		https://metacpan.org/release/DBIx-XHTML_Table

LICENSE=	ART20

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DBI>=0:databases/p5-DBI
TEST_DEPENDS=	p5-HTML-TableExtract>=0:www/p5-HTML-TableExtract

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
