PORTNAME=	Email-Folder
PORTVERSION=	0.860
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Read all the messages from a folder as Email::Simple objects
WWW=		https://metacpan.org/release/Email-Folder

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Email-FolderType>=0.600:mail/p5-Email-FolderType \
		p5-Email-Simple>=0:mail/p5-Email-Simple

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
