PORTNAME=	POE-Component-IRC-Plugin-QueryDNS
PORTVERSION=	1.04
PORTREVISION=	1
CATEGORIES=	irc perl5 devel
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE::Component::IRC plugin for IRC based DNS queries
WWW=		https://metacpan.org/release/POE-Component-IRC-Plugin-QueryDNS

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Net-IP>=1.25:net-mgmt/p5-Net-IP \
		p5-POE-Component-Client-DNS>=1.00:dns/p5-POE-Component-Client-DNS \
		p5-POE-Component-IRC>=0:irc/p5-POE-Component-IRC

PLIST_SUB=	EXAMPLESDIR="share/examples/${PORTNAME}"
USES=		perl5
USE_PERL5=	configure

OPTIONS_DEFINE=	EXAMPLES

post-install:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/examples/* ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
