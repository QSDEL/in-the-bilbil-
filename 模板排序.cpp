#include<iostream>
using namespace std;

//���ú���ģ���װһ������ĺ��������ԶԲ�ͬ�������������������
//��С����
//����char.int������в���

//��������ģ��
template<class T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<class T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;//�϶����ֵ
		for (int j = i + 1; j < len; j++)
		{
			//�϶����ֵ�ȱ�������ֵС
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			//����max��iԪ��
			mySwap(arr[max], arr[i]);
		}
	}
}

//�ṩ��ӡ����ģ��
template<class T>
void printarr(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << "";
	}
	cout << endl;
}

void test01()
{
	//����char
	char arr[] = "cabdfehg";
	int num = sizeof(arr) / sizeof(char);
	mySort(arr, num);
	printarr(arr, num);
}

void test02()
{
	//����int
	int arrr[] = { 5,7,9,3,6,10,6,8,4 };
	int num = sizeof(arrr) / sizeof(int);
	mySort(arrr, num);
	printarr(arrr, num);
}

int main()
{
	//test01();
	test02();
	return 0;
}