PORTNAME=	nomyso
PORTVERSION=	4.3
CATEGORIES=	converters devel
MASTER_SITES=	http://www.devoresoftware.com/nomyso/
DISTNAME=	${PORTNAME}${PORTVERSION:S/.//}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Convert MASM/TASM files to NASM compatible sources
WWW=		http://www.devoresoftware.com/nomyso/

LICENSE=	ART10
LICENSE_FILE=	${WRKSRC}/LICENSE.TXT

USES=		perl5 zip dos2unix shebangfix
SHEBANG_FILES=	nomyso.pl
USE_PERL5=	run
NO_WRKSUBDIR=	yes
NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	bin/${PORTNAME}.pl

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME}.pl ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
