#include<iostream>
using namespace std;
class stdend
{
public:
	//����
	string id;  //ѧ��
    string name; //����
	//��Ϊ
	void print1()
	{
		cout << "ѧ��Ϊ��" << id << endl;
		cout<< "������: " <<  name << endl;
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



// �ṹ��Ĭ��Ȩ��Ϊ����  
// ��Ĭ��Ȩ��Ϊ˽��