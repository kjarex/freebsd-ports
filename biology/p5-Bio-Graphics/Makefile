PORTNAME=	Bio-Graphics
PORTVERSION=	2.40
PORTREVISION=	2
CATEGORIES=	biology perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generate GD Images of Bio::Seq Objects
WWW=		https://metacpan.org/release/Bio-Graphics

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Bio-Coordinate>=1.007000:biology/p5-Bio-Coordinate \
		p5-Bio-SCF>=1.01:biology/p5-Bio-SCF \
		p5-BioPerl>=1.007000:biology/p5-BioPerl \
		p5-CGI>=0:www/p5-CGI \
		p5-GD>=2.30:graphics/p5-GD \
		p5-GD-SVG>=0.32:graphics/p5-GD-SVG \
		p5-Statistics-Descriptive>=2.6:math/p5-Statistics-Descriptive

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
