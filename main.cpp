#include <iostream>
#include <vector>
using namespace std;

//template <typename CustomType>
//class Store
//{
//public:
//	CustomType Number;
//};

// �����ε� ����

int main()
{
		// �⺻�� 
	/*vector<int> Data;
	Data.push_back(3);
	Data.push_back(2);
	Data.push_back(1);

	for (int i = 0; i < Data.size(); ++i)
	{
		cout << Data[i] << endl;
	}*/

		// ���� 
	// ������ �� ���Ϳ� ����, ���
	srand((unsigned int)time(NULL));
	rand() % 100;
	
	vector<int> RandNums;
	/*RandNums.push_back(rand() % 100);
	RandNums.push_back(rand() % 100);
	RandNums.push_back(rand() % 100);*/

	int NumCount = 0;
	cout << "�Է� Ƚ�� �Է� : ";
	cin >> NumCount;
	cout << "�Էµ� �� : ";
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
		cout << "�βٲ� : " << RandNums[i] << endl;
	}

		// �迭.Size() Ȱ��
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