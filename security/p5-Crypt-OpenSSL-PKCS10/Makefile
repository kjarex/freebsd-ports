PORTNAME=	Crypt-OpenSSL-PKCS10
PORTVERSION=	0.16
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	pi@FreeBSD.org
COMMENT=	Perl extension for OpenSSL PKCS10 API
WWW=		https://metacpan.org/release/Crypt-OpenSSL-PKCS10

LICENSE=	ART10

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Crypt-OpenSSL-RSA>=0:security/p5-Crypt-OpenSSL-RSA

USES=		perl5 ssl
USE_PERL5=	configure
MAKE_ARGS+=	PASTHRU_INC=-I${OPENSSLINC}

.include <bsd.port.mk>
