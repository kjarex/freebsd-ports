PORTNAME=	grantleetheme
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	deskutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE PIM grantleetheme
WWW=		https://www.kde.org/

LICENSE=	LGPL21

USES=		cmake compiler:c++11-lib gettext grantlee:5 kde:5 \
		pkgconfig qt:5 tar:xz
USE_KDE=	attica auth codecs config configwidgets coreaddons guiaddons \
		i18n iconthemes newstuff service widgetsaddons xmlgui \
		ecm:build
USE_QT=		core dbus gui network testlib widgets xml \
		buildtools:build qmake:build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
