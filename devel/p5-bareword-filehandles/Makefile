PORTNAME=	bareword-filehandles
PORTVERSION=	0.007
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ILMARI
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Disables bareword filehandles
WWW=		https://metacpan.org/release/bareword-filehandles

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-ExtUtils-Depends>=0:devel/p5-ExtUtils-Depends \
		${RUN_DEPENDS}
RUN_DEPENDS=	p5-B-Hooks-OP-Check>=0:devel/p5-B-Hooks-OP-Check

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/bareword/filehandles/filehandles.so

.include <bsd.port.mk>
