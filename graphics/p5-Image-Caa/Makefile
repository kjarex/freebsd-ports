PORTNAME=	Image-Caa
PORTVERSION=	1.01
PORTREVISION=	1
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Colored ASCII Art
WWW=		https://metacpan.org/release/Image-Caa

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Curses>=0:devel/p5-Curses

USES=		perl5
USE_PERL5=	configure

OPTIONS_DEFINE=	EXAMPLES

post-install:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/demos/* ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
