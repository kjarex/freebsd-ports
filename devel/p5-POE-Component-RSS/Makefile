PORTNAME=	POE-Component-RSS
PORTVERSION=	0.09
PORTREVISION=	1
CATEGORIES=	devel perl5 textproc
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Module for event based RSS parsing
WWW=		https://metacpan.org/release/SUNGO/POE-Component-RSS-0.09

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-POE>=0:devel/p5-POE \
		p5-XML-RSS>=0:textproc/p5-XML-RSS

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
