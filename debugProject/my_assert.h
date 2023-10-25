#ifdef NDEBUG
#define my_assert(condition) ((void)0)
#else
#define my_assert(condition) \
	do { \
		if (!(condition)) { \
			fprintf(stderr, "Assertion failed: %s, file %s, line %d", #condition, __FILE__, __LINE__); \
			abort(); \
		} \
	} while (0)
#endif
