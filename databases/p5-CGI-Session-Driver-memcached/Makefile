PORTNAME=	CGI-Session-Driver-memcached
PORTVERSION=	0.04
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for persistent session data in CGI applications
WWW=		https://metacpan.org/release/CGI-Session-Driver-memcached

RUN_DEPENDS=	\
	p5-CGI-Session>=4:www/p5-CGI-Session
BUILD_DEPENDS=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
