PORTNAME=	B-Hooks-OP-Annotation
PORTVERSION=	0.44
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Annotate and delegate hooked OPs
WWW=		https://metacpan.org/release/B-Hooks-OP-Annotation

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-ExtUtils-Depends>=0.304:devel/p5-ExtUtils-Depends

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/B/Hooks/OP/Annotation/Annotation.so

.include <bsd.port.mk>
