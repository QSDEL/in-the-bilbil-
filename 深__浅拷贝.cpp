//#include<iostream>
//using namespace std;
//
//
//class person
//{
//public:
//	person()
//	{
//		cout<<"person��Ĭ�Ϲ��캯��" << endl;
//	}
//
//	person(int age ,int height )
//	{
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "person���вι��캯��" << endl;
//	}
//
//	~person()
//	{
//		//���������������������ͷŲ���
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;//��ֹ����Ұָ�룬�ÿղ���
//		} 
//		cout << "person����������" << endl;
//	}
//
//	person(const person &p)
//	{
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height;//������Ĭ��ʵ�־������д���
//		//���
//		m_Height = new int(*p.m_Height);
//		cout << "person�Ŀ������캯��" << endl;
//	}
//	int m_Age = 0;//����
//	int* m_Height=0;//���
//};
//
//void test01()
//{
//	person p1(18,160);
//	cout<<"p1������Ϊ��"<<p1.m_Age <<"���Ϊ��"<<*p1.m_Height << endl;
//	person p2(p1);
//	cout << "p2������Ϊ��" << p2.m_Age << "���Ϊ��" << *p2.m_Height << endl;
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
////����������ڶ������٣�һ��Ҫ�Լ�д������������ֹǳ��������������
////ǳ����������������Ƕ������ڴ��ظ��ͷţ�������������