#include <iostream>
using namespace std;
//һ���������ٰ�����������:
//���캯��(��ʵ��),��������(��ʵ��),�������캯����ֵ������

//���캯���ĵ��ù���
//����û��������вι��캯������c++���ṩĬ�Ϲ��캯��
//����û������˿������캯������c++���ṩ�������캯��
class Person
{
public:
	Person()
	{
		cout << "Ĭ�Ϲ��캯���ĵ���" << endl;

	}
	Person(int age)
	{
		cout << "�вι��캯���ĵ���" << endl;
		m_age = age;

	}
	//Person(const Person& p)
	//{
	//	cout << "�������캯���ĵ���" << endl;
	//	m_age = p.m_age;

	//}

	~Person()
	{
		cout << "���������ĵ���" << endl;
	}
	int m_age;

};
void test01()
{
	Person p;
	p.m_age = 18;
	Person p2(p);
	cout << "p2������Ϊ��" << p2.m_age << endl;//ע�͵��û�д�Ŀ������캯����,�������ṩ�Ĺ��캯��Ҳͬ�������ֵ����

}


//����û��������вι��캯������c++���ṩĬ�Ϲ��캯��
void test02()
{
	Person p(10);
	cout <<"p������Ϊ:" << p.m_age << endl;


}


int main()
{
	//test01();
	test02();


}