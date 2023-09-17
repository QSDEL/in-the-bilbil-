#include<iostream>
using namespace std;
class stdend
{
public:
	//属性
	string id;  //学号
    string name; //名字
	//行为
	void print1()
	{
		cout << "学号为：" << id << endl;
		cout<< "名字是: " <<  name << endl;
	}
};
int main()
{
	stdend s1;
	s1.id = "234145";
	s1.name = "yy";
	s1.print1();
	return 0;
 }



// 结构体默认权限为公共  
// 类默认权限为私有