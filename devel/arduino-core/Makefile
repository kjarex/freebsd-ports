PORTNAME=	arduino-core
PORTVERSION=	1.6.18
PORTREVISION=	1
CATEGORIES=	devel
DIST_SUBDIR=	arduino

MAINTAINER=	kevans@FreeBSD.org
COMMENT=	Core board support for Arduino devices
WWW=		https://www.arduino.cc/

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/license.txt

USE_GITHUB=	yes
GH_ACCOUNT=	arduino
GH_PROJECT=	Arduino
GH_TAGNAME=	b439a77
GH_TUPLE=	arduino:ArduinoCore-sam:fc57f2e:sam/hardware/arduino/sam

STRIP=		# No stripping, uses Elf firmware

OPTIONS_DEFINE=	DOCS EXAMPLES SAMD
OPTIONS_SUB=	yes
.if make(makesum)
.MAKEFLAGS:	WITH="${OPTIONS_DEFINE}"
.endif

NO_BUILD=	yes
SAMD_DESC=	Core support for SAMD boards (Zero/MKR1000)
SAMD_GH_TUPLE=	arduino:ArduinoCore-samd:1.6.12:samd/hardware/arduino/samd
SAMD_EXTRA_PATCHES=	${PATCHDIR}/extrapatch-hardware_arduino_samd_platform.txt

post-patch:
	@${REINPLACE_CMD} -e 's|%%ARCH%%|${ARCH}|g' -e 's|%%OSREL%%|${OSREL:R}|g' ${WRKSRC}/hardware/package_index_bundled.json

do-install:
	(cd ${WRKSRC}/ && ${COPYTREE_SHARE} "hardware" ${STAGEDIR}${PREFIX}/arduino ${FIND_EXPR})

.include <bsd.port.mk>
