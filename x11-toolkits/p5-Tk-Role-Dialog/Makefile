PORTNAME=	Tk-Role-Dialog
PORTVERSION=	1.112380
CATEGORIES=	x11-toolkits tk perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Moose role for enhanced Tk dialogs
WWW=		https://metacpan.org/release/Tk-Role-Dialog

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Moose>=0.92:devel/p5-Moose \
		p5-MooseX-Has-Sugar>=0:devel/p5-MooseX-Has-Sugar \
		p5-MooseX-Types-Path-Class>=0:devel/p5-MooseX-Types-Path-Class \
		p5-Tk>=0:x11-toolkits/p5-Tk \
		p5-Tk-Role-HasWidgets>=${PORTVERSION}:x11-toolkits/p5-Tk-Role-HasWidgets \
		p5-Tk-Sugar>=0:x11-toolkits/p5-Tk-Sugar

USES=		perl5
USE_PERL5=	modbuild

NO_ARCH=	yes

.include <bsd.port.mk>
