PORTNAME=	Config-MVP-Reader-INI
PORTVERSION=	2.101463
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	geraud@gcu.info
COMMENT=	MVP config reader for .ini files
WWW=		https://metacpan.org/release/Config-MVP-Reader-INI

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Config-INI>=0:devel/p5-Config-INI \
		p5-Config-MVP>=2:devel/p5-Config-MVP

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
