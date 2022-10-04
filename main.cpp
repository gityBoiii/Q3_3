#include <iostream>
#include <vector>
using namespace std;

//template <typename CustomType>
//class Store
//{
//public:
//	CustomType Number;
//};

// 오버로딩 설명

int main()
{
		// 기본형 
	/*vector<int> Data;
	Data.push_back(3);
	Data.push_back(2);
	Data.push_back(1);

	for (int i = 0; i < Data.size(); ++i)
	{
		cout << Data[i] << endl;
	}*/

		// 문제 
	// 랜덤한 수 벡터에 저장, 출력
	srand((unsigned int)time(NULL));
	rand() % 100;
	
	vector<int> RandNums;
	/*RandNums.push_back(rand() % 100);
	RandNums.push_back(rand() % 100);
	RandNums.push_back(rand() % 100);*/

	int NumCount = 0;
	cout << "입력 횟수 입력 : ";
	cin >> NumCount;
	cout << "입력된 수 : ";
	for (int i = 0; i < NumCount; ++i)
	{
		RandNums.push_back(rand() % 100);
		
		if (i != (NumCount-1))
		{
			cout << RandNums[i] << ", ";
		}
		else
		{
			cout << RandNums[i] << endl;
		}
	}

	
	
	for (int i = RandNums.size()-1; i >= 0; i--)
	{
		cout << "로꾸꺼 : " << RandNums[i] << endl;
	}

		// 배열.Size() 활용
	/*for (int i = 0; i < RandNums.size(); ++i)
	{
		cout << RandNums[i] << endl;
	}*/


	/*Store<int> StoreI;
	StoreI.Number = 1;
	cout << StoreI.Number << endl;

	Store<float> StoreF;
	StoreF.Number = 1.2f;
	cout << StoreF.Number << endl;*/

	return 0;
}