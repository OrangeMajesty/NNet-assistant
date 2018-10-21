//
#include "../src/layer.h"

#include <cxxtest/TestSuite.h>

class TestLayer : public CxxTest::TestSuite, public Layer
{
public:
	void test_addNeuron()
	{
		int before = getLength();

		Neuron* test = addNeuron();

		int after = getLength();

		TS_ASSERT_DIFFERS(before, after);
		TS_ASSERT_EQUALS(test, Neurons.back());
		TS_ASSERT_EQUALS(before+1, after);
	}
	void test_getLength()
	{
		int size = getLength();
		Neurons.insert(Neurons.end(), new Neuron);

		TS_ASSERT_EQUALS(size+1, getLength());
	}
	void test_removeNeuronLast()
	{
		int before = getLength();

		Neuron* test = addNeuron();

		TS_ASSERT_DIFFERS(before, getLength());

		removeNeuron();
		TS_ASSERT_EQUALS(before, getLength());
	}
	
	//* getNeuron
	//
};