PORTNAME=	XML-Handler-Dtd2Html
PORTVERSION=	0.42
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	SAX2 handler for generate a Html documentation from a DTD
WWW=		https://metacpan.org/release/XML-Handler-Dtd2Html

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Parse-RecDescent>=1.940000:devel/p5-Parse-RecDescent \
		p5-HTML-Template>=2.8:www/p5-HTML-Template \
		p5-XML-Parser>=2.3:textproc/p5-XML-Parser \
		p5-XML-SAX-Expat>=0.37:textproc/p5-XML-SAX-Expat \
		p5-XML-SAX-Writer>=0.44:textproc/p5-XML-SAX-Writer \
		p5-libxml>=0.08:textproc/p5-libxml

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
