#include <iostream>
using namespace std;

class BasePage {
public:
	void header() {
		cout<<"首页，公开课，登录。。。。（公共头部）" << endl;
	}

	void footer() {
		cout<<"帮助中心，交流合作，站内地图。。。（公共底部）" << endl;
	}
	
	void left() {
		cout<<"Java,Python,C++...(公共分类列表)" << endl;
	}

};

//Java页面
class Java :public BasePage {
public:
	void content() {
		cout<<"Java下载视频" << endl;
	}
};

//Python页面
class Python :public BasePage {
public:
	void content() {
		cout << "Python下载视频" << endl;
	}
};

//C++页面
class Cpp :public BasePage {
public:
	void content() {
		cout << "C++下载视频" << endl;
	}
};

void test01() {
	cout<<"Java下载视频页面如下：" << endl;
	Java ja;
	ja.content();
	ja.footer();
	ja.header();
	ja.left();
	cout<<"-------------------------" << endl;
	cout << "Python下载视频页面如下：" << endl;
	Python py;
	py.content();
	py.footer();
	py.header();
	py.left();
	cout << "-------------------------" << endl;
	cout << "C++下载视频页面如下：" << endl;
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

//继承可以减少重复代码