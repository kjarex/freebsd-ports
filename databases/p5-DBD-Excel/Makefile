PORTNAME=	DBD-Excel
PORTVERSION=	0.06
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Class for DBI drivers that acts on Excel files
WWW=		https://metacpan.org/release/DBD-Excel

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-SQL-Statement>=0:databases/p5-SQL-Statement \
		p5-Spreadsheet-ParseExcel>=0:textproc/p5-Spreadsheet-ParseExcel \
		p5-Spreadsheet-WriteExcel>=0:textproc/p5-Spreadsheet-WriteExcel \
		p5-DBI>=0:databases/p5-DBI

EXAMPLESDIR?=	${PREFIX}/share/examples/${PORTNAME}
USES=		perl5
USE_PERL5=	configure

OPTIONS_DEFINE=	EXAMPLES

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	@${INSTALL_DATA} ${WRKSRC}/sample/* ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
