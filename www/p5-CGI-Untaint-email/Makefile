PORTNAME=	CGI-Untaint-email
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Validate an email address in a CGI form
WWW=		https://metacpan.org/release/CGI-Untaint-email

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-CGI-Untaint>=0:www/p5-CGI-Untaint \
		p5-Email-Valid>=0:mail/p5-Email-Valid \
		p5-Mail-Tools>=0:mail/p5-Mail-Tools

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
