#define FAST_CLASSIFIER_GENL_VERSION	(1)
#define FAST_CLASSIFIER_GENL_NAME	"FAST_CLASSIFIER"
#define FAST_CLASSIFIER_GENL_HDRSIZE	(0)

enum {
	FAST_CLASSIFIER_A_UNSPEC,
	FAST_CLASSIFIER_A_TUPLE,
	__FAST_CLASSIFIER_A_MAX,
};
#define FAST_CLASSIFIER_A_MAX (__FAST_CLASSIFIER_A_MAX - 1)

enum {
	FAST_CLASSIFIER_C_UNSPEC,
	FAST_CLASSIFIER_C_RECV,
	__FAST_CLASSIFIER_C_MAX,
};
#define FAST_CLASSIFIER_C_MAX (__FAST_CLASSIFIER_C_MAX - 1)

struct fast_classifier_tuple {
	unsigned char proto;
	unsigned long src_saddr;
	unsigned long dst_saddr;
	unsigned short sport;
	unsigned short dport;
};
