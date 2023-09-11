//学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下
//设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存
//放5名学生的数组作为成员学生的成员有姓名、考试分数，创建数组存放3
//名老师，通过函数给每个老师及所带的学生赋值最终打印出老师数据以及
//老师所带的学生数据。

#include<iostream>
using namespace std;
#include<string>

struct student 
{
	string name1[15];          //定义学生的结构体，，在老师结构体中用到
	int soc[15];
}s1,s2,s3,s4,s5;

struct teacher 
{
	string name[3];             //定义老师的结构体
	struct student arr1[5];
}t1;

void scan1(struct teacher * p)
{
	for (int i = 0; i <3 ; i++)
	{                                                                             
		//输入老师名字，学生名字和学生成绩的函数

		cout<< "请输入第"<<i+1<<"位老师名字:"<< p->name[i] ;
		cin >> p->name[i];
		cout << endl;
		for (int j = 0; j <5; j++)
		{
			cout << "请输入第" << i*5+j+1<< "位学生名字:" << p->arr1->name1[i*5+j]; 
			cin >> p->arr1->name1[i*5+j];
			cout << endl;
			cout<< "以及成绩:" << p->arr1->soc[i*5+j];
			cin >> p->arr1->soc[i*5+j];
			cout << endl;
		};
	};
}
void print1(const struct teacher p)
{
	//打印输入的数据的函数

	for (int i = 0; i < 3; i++)
	{
		cout << "第" << i + 1 << "老师叫：" <<* p.name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "他的第" << j + 1 << "位学生叫：" << p.arr1->name1[i * 5 + j] << "  成绩是：" << p.arr1->soc[i * 5 + j] << endl;
		}
	}
}

int main()
{
	struct teacher arr2[3];
	scan1(&t1);
	system("cls");         
	print1(t1);
	return 0;
}



//自我评价：在开始写时，还是有些构思的，但过程中还是有些程序问题（其中第15行显示若警告未初始化变量student：：soc。未搞懂什么问题）
//在输入数据函数中，地址的运用还是有些不熟悉，但还是更改成功，虽然有些不美观，简洁，易读。还是有待提高。滋滋滋滋滋滋
//打印函数只用到了  值传递较为简单普通，平淡。
//总体上来说，第一次写c++，自我感觉良好还是得多多练习。  //只思考，还是得上手。