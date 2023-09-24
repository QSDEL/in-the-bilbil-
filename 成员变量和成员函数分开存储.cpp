//#include<iostream>
//using namespace std;
//
//class Person
//{
//	int m_A;               //非静态成员变量，属于类的对象上
//	static int m_B;         //静态成员变量，不属于类的对象上
//	void func(){}          //非静态成员函数，不属于类的对象上
//	static void func0(){}   //静态成员函数，不属于类的对象上
//};
//int Person::m_B = 0;
//
//void test()
//{
//	Person p;
//	                    //空对象会占用内存空间为：1
//	                    //C++编译器会给每一个空对象也分配一个字节空间，是为了区分空对象占内存的位置
//	                   //每个空对象也应该有一个独一无二的内存空间
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