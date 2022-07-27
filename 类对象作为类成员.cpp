#include<iostream>
#include <string>
using namespace std;

//类对象作为类成员



//手机类
class Phone
{
public:
	//构造函数
	Phone(string pName)
	{
		m_Pname = pName;
		cout << "手机,构造函数" << endl;
	}
	//手机名称
	string m_Pname;

};

//人 类
class Person
{	
public:
	//构造函数
	Person(string name, string pName) :m_name(name), m_phone(pName)//Phone m_phone=pName;隐式转换法

		{
		cout << "人，构造函数" << endl;
		}
	//姓名
	string m_name;
	//手机
	Phone m_phone;

};
void test01()
{
	Person p("张三", "苹果MAX");
	cout << "手机品牌" << p.m_phone.m_Pname << endl;
	cout << "名字" << p.m_name << endl;



}
int main()
{
	test01();

}