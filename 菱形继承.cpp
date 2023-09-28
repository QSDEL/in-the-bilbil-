//#include <iostream>
//using namespace std;
//
////利用虚继承 解决菱形继承问题
////继承之前 加关键词 virtual 变为虚继承
////yi类称为 虚基类//
//
////继承的是指针， 利用指针找到偏移量
//
////一代目
//class yi {
//public:
//	int m_age;
//};
//
////二代目01
//class er01 : virtual public yi {};
//
////二代目02
//class er02 : virtual public yi {};
//
////三代目
//class san :public er01, public er02{};
//
//void test01() {
//	san s;
//	s.er01::m_age = 18;
//	s.er02::m_age = 28;
//	//菱形继承，两个父类拥有相同数据，需要加作用域区分
//	cout<<"s.er01::m_age =" << s.er01::m_age <<endl;
//	cout<<"s.er02::m_age ="<< s.er02::m_age << endl;
//	cout << "s.m_age =" << s.m_age << endl;
//}
//
//int main() {
//
//	test01();
//	return 0;
//}