PORTNAME=	Log-Dispatch-FileWriteRotate
PORTVERSION=	0.062
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Log to files that archive/rotate themselves, w/ File::Write::Rotate
WWW=		https://metacpan.org/release/Log-Dispatch-FileWriteRotate

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-File-Write-Rotate>=0.29:devel/p5-File-Write-Rotate \
		p5-Log-Dispatch>=0:devel/p5-Log-Dispatch

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
