PORTNAME=	Date-Piece
PORTVERSION=	0.0.3
DISTVERSIONPREFIX=	v
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:EWILHELM
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 module containing date manipulation routines
WWW=		https://metacpan.org/release/Date-Piece

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Date-Simple>=3.03:devel/p5-Date-Simple

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
