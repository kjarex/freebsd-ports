PORTNAME=	torque
PORTVERSION=	2.5.13
PORTREVISION=	2
PORTEPOCH=	1
CATEGORIES=	sysutils parallel
MASTER_SITES=	http://www.adaptivecomputing.com/index.php?wpfb_dl=1643/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Open source distributed computing resource manager based on PBS
WWW=		http://www.adaptivecomputing.com/products/open-source/torque/

BROKEN_aarch64=		fails to link: missing sbrk
BROKEN_riscv64=		fails to link: missing sbrk

FETCH_BEFORE_ARGS=	-o ${DISTDIR}/${DISTFILES}
USES=		gmake perl5 libtool
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-syslog \
		--disable-spool
MAKE_ENV=	DESTDIR=${STAGEDIR}/${PREFIX}
USE_RC_SUBR=	pbs_server pbs_sched pbs_mom
SUB_FILES=	pkg-message torque-config
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip
CFLAGS+=	-D_WANT_VMMETER

CONFLICTS_INSTALL=	qstat zh-qterm

OPTIONS_DEFINE=	EXAMPLES

pre-configure:
	@${REINPLACE_CMD} -E 's|ps[ \t]+-ef|ps -ax|g' ${WRKSRC}/torque.setup
	@${REINPLACE_CMD} -E 's|%%LOCALBASE%%|${LOCALBASE}|g' ${WRKSRC}/configure

post-install:
	${INSTALL_SCRIPT} ${WRKDIR}/torque-config ${STAGEDIR}${PREFIX}/bin

post-install-EXAMPLES-on:
	${INSTALL_SCRIPT} ${WRKSRC}/torque.setup ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
