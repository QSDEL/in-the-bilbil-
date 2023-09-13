# include<iostream>
# include<string>
using namespace std;
#define MAX 1000

void showMenu()
{
	cout << "**************************" << endl;
	cout << "*******1.添加联系人*******" << endl;
	cout << "*******2.显示联系人*******" << endl;
	cout << "*******3.删除联系人*******" << endl;
	cout << "*******4.查找联系人*******" << endl;
	cout << "*******5.修改联系人*******" << endl;
	cout << "*******6.清空联系人*******" << endl;
	cout << "*******0.退出通讯录*******" << endl;
	cout << "**************************" << endl;

}

struct linkman
{
	string name;                         //联系人结构体
	int gender;
	short age;
	string tem;   //地址
	string pho;  //电话号码
};

struct ADD
{
	struct linkman arr[MAX];
	int a_size;                          //通讯录
};

void ADDP(ADD* p)            //添加联系人
{
	if (p->a_size ==MAX)
	{
		cout<<"通讯录已满，无法添加" << endl;
		return;
	}
	else
	{
		cout<<"请输入姓名：" << endl;
		cin >> p->arr[p->a_size].name;
		cout << "请输入姓别：" << endl;
		cout<<"1-男，2--女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				p->arr[p->a_size].gender = sex;
				break;
			}
			cout << "输入有误，请重新输入："<<endl;
		}
		
		cout << "请输入年龄：" << endl;
		cin >> p->arr[p->a_size].age;
		cout << "请输入电话号码：" << endl;
		cin >> p->arr[p->a_size].pho;
		cout << "请输入地址：" << endl;
		cin >> p->arr[p->a_size].tem;
		p->a_size++;    //更新通讯录人数
		cout <<"添加成功。" << endl;
	}
}

