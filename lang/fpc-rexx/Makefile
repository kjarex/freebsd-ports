CATEGORIES=	lang
PKGNAMESUFFIX=	-rexx

COMMENT=	Free Pascal interface to the rexx-regina library

USES=		fpc

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	REXX_REGINA
REXX_REGINA_DESC=	Install rexx-regina library
OPTIONS_DEFAULT=	REXX_REGINA

REXX_REGINA_RUN_DEPENDS=	rexx:lang/rexx-regina

.include "${MASTERDIR}/Makefile"
