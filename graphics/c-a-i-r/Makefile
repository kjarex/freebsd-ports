PORTNAME=	c-a-i-r
PORTVERSION=	2.19
CATEGORIES=	graphics
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/CAIR%20v${PORTVERSION}
DISTNAME=	CAIR_v${PORTVERSION}

MAINTAINER=	buganini@gmail.com
COMMENT=	Content Aware Image Resizer is an implementation of seam carving
WWW=		https://sourceforge.net/projects/c-a-i-r/

USES=		dos2unix gmake zip
DOS2UNIX_GLOB=	*.cpp

MAKE_ARGS=	CC="${CXX}"
NO_WRKSUBDIR=	yes

PLIST_FILES=	bin/cair

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/cair ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
