PORTNAME=	Net-SCP
PORTVERSION=	0.08
PORTREVISION=	2
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 module to access and use scp protocol
WWW=		https://metacpan.org/release/Net-SCP

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Net-SSH>=0:net/p5-Net-SSH \
		p5-String-ShellQuote>=0:textproc/p5-String-ShellQuote

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
