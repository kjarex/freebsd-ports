PORTNAME=	B-OPCheck
PORTVERSION=	0.32
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	PL_check hacks using Perl callbacks
WWW=		https://metacpan.org/release/B-OPCheck

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENCE

BUILD_DEPENDS=	${RUN_DEPENDS} \
		p5-ExtUtils-Depends>=0.302:devel/p5-ExtUtils-Depends
RUN_DEPENDS=	p5-B-Utils>=0.08:devel/p5-B-Utils \
		p5-Scope-Guard>=0:devel/p5-Scope-Guard

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/B/OPCheck/OPCheck.so

.include <bsd.port.mk>
