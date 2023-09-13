# include<iostream>
# include<string>
using namespace std;
#define MAX 1000

void showMenu()
{
	cout << "**************************" << endl;
	cout << "*******1.�����ϵ��*******" << endl;
	cout << "*******2.��ʾ��ϵ��*******" << endl;
	cout << "*******3.ɾ����ϵ��*******" << endl;
	cout << "*******4.������ϵ��*******" << endl;
	cout << "*******5.�޸���ϵ��*******" << endl;
	cout << "*******6.�����ϵ��*******" << endl;
	cout << "*******0.�˳�ͨѶ¼*******" << endl;
	cout << "**************************" << endl;

}

struct linkman
{
	string name;                         //��ϵ�˽ṹ��
	int gender;
	short age;
	string tem;   //��ַ
	string pho;  //�绰����
};

struct ADD
{
	struct linkman arr[MAX];
	int a_size;                          //ͨѶ¼
};

void ADDP(ADD* p)            //�����ϵ��
{
	if (p->a_size ==MAX)
	{
		cout<<"ͨѶ¼�������޷����" << endl;
		return;
	}
	else
	{
		cout<<"������������" << endl;
		cin >> p->arr[p->a_size].name;
		cout << "�������ձ�" << endl;
		cout<<"1-�У�2--Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				p->arr[p->a_size].gender = sex;
				break;
			}
			cout << "�����������������룺"<<endl;
		}
		
		cout << "���������䣺" << endl;
		cin >> p->arr[p->a_size].age;
		cout << "������绰���룺" << endl;
		cin >> p->arr[p->a_size].pho;
		cout << "�������ַ��" << endl;
		cin >> p->arr[p->a_size].tem;
		p->a_size++;    //����ͨѶ¼����
		cout <<"��ӳɹ���" << endl;
	}
}

