////设计立方体
////求立方体的面积和体积
////分别用全局函数和成员变量判断两个立方体是否相等
//
//#include<iostream>
//using namespace std;
//
//int mianji(int c,int k,int g)
//{
//	return (2 * c * k + 2 * c * g + 2 * g * k);
//}
//
//int tiji(int c, int k, int g)
//{
//	return c * k * g;
//}
//
//class Cube
//{
//public:
//	//属性
//	int m_L;
//	int m_W;
//	int m_H;
//	//行为
//	int square()
//	{
//		return (2* m_L* m_W+ 2 * m_L * m_H+2 * m_H * m_W) ;
//	}
//	int volume()
//	{
//		return ( m_H * m_L * m_W );
//	}
//};
//
//int main()
//{
//	int gao = 22;
//	int kuan = 12;
//	int chang = 34;
//	Cube p;
//	p.m_H = 11;
//	p.m_W = 34;
//	p.m_L = 22;
//	if (mianji(gao, kuan, chang) == p.square())
//	{
//		cout << "面积一样" << endl;
//	}
//	else
//	{
//		cout << "面积不一样" << endl;
//	}
//	if (tiji(gao, kuan, chang ) == p.volume())
//	{
//		cout << "体积一样" << endl;
//	}
//	else
//	{
//		cout << "体积不一样" << endl;
//	}
//	return 0;
//}


//简单类的使用
//这里没有自主输入长，宽，高是一个缺点（但也简单实现）（cin>>）

