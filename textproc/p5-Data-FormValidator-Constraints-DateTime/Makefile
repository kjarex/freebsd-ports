PORTNAME=	Data-FormValidator-Constraints-DateTime
PORTVERSION=	1.11
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:WONKO
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Data::FormValidator constraints for dates and times
WWW=		https://metacpan.org/release/Data-FormValidator-Constraints-DateTime

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Data-FormValidator>=0:textproc/p5-Data-FormValidator \
		p5-DateTime>=0:devel/p5-DateTime \
		p5-DateTime-Format-Strptime>=0:devel/p5-DateTime-Format-Strptime \
		p5-DateTime-Format-Builder>=0:devel/p5-DateTime-Format-Builder

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
