#include<iostream>
using namespace std;
#include<string>
//设计一个关于英雄结构体函数，包括姓名，年龄，性别。
//利用冒泡排序，按照年龄升序，并输出。

struct hero
{
	string name;
	int age;
    string gender;
};

void swap1(struct hero p[], int x)
{
	for (int y = 0; y < x-1; y++)
	{                                                   //利用冒泡排序
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
		cout << "名字：" << p[y].name << "        年龄：" << p[y].age << "       性别：" << p[y].gender << endl;
	}
}

int main()
{
	struct hero arr[5] = 
	{ {"张三",15,"男"},
	  {"李四",55,"女"},
	  {"王五",65,"男"},
	  {"王麻",44,"男"},
	  {"晋二",33,"女"}
	};
	int len = sizeof(arr) / sizeof(arr[0]);
	swap1(arr,len);
	print1(arr, len);
	return 0;
}

//相较上一个学生 老师内容，较容易
//在函数的参数上加入了长度，更容易去后续的更改（如果有变动）
//增加了对冒泡排序的印象