PORTNAME=	Text-Bidi
PORTVERSION=	2.18
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to the libfribidi
WWW=		https://metacpan.org/release/Text-Bidi

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-ExtUtils-PkgConfig>=0:devel/p5-ExtUtils-PkgConfig \
		swig:devel/swig
LIB_DEPENDS=	libfribidi.so:converters/fribidi

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Text/Bidi/private/private.so

.include <bsd.port.mk>
