#include<iostream>
using namespace std;
#include<string>
//���һ������Ӣ�۽ṹ�庯�����������������䣬�Ա�
//����ð�����򣬰����������򣬲������

struct hero
{
	string name;
	int age;
    string gender;
};

void swap1(struct hero p[], int x)
{
	for (int y = 0; y < x-1; y++)
	{                                                   //����ð������
		for (int j = 0; j < x-y-1; j++)
		{
			if (p[j].age > p[j+1].age)
			{
				struct hero t = p[j];
				p[j] = p[j+1];
				p[j+1] = t;
			}
		}
	}
}
 
void print1(struct hero p[], int x)
{
	for (int y = 0; y < x; y++)
	{
		cout << "���֣�" << p[y].name << "        ���䣺" << p[y].age << "       �Ա�" << p[y].gender << endl;
	}
}

int main()
{
	struct hero arr[5] = 
	{ {"����",15,"��"},
	  {"����",55,"Ů"},
	  {"����",65,"��"},
	  {"����",44,"��"},
	  {"����",33,"Ů"}
	};
	int len = sizeof(arr) / sizeof(arr[0]);
	swap1(arr,len);
	print1(arr, len);
	return 0;
}

//�����һ��ѧ�� ��ʦ���ݣ�������
//�ں����Ĳ����ϼ����˳��ȣ�������ȥ�����ĸ��ģ�����б䶯��
//�����˶�ð�������ӡ��