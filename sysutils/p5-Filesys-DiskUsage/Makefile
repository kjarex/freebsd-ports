PORTNAME=	Filesys-DiskUsage
PORTVERSION=	0.13
CATEGORIES=	sysutils perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl equivalent of du(1)
WWW=		https://metacpan.org/release/Filesys-DiskUsage

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

TEST_DEPENDS=	p5-Test-Warn>0:devel/p5-Test-Warn

NO_ARCH=	YES
USES=		perl5
USE_PERL5=	configure

post-patch:
	@${RM} ${WRKSRC}/lib/Filesys/DiskUsage.pm.orig

.include <bsd.port.mk>
