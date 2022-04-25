#include "pch.h"
#include "CppUnitTest.h"
#include <string>
#include "../lab4_2pkr/Source.cpp"
using namespace std;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string s;
			s = "ab(cd)";
			string t = Erase(s);
			string a = "ab";
			Assert::AreEqual(a, t);
		}
	};
}
