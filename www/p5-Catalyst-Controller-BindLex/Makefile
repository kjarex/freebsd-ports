PORTNAME=	Catalyst-Controller-BindLex
PORTVERSION=	0.03
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:NUFFIN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Stash your lexical goodness
WWW=		https://metacpan.org/release/Catalyst-Controller-BindLex

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Catalyst-Runtime>=0:www/p5-Catalyst-Runtime \
		p5-Array-RefElem>=0:misc/p5-Array-RefElem \
		p5-Devel-Caller>=0:devel/p5-Devel-Caller \
		p5-Devel-LexAlias>=0:devel/p5-Devel-LexAlias \
		p5-PadWalker>=0:devel/p5-PadWalker

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
