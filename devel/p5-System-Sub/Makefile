PORTNAME=	System-Sub
PORTVERSION=	0.162800
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Wrap external command with a DWIM sub
WWW=		https://metacpan.org/release/System-Sub

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-File-Which>=0:sysutils/p5-File-Which \
		p5-IPC-Run>=0:devel/p5-IPC-Run \
		p5-Sub-Name>=0:devel/p5-Sub-Name

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
