//#include<iostream>
//using namespace std;
//
//class Person
//{
//	int m_A;               //�Ǿ�̬��Ա������������Ķ�����
//	static int m_B;         //��̬��Ա��������������Ķ�����
//	void func(){}          //�Ǿ�̬��Ա��������������Ķ�����
//	static void func0(){}   //��̬��Ա��������������Ķ�����
//};
//int Person::m_B = 0;
//
//void test()
//{
//	Person p;
//	                    //�ն����ռ���ڴ�ռ�Ϊ��1
//	                    //C++���������ÿһ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
//	                   //ÿ���ն���ҲӦ����һ����һ�޶����ڴ�ռ�
//	cout<<"size of (p) = "<<sizeof(p) << endl;
//}
//
//void test1()
//{
//	Person p;
//	cout << "size of (p) = " << sizeof(p) << endl;
//}
//
//int main()
//{
//	//test();
//	test1();
//	return 0;
//}