PORTNAME=	Data-Dumper
PORTVERSION=	2.183
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Stringified perl data structures, suitable for both printing and eval
WWW=		https://metacpan.org/release/Data-Dumper

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Data/Dumper/Dumper.so

.include <bsd.port.mk>
