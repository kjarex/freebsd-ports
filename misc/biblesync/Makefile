PORTNAME=	biblesync
DISTVERSION=	2.1.0
CATEGORIES=	misc

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Multicast shared co-navigation library for Bible programs
WWW=		https://github.com/karlkleinpaste/biblesync

LICENSE=	PD
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libuuid.so:misc/e2fsprogs-libuuid

USES=		cmake compiler:c++11-lang gettext-runtime

USE_GITHUB=	yes
GH_ACCOUNT=	karlkleinpaste

USE_LDCONFIG=	yes

CMAKE_ON=	BUILD_SHARED_LIBS

post-patch:
	${REINPLACE_CMD} s,/bibleysnc,, ${WRKSRC}/biblesync.pc.in

post-install:
	${INSTALL_MAN} ${STAGEDIR}${PREFIX}/share/man/man7/biblesync.7 ${STAGEDIR}${MAN7PREFIX}/man/man7
	${RM} -R ${STAGEDIR}${PREFIX}/share/man

.include <bsd.port.mk>
