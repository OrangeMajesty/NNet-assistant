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
bool suite_TextInterpretation_init = false;
#include "/home/dmitry-us/Project/NNet-assistant/test/tig_test.h"

static TextInterpretation suite_TextInterpretation;

static CxxTest::List Tests_TextInterpretation = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TextInterpretation( "/home/dmitry-us/Project/NNet-assistant/test/tig_test.h", 8, "TextInterpretation", suite_TextInterpretation, Tests_TextInterpretation );

static class TestDescription_suite_TextInterpretation_testColpiller : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TextInterpretation_testColpiller() : CxxTest::RealTestDescription( Tests_TextInterpretation, suiteDescription_TextInterpretation, 11, "testColpiller" ) {}
 void runTest() { suite_TextInterpretation.testColpiller(); }
} testDescription_suite_TextInterpretation_testColpiller;

static class TestDescription_suite_TextInterpretation_testColpiller1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TextInterpretation_testColpiller1() : CxxTest::RealTestDescription( Tests_TextInterpretation, suiteDescription_TextInterpretation, 17, "testColpiller1" ) {}
 void runTest() { suite_TextInterpretation.testColpiller1(); }
} testDescription_suite_TextInterpretation_testColpiller1;

static class TestDescription_suite_TextInterpretation_testColpiller2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TextInterpretation_testColpiller2() : CxxTest::RealTestDescription( Tests_TextInterpretation, suiteDescription_TextInterpretation, 23, "testColpiller2" ) {}
 void runTest() { suite_TextInterpretation.testColpiller2(); }
} testDescription_suite_TextInterpretation_testColpiller2;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
