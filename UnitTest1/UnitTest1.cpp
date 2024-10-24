#include "pch.h"
#include "CppUnitTest.h"
#include "assert.h"
#include "../lab8.1char/FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{


			assert(Count("OGOAGA"), 2);  
			assert(Count("OGOGOGO"), 2);  
			assert(Count("AGAGAOGO"), 2); 
			assert(Count("AGAOGOOGO"), 3); 
		}


	};
}
	