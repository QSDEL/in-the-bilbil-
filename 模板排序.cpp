#include<iostream>
using namespace std;

//利用函数模板封装一个排序的函数，可以对不同数据类型数组进行排序
//从小到大
//利用char.int数组进行测试

//交换函数模板
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
		int max = i;//认定最大值
		for (int j = i + 1; j < len; j++)
		{
			//认定最大值比遍历出数值小
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			//交换max和i元素
			mySwap(arr[max], arr[i]);
		}
	}
}

//提供打印数组模板
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
	//测试char
	char arr[] = "cabdfehg";
	int num = sizeof(arr) / sizeof(char);
	mySort(arr, num);
	printarr(arr, num);
}

void test02()
{
	//测试int
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