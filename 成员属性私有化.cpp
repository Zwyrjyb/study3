#include <iostream>
#include <string>
using namespace std;


//成员属性设置为私有
//可以控制数据的读写权限
//对于写可以检测数据的有效性

class Person
{
public:
	//设置姓名
	void setName(string name)
	{
		m_name = name;

	}
	//获取姓名
	string  getName()
	{
		return m_name;
		
	}
	// 获取年龄
	int getAge()
	{
		//初始化年龄
		m_age = 10;
		return m_age;

	}
	void setAge(int age)
	{	
		//对数据进行检测
		if (age < 0 || age >150)
		{
			return;

		}
		m_age = age;

	}
private:
	//姓名
	string m_name;
	//年龄
	int m_age;
	//情人？？？？？？
	string m_lover;


};
int main()
{
	Person p1;
	p1.setName("张三");
	cout << "这个人叫啥:" << p1.getName() << endl;
	cout << "年龄：" << p1.getAge() << endl;

}