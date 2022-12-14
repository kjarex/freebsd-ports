PORTNAME=	cvsgraph
PORTVERSION=	1.7.0
PORTREVISION=	8
CATEGORIES=	devel graphics
MASTER_SITES=	http://www.akhphd.au.dk/~bertho/cvsgraph/release/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Graph the life story of a file under CVS or RCS
WWW=		https://web.archive.org/web/20181111235708/http://www.akhphd.au.dk/~bertho/cvsgraph/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libgd.so:graphics/gd \
		libpng16.so:graphics/png \
		libtiff.so:graphics/tiff \
		libwebp.so:graphics/webp \
		libfreetype.so:print/freetype2 \
		libfontconfig.so:x11-fonts/fontconfig

USES=		localbase:ldflags jpeg
SUB_FILES=	pkg-message
GNU_CONFIGURE=	yes
LDFLAGS+=	-lm
CONFIGURE_ARGS=	--with-gd-inc=${LOCALBASE}/include \
		--with-gd-lib=${LOCALBASE}/lib

DOCS=		ChangeLog README
EXAMPLES=	cvsgraphwrapper.php mkimage.php
MORE_EXAMPLES=	README.Automatic_documentation checkoutlist commit_action.sh \
		commitinfo cvswrappers tag_action.sh taginfo

OPTIONS_DEFINE=	DOCS EXAMPLES

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/cvsgraph.conf ${STAGEDIR}${PREFIX}/etc/cvsgraph.conf.sample
	${INSTALL_MAN} ${WRKSRC}/cvsgraph.1 ${STAGEDIR}${MAN1PREFIX}/man/man1
	${INSTALL_MAN} ${WRKSRC}/cvsgraph.conf.5 ${STAGEDIR}${MAN5PREFIX}/man/man5

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for i in ${DOCS}
	${INSTALL_DATA} ${WRKSRC}/${i} ${STAGEDIR}${DOCSDIR}
.endfor

do-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}/automatic_documentation
.for i in ${EXAMPLES}
	${INSTALL_DATA} ${WRKSRC}/contrib/${i} ${STAGEDIR}${EXAMPLESDIR}
.endfor
.for i in ${MORE_EXAMPLES}
	${INSTALL_DATA} ${WRKSRC}/contrib/automatic_documentation/${i} \
		${STAGEDIR}${EXAMPLESDIR}/automatic_documentation
.endfor

.include <bsd.port.mk>
