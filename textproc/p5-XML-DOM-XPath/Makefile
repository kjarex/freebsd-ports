PORTNAME=	XML-DOM-XPath
PORTVERSION=	0.14
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	mauricio@arareko.net
COMMENT=	Adds XPath support to XML::DOM, using XML::XPath engine
WWW=		https://metacpan.org/release/XML-DOM-XPath

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-XML-DOM>=0:textproc/p5-XML-DOM \
		p5-XML-XPathEngine>=0:textproc/p5-XML-XPathEngine

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
