PORTNAME=	Test-Script-Run
PORTVERSION=	0.08
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Test the script with run
WWW=		https://metacpan.org/release/Test-Script-Run

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-IPC-Run3>=0:devel/p5-IPC-Run3 \
		p5-Test-Exception>=0:devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
