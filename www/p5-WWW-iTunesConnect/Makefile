PORTNAME=	WWW-iTunesConnect
PORTVERSION=	1.16
PORTREVISION=	3
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PKGNAMEPREFIX}${PORTNAME}-${PORTVERSION}

MAINTAINER=	bfoz@bfoz.net
COMMENT=	Client interface for Apple's iTunes Connect service
WWW=		https://metacpan.org/release/p5-WWW-iTunesConnect

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTML-Tree>=0:www/p5-HTML-Tree \
		p5-libwww>=5.829:www/p5-libwww \
		p5-Net-SSLeay>=0:security/p5-Net-SSLeay \
		p5-HTML-Form>=0:www/p5-HTML-Form

USES=		perl5
USE_PERL5=	configure

PLIST_FILES=	%%SITE_PERL%%/WWW/iTunesConnect.pm \
		%%PERL5_MAN3%%/WWW::iTunesConnect.3.gz

.include <bsd.port.mk>
