PORTNAME=	Config-Parser-ldap
PORTVERSION=	1.02
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Configuration file parser for ldap.conf
WWW=		https://metacpan.org/release/Config-Parser-ldap

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	p5-Config-AST>=1.05:devel/p5-Config-AST \
		p5-Config-Parser>=1.03:devel/p5-Config-Parser

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
