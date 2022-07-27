#include <iostream>
using namespace std;
//C++中拷贝构造函数调用时机通常有三种情况
//1·使用一个已经创建完毕的对象来初始化一个新对象
//2·值传递的方式给函数参数传值
//3·以值方式返回局部对象
class Person
{
public:
	Person()
	{
		cout << "构造函数的调用" << endl;

	}
	Person(int age)
	{
		m_age = age;
		cout << "有参构造函数的调用" << endl;


	}
	Person(const Person & p )
	{
		cout << "拷贝构造函数的调用" << endl;
		m_age = p.m_age;

	}
	~Person()
	{
		cout << "析构函数的调用" << endl;
		
	}





	
	int m_age;

};


//1,使用已经创建完的对象初始化新对象
void test01()
{
	
	Person p1(20);
	Person p2(p1);

	cout << "p2的年龄为:" << p2.m_age << endl;


}


//2,值传递的方式给函数参数传值
void dowork1(Person p)
{

}
void test02()
{
	Person p;
	dowork1(p);//值传递会拷贝类，会按照p对象拷贝新的对象，因此会调用拷贝构造函数



}
//3, 值方式返回局部对象
Person dowork2()
{
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;


}
void test03()
{
	Person p = dowork2();//参见显示法，这将会调用拷贝构造函数
	cout << (int*)&p << endl;
}


int main()
{
	//test01();
	//test02();
	test03();



}