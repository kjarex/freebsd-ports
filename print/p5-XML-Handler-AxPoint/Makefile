PORTNAME=	XML-Handler-AxPoint
PORTVERSION=	1.5
CATEGORIES=	print perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MSERGEANT
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	XML Based Presentations
WWW=		https://metacpan.org/release/XML-Handler-AxPoint

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-PDFLib>=0.14:print/p5-PDFLib \
		p5-Text-Iconv>=0:converters/p5-Text-Iconv \
		p5-XML-Filter-XSLT>=0:textproc/p5-XML-Filter-XSLT \
		p5-XML-SAX>=0.09:textproc/p5-XML-SAX \
		p5-XML-SAX-Writer>=0.39:textproc/p5-XML-SAX-Writer

PORTSCOUT=	skipv:1.21,1.30

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
