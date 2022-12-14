PORTNAME=	visp
DISTVERSION=	3.5.0
PORTREVISION=	3
CATEGORIES=	misc
MASTER_SITES=	https://visp-doc.inria.fr/download/releases/

PATCH_SITES=	https://github.com/lagadic/${PORTNAME}/commit/
PATCHFILES=	ff554ca8be5f43a3470e1cb20150d8171a66b463.patch:-p1 # fix https://github.com/lagadic/visp/issues/1059

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Modular library for visual tracking and visual servoing
WWW=		https://visp.inria.fr/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	libblas.so:math/blas \
		libboost_system.so:devel/boost-libs \
		libdmtx.so:graphics/libdmtx \
		libflann.so:math/flann \
		libgsl.so:math/gsl \
		liblapack.so:math/lapack \
		libopenblas.so:math/openblas \
		libopencv_core.so:graphics/opencv \
		libopencv_videoio.so:graphics/opencv \
		libpcl_common.so:graphics/pcl-pointclouds \
		libqhull_r.so:math/qhull \
		libpng.so:graphics/png \
		libv4l2.so:multimedia/libv4l \
		liblz4.so:archivers/liblz4 \
		libdc1394.so:multimedia/libdc1394

USES=		cmake compiler:c++14-lang eigen:3 fortran gl gnome jpeg xorg zip
USE_GNOME=	libxml2
USE_XORG=	ice sm x11 xext
USE_GL=		gl glu opengl
USE_LDCONFIG=	yes

CMAKE_OFF=	WITH_QBDEVICE BUILD_EXAMPLES BUILD_TUTORIALS BUILD_TESTS BUILD_DEMOS

OPTIONS_DEFINE=		OGRE

OGRE_DESC=		Include Ogre support
OGRE_CMAKE_BOOL=	USE_OGRE
OGRE_LIB_DEPENDS=	libboost_system.so:devel/boost-libs \
			libOgreMain.so:graphics/ogre3d19

.include <bsd.port.mk>
