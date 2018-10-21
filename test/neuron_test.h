// Testing neuron
#include "../src/neuron.h"

#include <cxxtest/TestSuite.h>

class TestNeuron : public CxxTest::TestSuite, public Neuron
{
public:
	void test_setIn()
	{
		setIn(1.3f);
		TS_ASSERT_EQUALS(in, 1.3f);

		setIn(0.45e10);
		TS_ASSERT_EQUALS(in, 0.45e10);

		setIn(-1);
		TS_ASSERT_EQUALS(in, -1);
	}
	void test_getOut()
	{
		out = 4.4e3;
		TS_ASSERT_EQUALS(4.4e3, getOut());

		out = 4.4e3;
		TS_ASSERT_EQUALS(4.4e3, getOut());

		out = -1;
		TS_ASSERT_EQUALS(-1, getOut());
	}
};
