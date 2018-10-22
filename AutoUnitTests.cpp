/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_TestLayer_init = false;
#include "/home/dmitry-us/Project/NNet-assistant/test/layer_test.h"

static TestLayer suite_TestLayer;

static CxxTest::List Tests_TestLayer = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestLayer( "/home/dmitry-us/Project/NNet-assistant/test/layer_test.h", 6, "TestLayer", suite_TestLayer, Tests_TestLayer );

static class TestDescription_suite_TestLayer_test_addNeuron : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestLayer_test_addNeuron() : CxxTest::RealTestDescription( Tests_TestLayer, suiteDescription_TestLayer, 9, "test_addNeuron" ) {}
 void runTest() { suite_TestLayer.test_addNeuron(); }
} testDescription_suite_TestLayer_test_addNeuron;

static class TestDescription_suite_TestLayer_test_getLength : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestLayer_test_getLength() : CxxTest::RealTestDescription( Tests_TestLayer, suiteDescription_TestLayer, 21, "test_getLength" ) {}
 void runTest() { suite_TestLayer.test_getLength(); }
} testDescription_suite_TestLayer_test_getLength;

static class TestDescription_suite_TestLayer_test_removeNeuronLast : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestLayer_test_removeNeuronLast() : CxxTest::RealTestDescription( Tests_TestLayer, suiteDescription_TestLayer, 28, "test_removeNeuronLast" ) {}
 void runTest() { suite_TestLayer.test_removeNeuronLast(); }
} testDescription_suite_TestLayer_test_removeNeuronLast;

#include "/home/dmitry-us/Project/NNet-assistant/test/neuron_test.h"

static TestNeuron suite_TestNeuron;

static CxxTest::List Tests_TestNeuron = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestNeuron( "/home/dmitry-us/Project/NNet-assistant/test/neuron_test.h", 6, "TestNeuron", suite_TestNeuron, Tests_TestNeuron );

static class TestDescription_suite_TestNeuron_test_setIn : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestNeuron_test_setIn() : CxxTest::RealTestDescription( Tests_TestNeuron, suiteDescription_TestNeuron, 9, "test_setIn" ) {}
 void runTest() { suite_TestNeuron.test_setIn(); }
} testDescription_suite_TestNeuron_test_setIn;

static class TestDescription_suite_TestNeuron_test_getOut : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestNeuron_test_getOut() : CxxTest::RealTestDescription( Tests_TestNeuron, suiteDescription_TestNeuron, 20, "test_getOut" ) {}
 void runTest() { suite_TestNeuron.test_getOut(); }
} testDescription_suite_TestNeuron_test_getOut;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
