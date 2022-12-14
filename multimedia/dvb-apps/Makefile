PORTNAME=	dvb-apps
PORTVERSION=	1.1.2.1505
PORTREVISION=	3
CATEGORIES=	multimedia
MASTER_SITES=	LOCAL/decke
DISTNAME=	${PORTNAME}-3d43b280298c

MAINTAINER=	decke@FreeBSD.org
COMMENT=	Linux DVB API applications and utilities
WWW=		https://linuxtv.org/hg/dvb-apps/

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING.LGPL

BUILD_DEPENDS=	${LOCALBASE}/include/linux/dvb/version.h:multimedia/v4l_compat \
		${LOCALBASE}/include/linux/input.h:devel/evdev-proto

USES=		compiler gmake iconv localbase:ldflags perl5 tar:bzip2

USE_LDCONFIG=	yes
USE_PERL5=	build

MAKE_ARGS+=	prefix="${PREFIX}"

.include <bsd.port.pre.mk>

post-patch:
	@${REINPLACE_CMD} 's|/usr/include|${LOCALBASE}/include|' \
		${WRKSRC}/Makefile \
		${WRKSRC}/util/av7110_loadkeys/generate-keynames.sh \
		${WRKSRC}/util/szap/Makefile
	@${REINPLACE_CMD} 's|make|gmake|' \
		${WRKSRC}/test/Makefile
	@${REINPLACE_CMD} 's|<malloc.h>|<stdlib.h>|' \
		${WRKSRC}/lib/libdvbcfg/dvbcfg_scanfile.c \
		${WRKSRC}/lib/libdvbcfg/dvbcfg_zapchannel.c
	@${REINPLACE_CMD} 's|O_LARGEFILE|0|' \
		${WRKSRC}/test/test_dvr.c \
		${WRKSRC}/test/test_tapdmx.c \
		${WRKSRC}/util/gnutv/gnutv_data.c \
		${WRKSRC}/util/szap/tzap.c
	@${REINPLACE_CMD} 's|<linux/types.h>|<sys/types.h>|' \
		${WRKSRC}/util/dib3000-watch/dib3000-watch.c \
		${WRKSRC}/util/scan/lnb.c \
		${WRKSRC}/lib/libdvbsec/dvbsec_api.c \
		${WRKSRC}/lib/libdvbsec/dvbsec_cfg.c \
		${WRKSRC}/lib/libdvbapi/dvbvideo.c \
		${WRKSRC}/test/test_vevent.c \
		${WRKSRC}/test/test_stillimage.c \
		${WRKSRC}/test/test_av.c
.if ${CHOSEN_COMPILER_TYPE} == gcc
	@${REINPLACE_CMD} -e 's/-Wno-packed-bitfield-compat//' \
		${WRKSRC}/util/scan/Makefile
.endif

.include <bsd.port.post.mk>
