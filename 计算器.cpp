#include <iostream>
using namespace std;

class ji {
public:

	int jisuan(string fhu) {
		if (fhu == "+") {
			return m_num1 + m_num2;
		}
		else if (fhu == "-") {
			return m_num1 - m_num2;
		}
		else if (fhu == "*") {
			return m_num1 * m_num2;
		}
	}

	int m_num1;
	int m_num2;
};

void test() {
	ji j;
	j.m_num1 = 31;
	j.m_num2 = 22;
	cout << j.m_num1 << "+" << j.m_num2 << "=" << j.jisuan("+") << endl;
	cout << j.m_num1 << "-" << j.m_num2 << "=" << j.jisuan("-") << endl;
	cout << j.m_num1 << "*" << j.m_num2 << "=" << j.jisuan("*") << endl;
}


//利用多态写计算器
class fu {
public:
	virtual int jisuanqi() {
		return 0;
	}
	int m_nm1;
	int m_nm2;
};

class jia :public fu {
	int jisuanqi() {
		return m_nm1+m_nm2;
	}
};

class jian :public fu {
	int jisuanqi() {
		return m_nm1 - m_nm2;
	}
};

class cheng :public fu {
	int jisuanqi() {
		return m_nm1 * m_nm2;
	}
};

 void test01() {
	 fu* abc = new jia;
	 abc->m_nm1 = 10;
	 abc->m_nm2 = 22;
	 cout<<abc->m_nm1<<"+"<<abc->m_nm2<<"="<<abc->jisuanqi() << endl;
	 delete abc;

	 abc = new jian;
	 abc->m_nm1 = 10;
	 abc->m_nm2 = 22;
	 cout << abc->m_nm1 << "-" << abc->m_nm2 << "=" << abc->jisuanqi() << endl;
	 delete abc;

	 abc = new cheng;
	 abc->m_nm1 = 10;
	 abc->m_nm2 = 22;
	 cout << abc->m_nm1 << "*" << abc->m_nm2 << "=" << abc->jisuanqi() << endl;
	 delete abc;

}

int main() {
	/*test();*/
	test01();
	return 0;
}

//利用多态好处：
//结构清晰
//可读性强
//对于后期的扩展以及维护性高
///////但会增加代码长度