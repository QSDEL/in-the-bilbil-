//#include <iostream>
//using namespace std;
//
////������̳� ������μ̳�����
////�̳�֮ǰ �ӹؼ��� virtual ��Ϊ��̳�
////yi���Ϊ �����//
//
////�̳е���ָ�룬 ����ָ���ҵ�ƫ����
//
////һ��Ŀ
//class yi {
//public:
//	int m_age;
//};
//
////����Ŀ01
//class er01 : virtual public yi {};
//
////����Ŀ02
//class er02 : virtual public yi {};
//
////����Ŀ
//class san :public er01, public er02{};
//
//void test01() {
//	san s;
//	s.er01::m_age = 18;
//	s.er02::m_age = 28;
//	//���μ̳У���������ӵ����ͬ���ݣ���Ҫ������������
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