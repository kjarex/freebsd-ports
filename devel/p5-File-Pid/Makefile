PORTNAME=	File-Pid
PORTVERSION=	1.01
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Pid File Manipulation
WWW=		https://metacpan.org/release/File-Pid

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Accessor>=0:devel/p5-Class-Accessor

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

post-patch:
	@${RM} ${WRKSRC}/lib/File/Pid.pm.orig

.include <bsd.port.mk>
