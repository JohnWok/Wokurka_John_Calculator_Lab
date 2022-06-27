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
			
			int answer2 = CProcessor->AddictionFunction(3, 2, "+");
			Assert::AreEqual(answer2, 5 );

			int answer3 = CProcessor->DivisionFunction(6, 2, "/");
			Assert::AreEqual(answer3, 3);

			int answer4 = CProcessor->SubtractionFunction(6, 2, "-");
			Assert::AreEqual(answer4, 4);

			int answer5 = CProcessor->MultiplyFunction(3, 2, "*");
			Assert::AreEqual(answer5, 6);

			int answer6 = CProcessor->SubtractionFunction(7, 6, "-");
			Assert::AreEqual(answer6, 1);

			int answer7 = CProcessor->ModFunction(8, 6, "%");
			Assert::AreEqual(answer7, 2);

			/*int answer8 = CProcessor->SetBaseNumber(8);
			std::string answer_8 = CProcessor->GetHexadecimal(); 
			Assert::AreEqual(answer_8, 8);*/

			int answer9 = CProcessor->SetBaseNumber(9);
			std::string answer_9 = CProcessor->GetDecimal();
			Assert::AreEqual(answer9, 00000100001);

			//int answer10 = CProcessor->GetBinary(3, 2, "+");
			//Assert::AreEqual(answer10, 5);*/
		}


		TEST_METHOD(ButtonFactoryTests)
		{
			wxFrame* parent = new wxFrame();
			BFactory = new ButtonFactory(parent);
			wxButton* answer = BFactory->ButtonFive();
			Assert::AreEqual(answer->GetLabel(), "5");
			Assert::AreEqual(answer->GetId(), 105);
			delete(BFactory);
			delete(parent);

			BFactory = new ButtonFactory(parent);
			wxButton* answer2 = BFactory->ButtonEight();
			Assert::AreEqual(answer2->GetLabel(), "8");
			Assert::AreEqual(answer2->GetId(), 108);
			delete(BFactory);
			delete(parent);

			BFactory = new ButtonFactory(parent);
			wxButton* answer3 = BFactory->ButtonThree();
			Assert::AreEqual(answer3->GetLabel(), "3");
			Assert::AreEqual(answer3->GetId(), 103);
			delete(BFactory);
			delete(parent);

			BFactory = new ButtonFactory(parent);
			wxButton* answer4 = BFactory->ButtonTwo();
			Assert::AreEqual(answer4->GetLabel(), "2");
			Assert::AreEqual(answer4->GetId(), 102);
			delete(BFactory);
			delete(parent);

			BFactory = new ButtonFactory(parent);
			wxButton* answer5 = BFactory->ButtonSeven();
			Assert::AreEqual(answer5->GetLabel(), "7");
			Assert::AreEqual(answer5->GetId(), 107);
			delete(BFactory);
			delete(parent);

			BFactory = new ButtonFactory(parent);
			wxButton* answer6 = BFactory->ButtonSix();
			Assert::AreEqual(answer6->GetLabel(), "6");
			Assert::AreEqual(answer6->GetId(), 106);
			delete(BFactory);
			delete(parent);

			BFactory = new ButtonFactory(parent);
			wxButton* answer7 = BFactory->ButtonZero();
			Assert::AreEqual(answer7->GetLabel(), "0");
			Assert::AreEqual(answer7->GetId(), 100);
			delete(BFactory);
			delete(parent);

			BFactory = new ButtonFactory(parent);
			wxButton* answer8 = BFactory->ButtonNine();
			Assert::AreEqual(answer8->GetLabel(), "9");
			Assert::AreEqual(answer8->GetId(), 109);
			delete(BFactory);
			delete(parent);

			BFactory = new ButtonFactory(parent);
			wxButton* answer9 = BFactory->ButtonOne();
			Assert::AreEqual(answer9->GetLabel(), "1");
			Assert::AreEqual(answer9->GetId(), 100);
			delete(BFactory);
			delete(parent);

			BFactory = new ButtonFactory(parent);
			wxButton* answer10 = BFactory->ButtonFour();
			Assert::AreEqual(answer10->GetLabel(), "4");
			Assert::AreEqual(answer10->GetId(), 104);
			delete(BFactory);
			delete(parent);
		}


	private:
		ButtonFactory* BFactory;
		CalculatorProcessor* CProcessor;
	};

}
