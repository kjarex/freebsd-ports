PORTNAME=	mmtf-cpp
DISTVERSIONPREFIX=	v
DISTVERSION=	1.0.0
PORTREVISION=	2
CATEGORIES=	science biology

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	C++ MMTF format API, decoder and encoder, for molecular structures
WWW=		https://mmtf.rcsb.org/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${LOCALBASE}/include/msgpack.hpp:devel/msgpack

USES=		cmake compiler:c++11-lang localbase:ldflags
USE_GITHUB=	yes
GH_ACCOUNT=	rcsb
GH_TUPLE=	rcsb:mmtf:8c88834:x/mmtf_spec

NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	include/mmtf.hpp \
		include/mmtf/binary_decoder.hpp \
		include/mmtf/binary_encoder.hpp \
		include/mmtf/decoder.hpp \
		include/mmtf/encoder.hpp \
		include/mmtf/errors.hpp \
		include/mmtf/export_helpers.hpp \
		include/mmtf/map_decoder.hpp \
		include/mmtf/msgpack_decoder.hpp \
		include/mmtf/object_encoders.hpp \
		include/mmtf/structure_data.hpp

post-patch:
	@cd ${WRKDIR} && ${LN} -s ${WRKSRC}/mmtf_spec # needed for testing

do-install:
	cd ${WRKSRC} && ${COPYTREE_SHARE} include ${STAGEDIR}${PREFIX}

do-test:
	@cd ${BUILD_WRKSRC} && \
		${SETENV} ${CONFIGURE_ENV} ${CMAKE_BIN} ${CMAKE_ARGS} -Dmmtf_build_local=ON -DBUILD_TESTS=ON ${CMAKE_SOURCE_PATH} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} ${ALL_TARGET} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} test

.include <bsd.port.mk>
