PORTNAME=	xorsearch
DISTVERSION=	1_11_1
CATEGORIES=	security textproc
MASTER_SITES=	http://www.didierstevens.com/files/software/
DISTNAME=	XORSearch_V${DISTVERSION}

MAINTAINER=	anastasios@mageirias.com
COMMENT=	Search for a given string in an XOR or ROL encoded binary file
WWW=		https://blog.didierstevens.com/programs/xorsearch/

LICENSE=	PD

USES=		dos2unix zip
DOS2UNIX_GLOB=	*.c
NO_WRKSUBDIR=	yes

PLIST_FILES=	bin/xorsearch

do-build:
	${CC} ${CFLAGS} ${LDFLAGS} -o ${WRKSRC}/XORSearch ${WRKSRC}/XORSearch.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/XORSearch ${STAGEDIR}${PREFIX}/bin/xorsearch

.include <bsd.port.mk>
