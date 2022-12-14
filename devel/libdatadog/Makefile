PORTNAME=	libdatadog
PORTVERSION=	0.8.0
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Datadog Rust library
WWW=		https://github.com/DataDog/libdatadog

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	cbindgen:devel/rust-cbindgen

USES=		cargo

USE_GITHUB=	yes
GH_ACCOUNT=	DataDog

CARGO_CRATES=	aho-corasick-0.7.18 \
		ansi_term-0.12.1 \
		anyhow-1.0.57 \
		autocfg-1.1.0 \
		base64-0.13.0 \
		bitflags-1.3.2 \
		bumpalo-3.9.1 \
		bytes-1.1.0 \
		cc-1.0.73 \
		cfg-if-1.0.0 \
		chrono-0.4.19 \
		cmake-0.1.48 \
		common-multipart-rfc7578-0.5.0 \
		core-foundation-0.9.3 \
		core-foundation-sys-0.8.3 \
		either-1.6.1 \
		fastrand-1.7.0 \
		fixedbitset-0.4.1 \
		fnv-1.0.7 \
		futures-0.3.21 \
		futures-channel-0.3.21 \
		futures-core-0.3.21 \
		futures-executor-0.3.21 \
		futures-io-0.3.21 \
		futures-macro-0.3.21 \
		futures-sink-0.3.21 \
		futures-task-0.3.21 \
		futures-util-0.3.21 \
		getrandom-0.2.6 \
		hashbrown-0.11.2 \
		heck-0.4.0 \
		hermit-abi-0.1.19 \
		hex-0.4.3 \
		http-0.2.7 \
		http-body-0.4.4 \
		httparse-1.7.1 \
		httpdate-1.0.2 \
		hyper-0.14.18 \
		hyper-multipart-rfc7578-0.7.0 \
		hyper-rustls-0.23.0 \
		indexmap-1.8.1 \
		instant-0.1.12 \
		itertools-0.10.3 \
		itoa-1.0.1 \
		js-sys-0.3.57 \
		lazy_static-1.4.0 \
		libc-0.2.125 \
		log-0.4.17 \
		maplit-1.0.2 \
		memchr-2.5.0 \
		mime-0.3.16 \
		mime_guess-2.0.4 \
		mio-0.8.3 \
		multimap-0.8.3 \
		num-integer-0.1.45 \
		num-traits-0.2.15 \
		num_cpus-1.13.1 \
		once_cell-1.10.0 \
		openssl-probe-0.1.5 \
		percent-encoding-2.1.0 \
		petgraph-0.6.0 \
		pin-project-1.0.10 \
		pin-project-internal-1.0.10 \
		pin-project-lite-0.2.9 \
		pin-utils-0.1.0 \
		ppv-lite86-0.2.16 \
		proc-macro2-1.0.38 \
		prost-0.10.3 \
		prost-build-0.10.3 \
		prost-derive-0.10.1 \
		prost-types-0.10.1 \
		quote-1.0.18 \
		rand-0.8.5 \
		rand_chacha-0.3.1 \
		rand_core-0.6.3 \
		redox_syscall-0.2.13 \
		regex-1.5.5 \
		regex-syntax-0.6.25 \
		remove_dir_all-0.5.3 \
		ring-0.16.20 \
		rustls-0.20.4 \
		rustls-native-certs-0.6.2 \
		rustls-pemfile-1.0.0 \
		ryu-1.0.9 \
		schannel-0.1.19 \
		sct-0.7.0 \
		security-framework-2.6.1 \
		security-framework-sys-2.6.1 \
		serde-1.0.137 \
		serde_derive-1.0.137 \
		serde_json-1.0.81 \
		sharded-slab-0.1.4 \
		slab-0.4.6 \
		smallvec-1.8.0 \
		socket2-0.4.4 \
		spin-0.5.2 \
		syn-1.0.93 \
		sys-info-0.9.1 \
		tempfile-3.3.0 \
		thiserror-1.0.31 \
		thiserror-impl-1.0.31 \
		thread_local-1.1.4 \
		time-0.1.43 \
		tokio-1.18.2 \
		tokio-macros-1.7.0 \
		tokio-rustls-0.23.4 \
		tokio-util-0.7.1 \
		tower-service-0.3.1 \
		tracing-0.1.34 \
		tracing-core-0.1.26 \
		tracing-log-0.1.3 \
		tracing-subscriber-0.3.11 \
		try-lock-0.2.3 \
		unicase-2.6.0 \
		unicode-xid-0.2.3 \
		untrusted-0.7.1 \
		uuid-0.8.2 \
		valuable-0.1.0 \
		version_check-0.9.4 \
		want-0.3.0 \
		wasi-0.10.2+wasi-snapshot-preview1 \
		wasi-0.11.0+wasi-snapshot-preview1 \
		wasm-bindgen-0.2.80 \
		wasm-bindgen-backend-0.2.80 \
		wasm-bindgen-macro-0.2.80 \
		wasm-bindgen-macro-support-0.2.80 \
		wasm-bindgen-shared-0.2.80 \
		web-sys-0.3.57 \
		webpki-0.22.0 \
		which-4.2.5 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		windows-sys-0.36.1 \
		windows_aarch64_msvc-0.36.1 \
		windows_i686_gnu-0.36.1 \
		windows_i686_msvc-0.36.1 \
		windows_x86_64_gnu-0.36.1 \
		windows_x86_64_msvc-0.36.1

post-patch:
	${SED} -e 's|@Datadog_VERSION@|${PORTVERSION}|' ${WRKSRC}/profiling-ffi/datadog_profiling.pc.in > ${WRKSRC}/datadog_profiling.pc
	${SED} -e 's|@DDog_VERSION@|${PORTVERSION}|' ${WRKSRC}/profiling-ffi/datadog_profiling_with_rpath.pc.in > ${WRKSRC}/datadog_profiling_with_rpath.pc

post-build:
	@cd ${WRKSRC} && cbindgen --crate ddcommon-ffi --config ddcommon-ffi/cbindgen.toml --output ${WRKSRC}/common.h
	@cd ${WRKSRC} && cbindgen --crate datadog-profiling-ffi --config profiling-ffi/cbindgen.toml --output ${WRKSRC}/profiling.h
	@${CARGO_TARGET_DIR}/${CARGO_BUILD_TARGET}/release/dedup_headers ${WRKSRC}/common.h ${WRKSRC}/profiling.h

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/include/datadog/
	${MKDIR} ${STAGEDIR}${PREFIX}/libdata/pkgconfig/
	${INSTALL_DATA} ${WRKSRC}/common.h ${WRKSRC}/profiling.h ${STAGEDIR}${PREFIX}/include/datadog/
	${INSTALL_DATA} ${CARGO_TARGET_DIR}/${CARGO_BUILD_TARGET}/release/libdatadog_profiling_ffi.a ${STAGEDIR}${PREFIX}/lib/
	${INSTALL_LIB} ${CARGO_TARGET_DIR}/${CARGO_BUILD_TARGET}/release/libdatadog_profiling_ffi.so ${STAGEDIR}${PREFIX}/lib/
	${INSTALL_DATA} ${WRKSRC}/datadog_profiling*.pc ${STAGEDIR}${PREFIX}/libdata/pkgconfig/

.include <bsd.port.mk>
