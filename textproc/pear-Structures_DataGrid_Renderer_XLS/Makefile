PORTNAME=	Structures_DataGrid_Renderer_XLS
PORTVERSION=	0.1.3
CATEGORIES=	textproc databases www pear

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Renderer driver that generates a XLS string
WWW=		https://pear.php.net/package/Structures_DataGrid_Renderer_XLS

BUILD_DEPENDS=	${PEARDIR}/Structures/DataGrid/DataSource/Array.php:databases/pear-Structures_DataGrid_DataSource_Array@${PHP_FLAVOR} \
		${PEARDIR}/Spreadsheet/Excel/Writer.php:textproc/pear-Spreadsheet_Excel_Writer@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/Structures/DataGrid/DataSource/Array.php:databases/pear-Structures_DataGrid_DataSource_Array@${PHP_FLAVOR} \
		${PEARDIR}/Spreadsheet/Excel/Writer.php:textproc/pear-Spreadsheet_Excel_Writer@${PHP_FLAVOR}

USES=		pear

.include <bsd.port.mk>
