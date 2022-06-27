#include "pch.h"
#include "CppUnitTest.h"
#include "../Wokurka_John_Calculator_Lab/ButtonFactory.h"
#include "../Wokurka_John_Calculator_Lab/CalculatorProcessor.h"
#include "wx/wx.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorLabTest
{
	TEST_CLASS(CalculatorLabTest)
	{
	public:


		TEST_METHOD(CalculatorProcessorTests)
		{
			CProcessor = CalculatorProcessor::GetInstance();
			int answer = CProcessor->AddictionFunction(2, 2, "+");
			Assert::AreEqual(answer, 4);
			

			/*int answer8 = CProcessor->SetBaseNumber(8);
			std::string answer_8 = CProcessor->GetHexadecimal(); 
			Assert::AreEqual(answer_8, 8);*/

			

			//int answer10 = CProcessor->GetBinary(3, 2, "+");
			//Assert::AreEqual(answer10, 5);*/
		}
		
		TEST_METHOD(ButtonFactoryTests)
		{
			wxFrame* parent = new wxFrame();
			BFactory = new ButtonFactory(parent);
			wxButton* answer = BFactory->ButtonFive();
			//Assert::AreEqual(answer->GetLabel(), "5");
			Assert::AreEqual(answer->GetId(), 105);
			delete(BFactory);
			delete(parent);

			
		}

		TEST_METHOD(CalculatorProcessorTests2)
		{
			CProcessor = CalculatorProcessor::GetInstance();
			int answer2 = CProcessor->AddictionFunction(3, 2, "+");
			Assert::AreEqual(answer2, 5);
		}

		TEST_METHOD(ButtonFactoryTests2)
		{
			wxFrame* parent = new wxFrame();
			BFactory = new ButtonFactory(parent);
			wxButton* answer10 = BFactory->ButtonFour();
			//Assert::AreEqual(answer10->GetLabel(), "4");
			Assert::AreEqual(answer10->GetId(), 104);
			delete(BFactory);
			delete(parent);

		}

		TEST_METHOD(CalculatorProcessorTests3)
		{
			CProcessor = CalculatorProcessor::GetInstance();
			int answer3 = CProcessor->DivisionFunction(2, 6, "/");
			Assert::AreEqual(answer3, 3);
		}

		TEST_METHOD(ButtonFactoryTests3)
		{
			wxFrame* parent = new wxFrame();
			BFactory = new ButtonFactory(parent);
			wxButton* answer9 = BFactory->ButtonOne();
			//Assert::AreEqual(answer9->GetLabel(), "1");
			Assert::AreEqual(answer9->GetId(), 101);
			delete(BFactory);
			delete(parent);

		}

		TEST_METHOD(CalculatorProcessorTests4)
		{
			CProcessor = CalculatorProcessor::GetInstance();
			int answer4 = CProcessor->SubtractionFunction(2, 6, "-");
			Assert::AreEqual(answer4, 4);
		}

		TEST_METHOD(ButtonFactoryTests4)
		{
			wxFrame* parent = new wxFrame();
			BFactory = new ButtonFactory(parent);
			wxButton* answer8 = BFactory->ButtonNine();
			//Assert::AreEqual(answer8->GetLabel(), "9");
			Assert::AreEqual(answer8->GetId(), 109);
			delete(BFactory);
			delete(parent);

		}

		TEST_METHOD(CalculatorProcessorTests5)
		{
			CProcessor = CalculatorProcessor::GetInstance();
			int answer7 = CProcessor->ModFunction(6, 8, "%");
			Assert::AreEqual(answer7, 2);
		}

		TEST_METHOD(ButtonFactoryTests5)
		{
			wxFrame* parent = new wxFrame();
			BFactory = new ButtonFactory(parent);
			wxButton* answer7 = BFactory->ButtonZero();
			//Assert::AreEqual(answer7->GetLabel(), "0");
			Assert::AreEqual(answer7->GetId(), 100);
			delete(BFactory);
			delete(parent);

		}

	private:
		ButtonFactory* BFactory;
		CalculatorProcessor* CProcessor;
	};

}
