PORTNAME=	Newsletter
PORTVERSION=	0.033
CATEGORIES=	www textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:KALELE
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple website based Newsletter interface
WWW=		https://metacpan.org/release/KALELE/Newsletter-0.033

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-File-Type>0:devel/p5-File-Type \
		p5-MIME-Explode>0:mail/p5-MIME-Explode \
		p5-MIME-Lite>0:mail/p5-MIME-Lite

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
