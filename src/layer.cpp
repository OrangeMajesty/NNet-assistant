
#include "layer.h"

Neuron* Layer::addNeuron()
{
	Neuron *testNeuron = new Neuron;
	Neurons.insert(Neurons.end(), testNeuron);
	return testNeuron;
}

int Layer::getLength()
{
	return Neurons.size();
}

void Layer::removeNeuron()
{
	delete Neurons.back();
	Neurons.pop_back();
}