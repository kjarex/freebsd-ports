PORTNAME=	Net-IP
PORTVERSION=	1.26
PORTREVISION=	1
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Perl extension for manipulating IPv4/IPv6 addresses
WWW=		https://metacpan.org/release/Net-IP

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|my $$count|& = 0|' ${WRKSRC}/ipcount

.include <bsd.port.mk>
