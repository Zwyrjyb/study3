#include <iostream>
using namespace std;
//一个类中至少包含三个函数:
//构造函数(空实现),析构函数(空实现),拷贝构造函数（值拷贝）

//构造函数的调用规则
//如果用户定义了有参构造函数，则c++不提供默认构造函数
//如果用户定义了拷贝构造函数，则c++不提供其他构造函数
class Person
{
public:
	Person()
	{
		cout << "默认构造函数的调用" << endl;

	}
	Person(int age)
	{
		cout << "有参构造函数的调用" << endl;
		m_age = age;

	}
	//Person(const Person& p)
	//{
	//	cout << "拷贝构造函数的调用" << endl;
	//	m_age = p.m_age;

	//}

	~Person()
	{
		cout << "析构函数的调用" << endl;
	}
	int m_age;

};
void test01()
{
	Person p;
	p.m_age = 18;
	Person p2(p);
	cout << "p2的年龄为：" << p2.m_age << endl;//注释掉用户写的拷贝构造函数后,编译器提供的构造函数也同样会进行值拷贝

}


//如果用户定义了有参构造函数，则c++不提供默认构造函数
void test02()
{
	Person p(10);
	cout <<"p的年龄为:" << p.m_age << endl;


}


int main()
{
	//test01();
	test02();


}