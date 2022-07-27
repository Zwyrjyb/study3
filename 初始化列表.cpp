#include <iostream>
using namespace std;
class Person
{
public:
	//传统构造函数赋初值
	/*Person(int a,int b,int c )
	{
		m_a = a;
		m_b = b;
		m_c = c;

	}*/

	//初始化列表初始化属性

	/*Person() :m_a(10), m_b(10),m_c(10)
	{

	}*/
	//或者
	Person(int a, int b, int c) :m_a(a), m_b(b), m_c(c)
	{

	}
		


	//析构函数
	~Person()
	{

	}
	int m_a;
	int m_b;
	int m_c;

};
void test01()
{
	//Person p(10, 20, 30);

	//Person p;

	Person p(10, 20, 30);


	cout << "m_a" << p.m_a << endl;
	cout << "m_b" << p.m_b << endl;
	cout << "m_c" << p.m_c << endl;


}


int main()
{
	test01();

}
