PORTNAME=	CPAN-Uploader
PORTVERSION=	0.103013
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	geraud@gcu.info
COMMENT=	Upload things to the CPAN
WWW=		https://metacpan.org/release/CPAN-Uploader

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-File-HomeDir>=0:devel/p5-File-HomeDir \
		p5-Getopt-Long-Descriptive>=0.084:devel/p5-Getopt-Long-Descriptive \
		p5-HTTP-Message>=0:www/p5-HTTP-Message \
		p5-LWP-Protocol-https>=1:www/p5-LWP-Protocol-https \
		p5-Term-ReadKey>=0:devel/p5-Term-ReadKey \
		p5-libwww>=0:www/p5-libwww

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

CONFLICTS_INSTALL=	cpan-upload

.include <bsd.port.mk>
