/**
 *	@Author: Dmitry Kulakov 
 *	@Version: 0.1_Alpha
 *	
 *
 */
#ifndef _LAYER_
#define _LAYER_

#include "neuron.h"
#include <vector>

class Layer
{
public:
	int getLength();
	Neuron* addNeuron();
	void removeNeuron();
protected:
	std::vector<class Neuron *> Neurons;
};

#endif // _LAYER_