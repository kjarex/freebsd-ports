PORTNAME=	Time-HiRes
PORTVERSION=	1.9764
PORTEPOCH=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 module implementing High resolution time, sleep, and alarm
WWW=		https://metacpan.org/release/Time-HiRes

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Time/HiRes/HiRes.so

.include <bsd.port.mk>
