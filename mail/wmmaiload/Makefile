PORTNAME=	wmmaiload
PORTVERSION=	2.3.0
CATEGORIES=	mail windowmaker
MASTER_SITES=	http://tnemeth.free.fr/projets/programmes/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Incoming mail monitor dockapp with a similar look to wmcpuload
WWW=		http://tnemeth.free.fr/projets/dockapps.html

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

BROKEN_FreeBSD_13=	ld: error: duplicate symbol: application
BROKEN_FreeBSD_14=	ld: error: duplicate symbol: application

USES=		gmake gnome localbase:ldflags pkgconfig ssl tar:bzip2 xorg
USE_XORG=	xpm
USE_GNOME=	gtk20
HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--prefix=${PREFIX}
CPPFLAGS+=	-I${OPENSSLINC} -D_GNU_SOURCE
LDFLAGS+=	-L${OPENSSLLIB}
MAKE_ENV=	DEBUG_CFLAGS="" DEBUG_LDFLAGS=""

PLIST_FILES=	bin/wmmaiload bin/wmmaiload-config \
		man/man1/wmmaiload.1.gz man/man1/wmmaiload-config.1.gz

post-patch:
	@${FIND} ${WRKSRC} -name "Makefile" | ${XARGS} ${REINPLACE_CMD} -e \
		's| =| ?=|'
.for i in wmmaiload/Init.make
	@${REINPLACE_CMD} -e "s|'-lssl'|'-lssl -lcrypto'| ; \
		s|-L/usr/X11R6/lib||" ${WRKSRC}/${i}
.endfor
.for i in wmmaiload/checkthread.c
	@${REINPLACE_CMD} -e 's|isnumber(|isnum(|g' ${WRKSRC}/${i}
.endfor
.for i in wmmaiload/main.h
	@${REINPLACE_CMD} -e '/time\.h>/d' ${WRKSRC}/${i}
.endfor
.for i in wmmaiload/ssl.c
	@${REINPLACE_CMD} -e 's|SSLv2_client_method|SSLv23_client_method|' \
		${WRKSRC}/${i}
.endfor
.for i in wmmaiload-config/mainwindow.c
	@${REINPLACE_CMD} -e 's|remove;|rm;|g ; \
		 s|remove,|rm,|g ; \
		 s|remove =|rm =|g ; \
		 s|PACKAGE"-config"|PACKAGE|g' ${WRKSRC}/${i}
.endfor

do-install:
.for i in wmmaiload wmmaiload-config
	${INSTALL_PROGRAM} ${WRKSRC}/${i}/${i} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/doc/${i}.1 ${STAGEDIR}${MANPREFIX}/man/man1
.endfor

.include <bsd.port.mk>
