PORTNAME=	String-Compare-ConstantTime
PORTVERSION=	0.321
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for timing side-channel protected string compare
WWW=		https://metacpan.org/release/String-Compare-ConstantTime

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/String/Compare/ConstantTime/ConstantTime.so

.include <bsd.port.mk>
