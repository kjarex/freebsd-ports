PORTNAME=	Math-Geometry-Planar
PORTVERSION=	1.18
PORTREVISION=	1
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION}-withoutworldwriteables

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Collection of planar geometry functions
WWW=		https://metacpan.org/release/Math-Geometry-Planar

LICENSE=	ART10

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Math-Geometry-Planar-GPC>=0:math/p5-Math-Geometry-Planar-GPC \
		p5-Math-Geometry-Planar-Offset>=0:math/p5-Math-Geometry-Planar-Offset

USES=		perl5
USE_PERL5=	configure
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

.include <bsd.port.mk>
