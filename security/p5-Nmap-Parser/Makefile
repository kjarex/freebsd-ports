PORTNAME=	Nmap-Parser
PORTVERSION=	1.37
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parse nmap scan data with perl
WWW=		https://metacpan.org/release/Nmap-Parser

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-XML-Twig>=3.16:textproc/p5-XML-Twig
RUN_DEPENDS:=	${BUILD_DEPENDS} \
		nmap:security/nmap

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
