PORTNAME=	List-Objects-Types
PORTVERSION=	2.001001
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Type::Tiny-based types for List::Objects::WithUtils
WWW=		https://metacpan.org/release/List-Objects-Types

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-List-Objects-WithUtils>=2:devel/p5-List-Objects-WithUtils \
		p5-Type-Tiny>=0.022:devel/p5-Type-Tiny

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
