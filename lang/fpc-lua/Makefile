CATEGORIES=	lang
PKGNAMESUFFIX=	-lua

COMMENT=	Free Pascal interface to the lua interpreter

USES=		fpc

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	LUA
LUA_DESC=	Install lua library
OPTIONS_DEFAULT=	LUA

LUA_LIB_DEPENDS=	liblua-5.1.so:lang/lua51

.include "${MASTERDIR}/Makefile"
