PORTNAME=	WAP-wbxml
PORTVERSION=	1.14
PORTREVISION=	1
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Binarization of XML file
WWW=		https://metacpan.org/release/WAP-wbxml

LICENSE=	ART20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-XML-DOM>=0:textproc/p5-XML-DOM \
		p5-I18N-Charset>=0:misc/p5-I18N-Charset

USES=		dos2unix perl5
USE_PERL5=	configure
NO_ARCH=	yes

post-patch:
.for file in syncml.wbrules.xml wap.wbrules.xml wv.wbrules.xml
		@${REINPLACE_CMD} -i '' -e 's/^M$$//' ${WRKSRC}/lib/WAP/wbxml/${file}
.endfor

.include <bsd.port.mk>
