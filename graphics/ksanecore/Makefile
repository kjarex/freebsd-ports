PORTNAME=	ksanecore
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	graphics kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Library providing logic to interface scanners
WWW=		http://www.kipi-plugins.org

LIB_DEPENDS=	libsane.so:graphics/sane-backends

USES=		cmake compiler:c++11-lang gettext kde:5 qt:5 tar:xz
USE_KDE=		ecm:build
USE_QT=		core gui widgets \
		buildtools:build qmake:build testlib:build
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
