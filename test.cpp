#include <iostream>
#include "gtest/gtest.h"
#include "RNK.h"

RNK test(size_t size) {
	RNK rnk;
	for (size_t i = 0; i < size; ++i) {
		rnk.push(A);
	}
	return rnk;
}

TEST(get_nucl, push_nucl) {
	RNK rnk1 = test(5);
	RNK rnk2(5, A);
	ASSERT_EQ(rnk1, rnk2);
}
