PORTNAME=	valentina
DISTVERSION=	0.7.51
CATEGORIES=	misc

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Sewing pattern drafting tool aiming to remake the garment industry
WWW=		https://smart-pattern.com.ua/en/

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/LICENSE_GPL.txt

BROKEN_i386=	ld: error: failed to open bin/valentina: Cannot allocate memory

USES=		compiler:c++11-lang desktop-file-utils dos2unix gl gmake qmake qt:5
USE_QT=		buildtools:build concurrent core gui linguisttools:build network \
		opengl printsupport svg testlib:build widgets xml xmlpatterns
USE_GL=		gl
USE_LDCONFIG=	yes

USE_GITLAB=	yes
GL_ACCOUNT=	smart-pattern
GL_COMMIT=	679e68a15bb1fa247140171825aa50e0f6aaea06

DOS2UNIX_FILES=	src/libs/vgeometry/vellipticalarc.cpp

QMAKE_ARGS=	CONFIG+="noTests" CONFIG+="noRunPath" PREFIX=${PREFIX}
.if !defined(WITH_CCACHE_BUILD) || defined(NO_CCACHE)
QMAKE_ARGS+=	CONFIG+="no_ccache"
.endif

BINARY_ALIAS=	hg=/usr/bin/true git=/usr/bin/false

.include <bsd.port.mk>
