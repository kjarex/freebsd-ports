PORTNAME=	WWW-Scripter-Plugin-Ajax
PORTVERSION=	0.09
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	WWW::Scripter plugin that provides the XMLHttpRequest object
WWW=		https://metacpan.org/release/WWW-Scripter-Plugin-Ajax

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-WWW-Scripter-Plugin-JavaScript>0:www/p5-WWW-Scripter-Plugin-JavaScript \
		p5-XML-DOM-Lite>0:textproc/p5-XML-DOM-Lite

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
