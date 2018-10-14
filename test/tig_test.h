#ifndef _TIG_TEST_
#define _TIG_TEST_

// Test text interpretation and text generator

#include <cxxtest/TestSuite.h>

class TextInterpretation : public CxxTest::TestSuite
{
public:
	void testColpiller(void)
	{
		TS_ASSERT(1+1>1);
		TS_ASSERT_EQUALS(1+1, 2);
		// TS_ASSERT_EQUALS(1+1, 3);
	}
	void testColpiller1(void)
	{
		TS_ASSERT(1+1>1);
		TS_ASSERT_EQUALS(1+1, 2);
		TS_ASSERT_EQUALS(1+1, 3);
	}
	void testColpiller2(void)
	{
		TS_ASSERT(1+1>1);
		TS_ASSERT_EQUALS(1+1, 2);
		TS_ASSERT_EQUALS(1+1, 3);
	}
};

#endif // _TIG_TEST_