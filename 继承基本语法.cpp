#include <iostream>
using namespace std;

class BasePage {
public:
	void header() {
		cout<<"��ҳ�������Σ���¼��������������ͷ����" << endl;
	}

	void footer() {
		cout<<"�������ģ�����������վ�ڵ�ͼ�������������ײ���" << endl;
	}
	
	void left() {
		cout<<"Java,Python,C++...(���������б�)" << endl;
	}

};

//Javaҳ��
class Java :public BasePage {
public:
	void content() {
		cout<<"Java������Ƶ" << endl;
	}
};

//Pythonҳ��
class Python :public BasePage {
public:
	void content() {
		cout << "Python������Ƶ" << endl;
	}
};

//C++ҳ��
class Cpp :public BasePage {
public:
	void content() {
		cout << "C++������Ƶ" << endl;
	}
};

void test01() {
	cout<<"Java������Ƶҳ�����£�" << endl;
	Java ja;
	ja.content();
	ja.footer();
	ja.header();
	ja.left();
	cout<<"-------------------------" << endl;
	cout << "Python������Ƶҳ�����£�" << endl;
	Python py;
	py.content();
	py.footer();
	py.header();
	py.left();
	cout << "-------------------------" << endl;
	cout << "C++������Ƶҳ�����£�" << endl;
	Cpp cpp;
	cpp.content();
	cpp.footer();
	cpp.header();
	cpp.left();
	cout << "-------------------------" << endl;
}

int main() {
	test01();
	return 0;
}

//�̳п��Լ����ظ�����