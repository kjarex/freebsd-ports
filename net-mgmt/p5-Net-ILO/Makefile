PORTNAME=	Net-ILO
PORTVERSION=	0.54
PORTREVISION=	1
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	Interface to HP Integrated Lights-Out
WWW=		https://metacpan.org/release/Net-ILO

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-IO-Socket-SSL>0:security/p5-IO-Socket-SSL \
		p5-XML-Simple>0:textproc/p5-XML-Simple

WRKSRC=		${WRKDIR}/${PORTNAME}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
