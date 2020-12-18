#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_12.3(рекурс.)/Lab_12.3(рекурс.).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab123рекурс
{
	TEST_CLASS(UnitTestLab123рекурс)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Spusok* first = NULL;
			Spusok* last = NULL;

			int index = 5, N = 2, i = 0;
			Creata(first, last, index, N, i);

			Spusok* T = first;

			int v1 = 5, v2 = 13;

			T = first;
			Process(T, v1, v2, last);
			T = first;

			int l = T->link1->inf;
			Assert::AreEqual(l, 13);
		}
	};
}
