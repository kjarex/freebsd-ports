PORTNAME=	configkit
PORTVERSION=	0.4.20080902
CATEGORIES=	devel
MASTER_SITES=	http://phk.freebsd.dk/phkrel/
DISTNAME=	ConfigKit.${PORTVERSION:C/0.4.//}
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Somewhat prototypical facility for generating CLI interfaces
WWW=		http://phk.freebsd.dk/phkrel/

BUILD_DEPENDS=	${LOCALBASE}/lib/libphk.a:devel/libphk

WRKSRC=		${WRKDIR}/ConfigKit
USES=		uidfix
MAKE_ARGS=	BINDIR=${PREFIX}/bin LIBDIR=${PREFIX}/lib INCLUDEDIR=${PREFIX}/include

.include <bsd.port.mk>
