// Test text interpretation and text generator

#include <cxxtest/TestSuite.h>

class TextInterpretation : public CxxTest::TestSuite
{
public:
	void testColpiller(void)
	{
		TS_ASSERT(1+1>1);
		TS_ASSERT_EQUALS(1+1, 2);
		TS_ASSERT_EQUALS(1+1, 3);
	}
};