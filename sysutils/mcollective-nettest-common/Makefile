PORTNAME?=	mcollective-nettest-common
PORTVERSION=	3.0.4
CATEGORIES=	sysutils

MAINTAINER=	puppet@FreeBSD.org
COMMENT?=	MCollective common files to test ICMP and TCP connectivity
WWW=		https://github.com/puppetlabs/mcollective-nettest-agent

LICENSE=	APACHE20

DEPRECATED=	Agents are better distributed through the Puppet forge

RUN_DEPENDS?=	mcollective>=2:sysutils/mcollective

USE_GITHUB=	yes
GH_ACCOUNT=	puppetlabs
GH_PROJECT=	mcollective-nettest-agent

NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES?=	share/mcollective/agent/nettest.ddl \
		share/mcollective/util/nettest_agent.rb \
		share/mcollective/validator/nettest_fqdn.ddl \
		share/mcollective/validator/nettest_fqdn.rb \
		share/mcollective/validator/nettest_server_address.ddl \
		share/mcollective/validator/nettest_server_address.rb

.if !target(do-install)
do-install:
	cd ${WRKSRC} && ${COPYTREE_SHARE} "agent/*.ddl util validator" ${STAGEDIR}${PREFIX}/share/mcollective
.endif

.include <bsd.port.mk>