void show(ADD* p)                //显示通讯录
{
	if (p->a_size == 0)
	{
		cout<<"通讯录为空。" << endl;
	}
	else
	{
		for (int l = 0; l < p->a_size; l++)
		{
			cout << "姓名：" << p->arr[l].name << "\t";
			cout << "性别：" <<(p->arr[l].gender == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << p->arr[l].age << "\t";
			cout << "电话号码：" << p->arr[l].pho << "\t";
			cout << "地址：" << p->arr[l].tem << endl;
		}
	}
}

int seek(ADD* p, string name)
{
	for (int i = 0; i < p->a_size; i++)
	{                                                  //查找
		if (p->arr[i].name == name)
			return i;
	 }
	return -1;
}

void delete1(ADD* p, int i)
{
	for (int j = i; j < p->a_size; j++)
	{
		p->arr[j] = p->arr[j + 1];                  //删除
	}
	p->a_size--;
}

void clear(ADD * p)
{
	p->a_size= 0;
	cout<<"通讯录已清空" << endl;
	system("pause");
	system("cls");
}

int main()
{
	ADD abs;
	abs.a_size = 0;
	while (true)
	{
		showMenu();
		int t = 0;
		cout << "请输入选择：" << t << endl;
		cin >> t;
		system("cls");
		switch (t)
		{
		case 1:
			ADDP(&abs);
			system("pause");
			system("cls");
			break;
		case 2:
			show(&abs);
			system("pause");
			system("cls");
			break;
		case 3:
		{
			cout << "请输入删除的名字：" << endl;
			string name;
			cin >> name;
			int y = 0;
			if (y = (seek(&abs, name)) == -1)
			{
				cout << "查无此人。" << endl;
				system("pause");
				system("cls");
			}
			else
			{
				delete1(&abs, y);
				cout << "删除成功。" << endl;
				system("pause");
				system("cls");
			}
		};
			break;
		case 4:
		{
			cout << "请输入查找的名字：" << endl;
			string name;
			cin >> name;
			int y = seek(&abs, name);
			if ( y == -1)
			{
				cout << "查无此人。" << endl;
				system("pause");
				system("cls");
			}
			else
			{
				cout << "名字为："<<abs.arr[y].name << endl;
				cout << "性别为：" << (abs.arr[y].gender==1?"男":"女") << endl;
				cout << "年龄为：" << abs.arr[y].age<< endl;
				cout << "电话号码为：" << abs.arr[y].pho<< endl;
				cout << "地址名字为：" << abs.arr[y].tem<< endl;
				system("pause");
				system("cls");
			}
		}
			break;
		case 5:
		{
			cout << "请输入修改的名字：" << endl;
			string name;
			cin >> name;
			int y = seek(&abs, name);
			if (y == -1)
			{
				cout << "查无此人。" << endl;
				system("pause");
				system("cls");
			}
			else
			{
				cout << "名字为：" << abs.arr[y].name << "\t";
				cout << "性别为：" << (abs.arr[y].gender == 1 ? "男" : "女") << "\t";
				cout << "年龄为：" << abs.arr[y].age << "\t";
				cout << "电话号码为：" << abs.arr[y].pho << "\t";
				cout << "地址为：" << abs.arr[y].tem << endl;
				while (true)
				{
					cout << " 1.  修改名字" << endl;
					cout << " 2.  修改性别" << endl;
					cout << " 3.  修改年龄" << endl;
					cout << " 4.  修改电话号码" << endl;
					cout << " 5.  修改地址" << endl;
					cout << " 6.   退出" << endl;
					int b = 0;
					cout << "选择修改内容:" ;
					cin >> b;
					switch (b)
					{
					case 1:
						cout << "名字为：" << abs.arr[y].name << endl << "修改为：";
						cin >> abs.arr[y].name;
						system("pause");
						system("cls");
						break;
					case 2:
						cout << "性别为：" << (abs.arr[y].gender == 1 ? "男" : "女") << endl << "修改为：1-男， 2-女";
						cin >> abs.arr[y].gender;
						system("pause");
						system("cls");
						break;
					case 3:
						cout << "年龄为：" << abs.arr[y].age << endl << "修改为：";
						cin >> abs.arr[y].age;
						system("pause");
						system("cls");
						break;
					case 4:
						cout << "电话号码为：" << abs.arr[y].pho << endl << "修改为：";
						cin >> abs.arr[y].pho;
						system("pause");
						system("cls");
						break;
					case 5:
						cout << "地址名字为：" << abs.arr[y].tem << endl << "修改为：";
						cin >> abs.arr[y].tem;
						system("pause");
						system("cls");
						break;
					default:
						cout<<"输入错误，请重新选择" << endl;
						system("pause");
						system("cls");
						break;
					case 6:
						cout<<"退出成功。" << endl;
						break;
					}
				}

				system("pause");
				system("cls");
			}
		}
			break;
		case 6:
		{
			clear(&abs);
			break;
		}
		case 0:
			cout << "退出成功，欢迎下次使用。" << endl;
			return 0;
			break;
		default:
			cout << "选择错误，请从新选择：" << endl;
			break;
		}
	}
	return 0;
}


//
//cout << "名字为：" << abs.arr[y].name << endl << "修改为：";
//cin >> abs.arr[y].name;
//cout << "性别为：" << (abs.arr[y].gender == 1 ? "男" : "女") << endl << "修改为：";
//cin >> abs.arr[y].gender;
//cout << "年龄为：" << abs.arr[y].age << endl << "修改为：";
//cin >> abs.arr[y].age;
//cout << "电话号码为：" << abs.arr[y].pho << endl << "修改为：";
//cin >> abs.arr[y].pho;
//cout << "地址名字为：" << abs.arr[y].tem << endl << "修改为：";
//cin >> abs.arr[y].tem;

/*
综合了之前所学内容；
对修改内容中，有些瑕疵，  如：退出修改内容时，直接退出通讯录了（break或者continue使用的不熟悉）。
以及内容过长（原因是选择修改，上面注释中是一起修改的内容），减少了可读性
在swich循环在某个case中语句过长并且未加括号导致  控制传输跳过的实例化  该问题让我思考了半天，  滋滋滋滋滋滋
增加了对指针的使用以及传址操作
目前为止，写的最大的一个项目，极大的增加了我的信心。（参考了一些视频，修修改改了些）
函数使用堆叠的 "128148" 字节。请考虑将一些数据移动到堆。 （该弱警告得去问老师了  滋滋滋）
*/	