#include <iostream>
using namespace std;
class Person
{
public:
	//��ͳ���캯������ֵ
	/*Person(int a,int b,int c )
	{
		m_a = a;
		m_b = b;
		m_c = c;

	}*/

	//��ʼ���б��ʼ������

	/*Person() :m_a(10), m_b(10),m_c(10)
	{

	}*/
	//����
	Person(int a, int b, int c) :m_a(a), m_b(b), m_c(c)
	{

	}
		


	//��������
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
