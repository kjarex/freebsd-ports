PORTNAME=	bam
PORTVERSION=	0.4.0
CATEGORIES=	devel
MASTER_SITES=	https://github.com/downloads/matricks/bam/

MAINTAINER=	beyert@cs.ucr.edu
COMMENT=	Fast and flexible build system using Lua
WWW=		http://matricks.github.com/bam/

LICENSE=	ZLIB

USES=		compiler tar:bzip2

CONFLICTS_INSTALL=	bamutil

PLIST_FILES=	bin/bam

.include <bsd.port.pre.mk>

do-build:
.if ${COMPILER_TYPE} == clang
	@${REINPLACE_CMD} -e 's|-ldl||g' ${WRKSRC}/make_unix_clang.sh
	(cd ${WRKSRC} && ${SH} make_unix_clang.sh)
.else
	@${REINPLACE_CMD} -e 's|-ldl||g' ${WRKSRC}/make_unix.sh
	(cd ${WRKSRC} && ${SH} make_unix.sh)
.endif

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bam ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.post.mk>
