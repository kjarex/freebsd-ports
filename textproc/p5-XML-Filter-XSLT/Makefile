PORTNAME=	XML-Filter-XSLT
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	XSLT as a SAX Filter
WWW=		https://metacpan.org/release/XML-Filter-XSLT

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-XML-SAX>=0:textproc/p5-XML-SAX \
		p5-XML-SAX-Writer>=0:textproc/p5-XML-SAX-Writer \
		p5-XML-LibXSLT>=0:textproc/p5-XML-LibXSLT

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
