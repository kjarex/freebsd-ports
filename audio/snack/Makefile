PORTNAME=	snack
PORTVERSION=	2.2.10
PORTREVISION=	7
CATEGORIES=	audio tcl tk
MASTER_SITES=	http://www.speech.kth.se/snack/dist/
DISTNAME=	${PORTNAME}${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Sound toolkit for scripting languages
WWW=		https://www.speech.kth.se/snack/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/../COPYING

USES=		tk:tea
USE_LDCONFIG=	${PREFIX}/lib/snack${PORTVERSION:R}
MAKE_ENV=	prefix=${PREFIX} exec_prefix=${PREFIX}

WRKSRC_SUBDIR=	unix
PATCH_WRKSRC=	${WRKDIR}/${DISTNAME}

PLIST_SUB=	SNACK_VER=${PORTVERSION:R}
PORTDOCS=	*

OPTIONS_DEFINE=	VORBIS DOCS
OPTIONS_SUB=	yes

VORBIS_LIB_DEPENDS=	libvorbis.so:audio/libvorbis
VORBIS_CONFIGURE_ON=	--with-ogg-include=${LOCALBASE}/include \
			--with-ogg-lib=${LOCALBASE}/lib
VORBIS_ALL_TARGET=	all libsnackogg.so

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/snack${PORTVERSION:R}/*.so

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/../doc/* ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
