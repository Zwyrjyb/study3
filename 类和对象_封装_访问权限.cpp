#include<iostream>
#include <string>
using namespace std;
//公共权限public	类内外都可以访问
//保护权限protected		类内可以访问，类外不可访问,儿子也可以访问父亲中的保护内容
//私有权限private		类内可以访问，类外不可访问，儿子不可以访问父亲中的私有内容

class Person
{	
	//公共权限
	public:
		string m_name;
	//保护权限
protected:
	string m_car;
	//私有权限
private:
	int m_password;//银行卡密码

	void function()
	{
		m_name = "田所浩二";
		m_car = "沼气动力车";
		m_password = 114514;

	}



};
int main()
{	
	//实例化
	Person p1;
	p1.m_name = "田所浩二";
	//p1.m_car = "沼气动力车";保护权限在类外不可访问,private私有权限同理
	
}