//#include<iostream>
//using namespace std;
//
//
//class person
//{
//public:
//	person()
//	{
//		cout<<"person的默认构造函数" << endl;
//	}
//
//	person(int age ,int height )
//	{
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "person的有参构造函数" << endl;
//	}
//
//	~person()
//	{
//		//将堆区开辟数据类型做释放操作
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;//防止出现野指针，置空操作
//		} 
//		cout << "person的析构函数" << endl;
//	}
//
//	person(const person &p)
//	{
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height;//编译器默认实现就是这行代码
//		//深拷贝
//		m_Height = new int(*p.m_Height);
//		cout << "person的拷贝构造函数" << endl;
//	}
//	int m_Age = 0;//年龄
//	int* m_Height=0;//身高
//};
//
//void test01()
//{
//	person p1(18,160);
//	cout<<"p1的年龄为："<<p1.m_Age <<"身高为："<<*p1.m_Height << endl;
//	person p2(p1);
//	cout << "p2的年龄为：" << p2.m_Age << "身高为：" << *p2.m_Height << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}
//
//
//
////如果属性有在堆区开辟，一定要自己写拷贝函数，防止浅拷贝带来的问题
////浅拷贝带来的问题就是堆区的内存重复释放（利用深拷贝解决）