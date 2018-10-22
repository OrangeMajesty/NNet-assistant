/**
 *	@Author: Dmitry Kulakov 
 *	@Version: 0.1_Alpha
 *	
 *
 */
#ifndef _NEURON_
#define _NEURON_


class Neuron 
{
public:
	void setIn(double value);
	double getOut();
protected:
	double in;
	double out;
};

#endif // _NEURON_