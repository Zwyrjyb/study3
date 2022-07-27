#include <iostream>
using namespace std;
/*
两种分类方式：
按参数分为：有参构造和无参构造
按类型分为：普通构造和拷贝构造
三种调用方式：
括号法
显示法
隐式转换法
*/
class Person
{
public:
	//构造函数
	Person()
	{
		cout << "person的构造函数调用" << endl;

	}
	//有参构造函数
	Person(int a)
	{
		age = a;

		cout << "person的有参构造函数调用" << endl;

	}
	//拷贝构造函数
	Person( const Person &p)
	{
		//将传入的人的属性拷贝到我身上
		age = p.age;
		cout << "person的拷贝构造函数调用" << endl;

	}
	~Person()
	{
		cout << "person的析构函数调用" << endl;

	}


	int age;

};

//调用

void Text01()
{
	//1.
	////以下为括号法
	//Person p1;//默认构造函数的构造
	//Person p2(10);//有参构造函数的调用
	//Person p3(p2);//拷贝构造函数的调用
	//cout << "p2中的age 为：" << p2.age << endl;
	//cout << "p3中的age 为：" << p3.age << endl;
	 

	//2.
	////以下为显示法
	//Person p1;
	//Person p2 = Person(10);//有参构造
	//Person p3 = Person(p2);//拷贝构造

	//Person(10);//匿名对象 当前行结束后,系统会自动回收匿名对象

	//注意事项:不要利用拷贝构造函数 初始化匿名对象 编译器会认为 Person(p3); 等价于 Perosn p3 ;
		


	//3.
	//以下为隐式转换法
	Person p1 = 10;//有参构造 相当于person p1 = person (10);
	Person p2 = p1;//拷贝构造



	
	
}
int main()

{
	Text01();
	

}