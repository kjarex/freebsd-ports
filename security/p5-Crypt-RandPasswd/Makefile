PORTNAME=	Crypt-RandPasswd
PORTVERSION=	0.04
PORTREVISION=	2
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Implementation of the Automated Password Generator standard
WWW=		https://metacpan.org/release/Crypt-RandPasswd

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

post-patch:
	@${RM} ${WRKSRC}/lib/Crypt/RandPasswd.pm.orig

.include <bsd.port.mk>
