PORTNAME=	Filesys-Virtual-DAAP
PORTVERSION=	0.04
PORTREVISION=	2
CATEGORIES=	audio perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Present a DAAP share as a VFS
WWW=		https://metacpan.org/release/Filesys-Virtual-DAAP

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Accessor>=0:devel/p5-Class-Accessor \
		p5-Filesys-Virtual>=0:devel/p5-Filesys-Virtual \
		p5-Filesys-Virtual-Plain>=0:devel/p5-Filesys-Virtual-Plain \
		p5-Net-DAAP-Client>=0:audio/p5-Net-DAAP-Client

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
