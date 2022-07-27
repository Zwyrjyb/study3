#include <iostream>
#include <string>
using namespace std;

/*
* c++认为万事万物都为对象，对象上有其属性和行为
* 人可以作为对象，属性有姓名，年龄身高等，行为有走路，跑步等
* 车可以作为对象,属性有轮胎方向盘等，行为有行驶，放音乐等
*
*具有相同性质的对象我们可以统称为类，人属于人类，车输入车类
*/



//设计一个圆类来求圆的周长
//周长公式:2 * pi * 半径
const double PI = 3.14;

//class代表一个类，类后面紧跟类的名称
class Circle
{
	//访问权限
public://公共权限

	//属性
	int m_r;

	//行为
	//获取圆的周长
	double calculateZC()
	{
		return 2 * PI * m_r;

	}
};
//学生类
class student {
public:
	unsigned int m_id;
	string m_name;

	void showId()
	{
		

		cout<<"Id：" << m_id << endl;
	}
	void showName()
	{
		
		cout <<"姓名:" << m_name << endl;
	}
	void showStudent()
	{
		cout << "名字:" << m_name << "id:" << m_id << endl;
	}
	};
int main()
{
	//通过圆类来创建一个具体的圆
	Circle c1;
	//给圆对象的属性进行赋值
	c1.m_r = 10;
	cout << "圆的周长为:" << c1.calculateZC() << endl;



	 //实例化student

	student s1;
	s1.m_id = 114514;
	s1.m_name = "田所浩二";
	cout << "id:" << s1.m_id << endl;
	cout << "名字:" << s1.m_name << endl;
	s1.showId();
	s1.showName();
	s1.showStudent();

	student s2;
	s2.m_id = 19198;
	s2.m_name = "田所浩三";
	s2.showStudent();

}






//类中的属性和行为都统称为成员
//属性 成员属性 成员变量
//行为 成员函数 成员方法
//属性