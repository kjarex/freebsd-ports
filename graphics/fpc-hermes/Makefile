CATEGORIES=	graphics lang
PKGNAMESUFFIX=	-hermes

COMMENT=	Free Pascal hermes unit

USES=		fpc

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	HERMES
HERMES_DESC=	Install hermes graphics library
OPTIONS_DEFAULT=	HERMES

HERMES_LIB_DEPENDS=	libHermes.so:graphics/Hermes

.include "${MASTERDIR}/Makefile"
