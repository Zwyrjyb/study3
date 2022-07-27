#include <iostream>
using namespace std;
//浅拷贝:简单的赋值拷贝操作
//深拷贝:在堆区重新申请空间进行拷贝操作
class Person
{
public:

	Person()
	{
		cout << "默认构造函数的调用" << endl;

	}
	Person(int age,int height,int weight )
	{
		m_height=new int(height);
		m_weight = new int(weight);
		cout << "有参构造函数的调用" << endl;
		m_age = age;

	}
	//自己写一个拷贝构造函数来解决浅拷贝的问题
	Person(const Person & p)
	{
		cout << "拷贝构造函数的调用" << endl;
		//这是编译器默认代码
		/*m_age = p.m_age;
		 m_height = p.m_height;*/

		m_age = p.m_age;

		//深拷贝
		m_height = new int(*p.m_height);
		m_weight = new int(*p.m_weight);
		

	}
	~Person()
	{	
		//析构代码通常用来删除堆区的数据
		if (m_height != NULL)
		{
			delete m_height;
			delete m_weight;
				m_height = NULL;
				m_weight = NULL;


		}
		cout << "析构函数的调用" << endl;

	}
	int m_age;
	int* m_height;
	int* m_weight;


};

void test01()
{
	Person p1(18,160,114514);
	cout << "年龄为" << p1.m_age << endl;
	cout << "身高为" << *p1.m_height << endl;
	cout << "体重为" << *p1.m_weight << endl;

	Person p2(p1);//浅拷贝会导致堆区内存二次释放，先定义的p1会后释放,p1中的*m_height已经被释放了一次,由于p2使用了浅拷贝将p2中 *m_height内存地址全部释放，所以会产生二次释放的问题
	cout << "年龄为" << p2.m_age << endl;
	cout << "身高为" << *p2.m_height << endl;
	cout << "体重为" << *p2.m_weight << endl;

}
int main() 
{
	test01();

}