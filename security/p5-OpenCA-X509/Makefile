PORTNAME=	OpenCA-X509
PORTVERSION=	0.9.10
PORTREVISION=	2
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MADWOLF
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for handling X509 Certificates
WWW=		https://metacpan.org/release/OpenCA-X509

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-X500-DN>=0:net/p5-X500-DN

USES=		perl5 shebangfix
SHEBANG_FILES=	prova.pl
USE_PERL5=	configure
NO_ARCH=	yes

PORTSCOUT=	skipv:0.9.47

.include <bsd.port.mk>
