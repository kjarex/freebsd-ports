PORTNAME=	meilisearch
DISTVERSIONPREFIX=	v
DISTVERSION=	0.27.2
PORTREVISION=	2
CATEGORIES=	textproc
MASTER_SITES=	https://github.com/meilisearch/mini-dashboard/releases/download/v${DASHBOARD_VERSION}/build.zip?dummy=/:mini_dashboard_assets \
		SF/mecab/mecab-ipadic/2.7.0-20070801/:mecab_ipadic
DISTFILES=	${MINIDASHBOARDFILE}:mini_dashboard_assets \
		mecab-ipadic-2.7.0-20070801.tar.gz:mecab_ipadic

MAINTAINER=	ashish@FreeBSD.org
COMMENT=	Powerful, fast, and an easy to use search engine
WWW=		https://www.meilisearch.com/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	liblmdb.so:databases/lmdb

USES=		cargo pkgconfig
USE_GITHUB=	yes
DASHBOARD_VERSION=	0.1.10
MINIDASHBOARDFILE=	meilisearch-mini-dashboard-build-${DASHBOARD_VERSION}.zip
CARGO_INSTALL_PATH=	meilisearch-http
CARGO_CRATES=	actix-codec-0.5.0 \
		actix-cors-0.6.1 \
		actix-http-3.0.4 \
		actix-macros-0.2.3 \
		actix-router-0.5.0 \
		actix-rt-2.7.0 \
		actix-server-2.1.1 \
		actix-service-2.0.2 \
		actix-tls-3.0.3 \
		actix-utils-3.0.0 \
		actix-web-4.0.1 \
		actix-web-codegen-4.0.0 \
		addr2line-0.17.0 \
		adler-1.0.2 \
		ahash-0.3.8 \
		ahash-0.7.6 \
		aho-corasick-0.7.18 \
		alloc-no-stdlib-2.0.3 \
		alloc-stdlib-0.2.1 \
		anyhow-1.0.56 \
		assert-json-diff-2.0.1 \
		async-stream-0.3.3 \
		async-stream-impl-0.3.3 \
		async-trait-0.1.53 \
		atomic-polyfill-0.1.7 \
		atomic_refcell-0.1.8 \
		atty-0.2.14 \
		autocfg-1.1.0 \
		backtrace-0.3.64 \
		bare-metal-0.2.5 \
		bare-metal-1.0.0 \
		base64-0.13.0 \
		big_s-1.0.2 \
		bimap-0.6.2 \
		bincode-1.3.3 \
		bit-set-0.5.2 \
		bit-vec-0.6.3 \
		bit_field-0.10.1 \
		bitfield-0.13.2 \
		bitflags-1.3.2 \
		block-buffer-0.10.2 \
		brotli-3.3.4 \
		brotli-decompressor-2.3.2 \
		bstr-0.2.17 \
		build_const-0.2.2 \
		bumpalo-3.9.1 \
		byte-unit-4.0.14 \
		bytecount-0.6.2 \
		bytemuck-1.9.1 \
		bytemuck_derive-1.1.0 \
		byteorder-1.4.3 \
		bytes-1.1.0 \
		bytestring-1.0.0 \
		bzip2-0.4.3 \
		bzip2-sys-0.1.11+1.0.8 \
		cargo_toml-0.11.5 \
		cc-1.0.73 \
		cedarwood-0.4.5 \
		cfg-if-0.1.10 \
		cfg-if-1.0.0 \
		change-detection-1.2.0 \
		character_converter-1.0.0 \
		chunked_transfer-1.4.0 \
		clap-3.1.8 \
		clap_derive-3.1.7 \
		concat-arrays-0.1.2 \
		convert_case-0.4.0 \
		cookie-0.16.0 \
		core-foundation-sys-0.8.3 \
		cortex-m-0.7.4 \
		cow-utils-0.1.2 \
		cpufeatures-0.2.2 \
		crc-1.8.1 \
		crc32fast-1.3.2 \
		critical-section-0.2.6 \
		crossbeam-channel-0.5.4 \
		crossbeam-deque-0.8.1 \
		crossbeam-epoch-0.9.8 \
		crossbeam-queue-0.1.2 \
		crossbeam-utils-0.6.6 \
		crossbeam-utils-0.8.8 \
		crypto-common-0.1.3 \
		csv-1.1.6 \
		csv-core-0.1.10 \
		derivative-2.2.0 \
		derive_more-0.99.17 \
		deunicode-1.3.1 \
		difflib-0.4.0 \
		digest-0.10.3 \
		dirs-next-1.0.2 \
		dirs-sys-next-0.1.2 \
		downcast-0.11.0 \
		either-1.6.1 \
		embedded-hal-0.2.7 \
		encoding-0.2.33 \
		encoding-index-japanese-1.20141219.5 \
		encoding-index-korean-1.20141219.5 \
		encoding-index-simpchinese-1.20141219.5 \
		encoding-index-singlebyte-1.20141219.5 \
		encoding-index-tradchinese-1.20141219.5 \
		encoding_index_tests-0.1.4 \
		encoding_rs-0.8.31 \
		enum-iterator-0.7.0 \
		enum-iterator-derive-0.7.0 \
		env_logger-0.9.0 \
		fastrand-1.7.0 \
		filetime-0.2.15 \
		firestorm-0.5.0 \
		flate2-1.0.22 \
		float-cmp-0.9.0 \
		fnv-1.0.7 \
		form_urlencoded-1.0.1 \
		fragile-1.2.0 \
		fs_extra-1.2.0 \
		fst-0.4.7 \
		futures-0.3.21 \
		futures-channel-0.3.21 \
		futures-core-0.3.21 \
		futures-executor-0.3.21 \
		futures-io-0.3.21 \
		futures-macro-0.3.21 \
		futures-sink-0.3.21 \
		futures-task-0.3.21 \
		futures-util-0.3.21 \
		fxhash-0.2.1 \
		generic-array-0.14.5 \
		geoutils-0.4.1 \
		getrandom-0.2.6 \
		getset-0.1.2 \
		gimli-0.26.1 \
		git2-0.14.2 \
		glob-0.3.0 \
		grenad-0.4.1 \
		h2-0.3.13 \
		hash32-0.2.1 \
		hashbrown-0.7.2 \
		hashbrown-0.11.2 \
		heapless-0.7.10 \
		heck-0.4.0 \
		hermit-abi-0.1.19 \
		hex-0.4.3 \
		http-0.2.6 \
		http-body-0.4.4 \
		httparse-1.6.0 \
		httpdate-1.0.2 \
		humantime-2.1.0 \
		hyper-0.14.18 \
		hyper-rustls-0.23.0 \
		idna-0.2.3 \
		indexmap-1.8.1 \
		instant-0.1.12 \
		ipnet-2.4.0 \
		itertools-0.10.3 \
		itoa-0.4.8 \
		itoa-1.0.1 \
		jieba-rs-0.6.6 \
		jobserver-0.1.24 \
		js-sys-0.3.56 \
		jsonwebtoken-8.0.1 \
		language-tags-0.3.2 \
		lazy_static-1.4.0 \
		levenshtein_automata-0.2.1 \
		libc-0.2.122 \
		libgit2-sys-0.13.2+1.4.2 \
		libm-0.2.2 \
		libz-sys-1.1.5 \
		lindera-0.12.6 \
		lindera-cc-cedict-builder-0.12.6 \
		lindera-core-0.12.6 \
		lindera-decompress-0.12.6 \
		lindera-dictionary-0.12.6 \
		lindera-ipadic-0.12.6 \
		lindera-ipadic-builder-0.12.6 \
		lindera-ko-dic-builder-0.12.6 \
		lindera-unidic-builder-0.12.6 \
		local-channel-0.1.2 \
		local-waker-0.1.2 \
		lock_api-0.4.7 \
		log-0.4.16 \
		logging_timer-1.1.0 \
		logging_timer_proc_macros-1.1.0 \
		lzma-rs-0.2.0 \
		maplit-1.0.2 \
		matches-0.1.9 \
		memchr-2.4.1 \
		memmap2-0.5.3 \
		memoffset-0.6.5 \
		mime-0.3.16 \
		mime_guess-2.0.4 \
		minimal-lexical-0.2.1 \
		miniz_oxide-0.4.4 \
		mio-0.8.2 \
		miow-0.3.7 \
		mockall-0.11.0 \
		mockall_derive-0.11.0 \
		nb-0.1.3 \
		nb-1.0.0 \
		nom-7.1.1 \
		nom_locate-4.0.0 \
		normalize-line-endings-0.3.0 \
		ntapi-0.3.7 \
		num-bigint-0.4.3 \
		num-integer-0.1.44 \
		num-traits-0.2.14 \
		num_cpus-1.13.1 \
		num_threads-0.1.5 \
		object-0.27.1 \
		obkv-0.2.0 \
		once_cell-1.10.0 \
		ordered-float-2.10.0 \
		os_str_bytes-6.0.0 \
		page_size-0.4.2 \
		parking_lot-0.12.0 \
		parking_lot_core-0.9.2 \
		paste-1.0.7 \
		path-matchers-1.0.2 \
		path-slash-0.1.4 \
		pem-1.0.2 \
		percent-encoding-2.1.0 \
		phf-0.10.1 \
		phf_codegen-0.10.0 \
		phf_generator-0.10.0 \
		phf_shared-0.10.0 \
		pin-project-lite-0.2.8 \
		pin-utils-0.1.0 \
		pkg-config-0.3.25 \
		platform-dirs-0.3.0 \
		ppv-lite86-0.2.16 \
		predicates-2.1.1 \
		predicates-core-1.0.3 \
		predicates-tree-1.0.5 \
		proc-macro-error-1.0.4 \
		proc-macro-error-attr-1.0.4 \
		proc-macro2-0.4.30 \
		proc-macro2-1.0.37 \
		proptest-1.0.0 \
		proptest-derive-0.3.0 \
		quick-error-1.2.3 \
		quick-error-2.0.1 \
		quickcheck-1.0.3 \
		quote-0.6.13 \
		quote-1.0.17 \
		rand-0.8.5 \
		rand_chacha-0.3.1 \
		rand_core-0.6.3 \
		rand_xorshift-0.3.0 \
		rayon-1.5.1 \
		rayon-core-1.9.1 \
		redox_syscall-0.2.13 \
		redox_users-0.4.3 \
		regex-1.5.5 \
		regex-automata-0.1.10 \
		regex-syntax-0.6.25 \
		remove_dir_all-0.5.3 \
		reqwest-0.11.10 \
		retain_mut-0.1.7 \
		ring-0.16.20 \
		riscv-0.7.0 \
		riscv-target-0.1.2 \
		roaring-0.9.0 \
		rstar-0.9.3 \
		rustc-demangle-0.1.21 \
		rustc_version-0.2.3 \
		rustc_version-0.4.0 \
		rustls-0.20.4 \
		rustls-pemfile-0.3.0 \
		rustversion-1.0.6 \
		rusty-fork-0.3.0 \
		ryu-1.0.9 \
		same-file-1.0.6 \
		scopeguard-1.1.0 \
		sct-0.7.0 \
		segment-0.2.0 \
		semver-0.9.0 \
		semver-1.0.7 \
		semver-parser-0.7.0 \
		serde-1.0.136 \
		serde_derive-1.0.136 \
		serde_json-1.0.79 \
		serde_url_params-0.2.1 \
		serde_urlencoded-0.7.1 \
		sha-1-0.10.0 \
		sha2-0.10.2 \
		signal-hook-registry-1.4.0 \
		simple_asn1-0.6.1 \
		siphasher-0.3.10 \
		slab-0.4.6 \
		slice-group-by-0.3.0 \
		smallstr-0.3.0 \
		smallvec-1.8.0 \
		smartstring-1.0.1 \
		socket2-0.4.4 \
		spin-0.5.2 \
		spin-0.9.2 \
		stable_deref_trait-1.2.0 \
		static-files-0.2.3 \
		static_assertions-1.1.0 \
		strsim-0.10.0 \
		syn-0.15.44 \
		syn-1.0.91 \
		synchronoise-1.0.0 \
		synstructure-0.12.6 \
		sysinfo-0.23.8 \
		tar-0.4.38 \
		tempfile-3.3.0 \
		termcolor-1.1.3 \
		termtree-0.2.4 \
		textwrap-0.15.0 \
		thiserror-1.0.30 \
		thiserror-impl-1.0.30 \
		tikv-jemalloc-sys-0.4.3+5.2.1-patched.2 \
		tikv-jemallocator-0.4.3 \
		time-0.1.43 \
		time-0.3.9 \
		time-macros-0.2.4 \
		tinyvec-1.5.1 \
		tinyvec_macros-0.1.0 \
		tokio-1.17.0 \
		tokio-macros-1.7.0 \
		tokio-rustls-0.23.3 \
		tokio-stream-0.1.8 \
		tokio-util-0.7.1 \
		toml-0.5.8 \
		tower-service-0.3.1 \
		tracing-0.1.32 \
		tracing-attributes-0.1.20 \
		tracing-core-0.1.24 \
		try-lock-0.2.3 \
		typenum-1.15.0 \
		unicase-2.6.0 \
		unicode-bidi-0.3.7 \
		unicode-normalization-0.1.19 \
		unicode-segmentation-1.9.0 \
		unicode-xid-0.1.0 \
		unicode-xid-0.2.2 \
		untrusted-0.7.1 \
		ureq-2.4.0 \
		url-2.2.2 \
		urlencoding-2.1.0 \
		utf8-width-0.1.6 \
		uuid-0.8.2 \
		vcell-0.1.3 \
		vcpkg-0.2.15 \
		vergen-7.0.0 \
		version_check-0.9.4 \
		void-1.0.2 \
		volatile-register-0.2.1 \
		wait-timeout-0.2.0 \
		walkdir-2.3.2 \
		want-0.3.0 \
		wasi-0.10.2+wasi-snapshot-preview1 \
		wasi-0.11.0+wasi-snapshot-preview1 \
		wasm-bindgen-0.2.79 \
		wasm-bindgen-backend-0.2.79 \
		wasm-bindgen-futures-0.4.29 \
		wasm-bindgen-macro-0.2.79 \
		wasm-bindgen-macro-support-0.2.79 \
		wasm-bindgen-shared-0.2.79 \
		web-sys-0.3.56 \
		webpki-0.22.0 \
		webpki-roots-0.22.3 \
		whatlang-0.13.0 \
		whoami-1.2.1 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-util-0.1.5 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		windows-sys-0.34.0 \
		windows_aarch64_msvc-0.34.0 \
		windows_i686_gnu-0.34.0 \
		windows_i686_msvc-0.34.0 \
		windows_x86_64_gnu-0.34.0 \
		windows_x86_64_msvc-0.34.0 \
		winreg-0.10.1 \
		xattr-0.2.2 \
		yada-0.5.0 \
		zerocopy-0.3.0 \
		zerocopy-derive-0.2.0 \
		zip-0.5.13 \
		heed,heed-traits,heed-types@git+https://github.com/meilisearch/heed?tag=v0.12.1\#fc017cf3394af737f92fd71e16f0499a78b79d65 \
		actix-web-static-files@git+https://github.com/kilork/actix-web-static-files.git?rev=2d3b6160\#2d3b6160f0de4ba061c5d76b5704f34fb677f6df \
		nelson@git+https://github.com/MarinPostma/nelson.git?rev=675f13885548fb415ead8fbb447e9e6d9314000a\#675f13885548fb415ead8fbb447e9e6d9314000a \
		meilisearch-tokenizer@git+https://github.com/meilisearch/tokenizer?tag=v0.2.9\#1dfc8ad9f5b338c39c3bc5fd5b2d0c1328314ddc \
		filter-parser,flatten-serde-json,json-depth-checker,milli@git+https://github.com/meilisearch/milli.git?tag=v0.26.6\#955aff48853c6032c75970dc710929f08b4f711a \
		lmdb-rkv-sys@git+https://github.com/meilisearch/lmdb-rs\#d0b50d02938ee84e4e4372697ea991fe2a4cae3b
PLIST_FILES=	bin/${PORTNAME}

post-extract:
	# repository is renamed to charabia upstream
	${MV} ${WRKDIR}/charabia-0.2.9 ${WRKDIR}/tokenizer-0.2.9

post-patch:
	${REINPLACE_CMD} -e 's,%%MINIDASHBOARDFILE%%,${DISTDIR}/${MINIDASHBOARDFILE},'  \
		${WRKSRC}/meilisearch-http/build.rs
	${GREP} -F -R -l %%WRKDIR%% ${WRKSRC} | ${XARGS} ${REINPLACE_CMD} -e \
		's,%%WRKDIR%%,${WRKDIR},'

.include <bsd.port.mk>
