PORTNAME=	NetAddr-IP-Find
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Iterates over all IP addresses in a text similar to Email::Find
WWW=		https://metacpan.org/release/NetAddr-IP-Find

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-NetAddr-IP>0:net-mgmt/p5-NetAddr-IP

USES=		perl5
USE_PERL5=	configure
INSTALL_TARGET=	pure_install

.include <bsd.port.mk>
