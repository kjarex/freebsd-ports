PORTNAME=	XML-RPC-Fast
PORTVERSION=	0.8
PORTREVISION=	2
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	mons@cpan.org
COMMENT=	Fast and modular implementation for an XML-RPC client and server
WWW=		https://metacpan.org/release/XML-RPC-Fast

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTTP-Message>=0:www/p5-HTTP-Message \
		p5-WWW-Curl>=0:www/p5-WWW-Curl \
		p5-XML-Hash-LX>=0.05:textproc/p5-XML-Hash-LX \
		p5-XML-LibXML>=1.58:textproc/p5-XML-LibXML \
		p5-libwww>=0:www/p5-libwww

TEST_DEPENDS=	p5-Test-NoWarnings>=0:devel/p5-Test-NoWarnings

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