void show(ADD* p)                //��ʾͨѶ¼
{
	if (p->a_size == 0)
	{
		cout<<"ͨѶ¼Ϊ�ա�" << endl;
	}
	else
	{
		for (int l = 0; l < p->a_size; l++)
		{
			cout << "������" << p->arr[l].name << "\t";
			cout << "�Ա�" <<(p->arr[l].gender == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << p->arr[l].age << "\t";
			cout << "�绰���룺" << p->arr[l].pho << "\t";
			cout << "��ַ��" << p->arr[l].tem << endl;
		}
	}
}

int seek(ADD* p, string name)
{
	for (int i = 0; i < p->a_size; i++)
	{                                                  //����
		if (p->arr[i].name == name)
			return i;
	 }
	return -1;
}

void delete1(ADD* p, int i)
{
	for (int j = i; j < p->a_size; j++)
	{
		p->arr[j] = p->arr[j + 1];                  //ɾ��
	}
	p->a_size--;
}

void clear(ADD * p)
{
	p->a_size= 0;
	cout<<"ͨѶ¼�����" << endl;
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
		cout << "������ѡ��" << t << endl;
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
			cout << "������ɾ�������֣�" << endl;
			string name;
			cin >> name;
			int y = 0;
			if (y = (seek(&abs, name)) == -1)
			{
				cout << "���޴��ˡ�" << endl;
				system("pause");
				system("cls");
			}
			else
			{
				delete1(&abs, y);
				cout << "ɾ���ɹ���" << endl;
				system("pause");
				system("cls");
			}
		};
			break;
		case 4:
		{
			cout << "��������ҵ����֣�" << endl;
			string name;
			cin >> name;
			int y = seek(&abs, name);
			if ( y == -1)
			{
				cout << "���޴��ˡ�" << endl;
				system("pause");
				system("cls");
			}
			else
			{
				cout << "����Ϊ��"<<abs.arr[y].name << endl;
				cout << "�Ա�Ϊ��" << (abs.arr[y].gender==1?"��":"Ů") << endl;
				cout << "����Ϊ��" << abs.arr[y].age<< endl;
				cout << "�绰����Ϊ��" << abs.arr[y].pho<< endl;
				cout << "��ַ����Ϊ��" << abs.arr[y].tem<< endl;
				system("pause");
				system("cls");
			}
		}
			break;
		case 5:
		{
			cout << "�������޸ĵ����֣�" << endl;
			string name;
			cin >> name;
			int y = seek(&abs, name);
			if (y == -1)
			{
				cout << "���޴��ˡ�" << endl;
				system("pause");
				system("cls");
			}
			else
			{
				cout << "����Ϊ��" << abs.arr[y].name << "\t";
				cout << "�Ա�Ϊ��" << (abs.arr[y].gender == 1 ? "��" : "Ů") << "\t";
				cout << "����Ϊ��" << abs.arr[y].age << "\t";
				cout << "�绰����Ϊ��" << abs.arr[y].pho << "\t";
				cout << "��ַΪ��" << abs.arr[y].tem << endl;
				while (true)
				{
					cout << " 1.  �޸�����" << endl;
					cout << " 2.  �޸��Ա�" << endl;
					cout << " 3.  �޸�����" << endl;
					cout << " 4.  �޸ĵ绰����" << endl;
					cout << " 5.  �޸ĵ�ַ" << endl;
					cout << " 6.   �˳�" << endl;
					int b = 0;
					cout << "ѡ���޸�����:" ;
					cin >> b;
					switch (b)
					{
					case 1:
						cout << "����Ϊ��" << abs.arr[y].name << endl << "�޸�Ϊ��";
						cin >> abs.arr[y].name;
						system("pause");
						system("cls");
						break;
					case 2:
						cout << "�Ա�Ϊ��" << (abs.arr[y].gender == 1 ? "��" : "Ů") << endl << "�޸�Ϊ��1-�У� 2-Ů";
						cin >> abs.arr[y].gender;
						system("pause");
						system("cls");
						break;
					case 3:
						cout << "����Ϊ��" << abs.arr[y].age << endl << "�޸�Ϊ��";
						cin >> abs.arr[y].age;
						system("pause");
						system("cls");
						break;
					case 4:
						cout << "�绰����Ϊ��" << abs.arr[y].pho << endl << "�޸�Ϊ��";
						cin >> abs.arr[y].pho;
						system("pause");
						system("cls");
						break;
					case 5:
						cout << "��ַ����Ϊ��" << abs.arr[y].tem << endl << "�޸�Ϊ��";
						cin >> abs.arr[y].tem;
						system("pause");
						system("cls");
						break;
					default:
						cout<<"�������������ѡ��" << endl;
						system("pause");
						system("cls");
						break;
					case 6:
						cout<<"�˳��ɹ���" << endl;
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
			cout << "�˳��ɹ�����ӭ�´�ʹ�á�" << endl;
			return 0;
			break;
		default:
			cout << "ѡ����������ѡ��" << endl;
			break;
		}
	}
	return 0;
}


//
//cout << "����Ϊ��" << abs.arr[y].name << endl << "�޸�Ϊ��";
//cin >> abs.arr[y].name;
//cout << "�Ա�Ϊ��" << (abs.arr[y].gender == 1 ? "��" : "Ů") << endl << "�޸�Ϊ��";
//cin >> abs.arr[y].gender;
//cout << "����Ϊ��" << abs.arr[y].age << endl << "�޸�Ϊ��";
//cin >> abs.arr[y].age;
//cout << "�绰����Ϊ��" << abs.arr[y].pho << endl << "�޸�Ϊ��";
//cin >> abs.arr[y].pho;
//cout << "��ַ����Ϊ��" << abs.arr[y].tem << endl << "�޸�Ϊ��";
//cin >> abs.arr[y].tem;

/*
�ۺ���֮ǰ��ѧ���ݣ�
���޸������У���Щ覴ã�  �磺�˳��޸�����ʱ��ֱ���˳�ͨѶ¼�ˣ�break����continueʹ�õĲ���Ϥ����
�Լ����ݹ�����ԭ����ѡ���޸ģ�����ע������һ���޸ĵ����ݣ��������˿ɶ���
��swichѭ����ĳ��case������������δ�����ŵ���  ���ƴ���������ʵ����  ����������˼���˰��죬  ������������
�����˶�ָ���ʹ���Լ���ַ����
ĿǰΪֹ��д������һ����Ŀ��������������ҵ����ġ����ο���һЩ��Ƶ�����޸ĸ���Щ��
����ʹ�öѵ��� "128148" �ֽڡ��뿼�ǽ�һЩ�����ƶ����ѡ� �����������ȥ����ʦ��  �����̣�
*/	