PORTNAME=	Excel-Template
PORTVERSION=	0.34
PORTREVISION=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for templating Excel files
WWW=		https://metacpan.org/release/Excel-Template

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-IO-Stringy>=0:devel/p5-IO-Stringy \
		p5-Test-Exception>=0.21:devel/p5-Test-Exception \
		p5-XML-Parser>=0:textproc/p5-XML-Parser \
		p5-Spreadsheet-WriteExcel>=0:textproc/p5-Spreadsheet-WriteExcel \
		p5-Test-Deep>=0:devel/p5-Test-Deep

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
