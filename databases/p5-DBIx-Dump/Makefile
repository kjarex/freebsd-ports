PORTNAME=	DBIx-Dump
PORTVERSION=	0.04
PORTREVISION=	2
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Module for dumping database (DBI) data into a variety of formats
WWW=		https://metacpan.org/release/DBIx-Dump

BUILD_DEPENDS=	p5-DBI>=1.57:databases/p5-DBI
RUN_DEPENDS:=	${BUILD_DEPENDS} \
		p5-Spreadsheet-WriteExcel>=0:textproc/p5-Spreadsheet-WriteExcel \
		p5-Text-CSV_XS>=0:textproc/p5-Text-CSV_XS

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
