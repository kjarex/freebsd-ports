PORTNAME=	Session-Token
PORTVERSION=	1.503
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:FRACTAL
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Secure, efficient, simple random session token generation
WWW=		https://metacpan.org/release/Session-Token

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Session/Token/Token.so

.include <bsd.port.mk>
