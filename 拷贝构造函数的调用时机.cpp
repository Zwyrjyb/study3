#include <iostream>
using namespace std;
//C++�п������캯������ʱ��ͨ�����������
//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//2��ֵ���ݵķ�ʽ������������ֵ
//3����ֵ��ʽ���ؾֲ�����
class Person
{
public:
	Person()
	{
		cout << "���캯���ĵ���" << endl;

	}
	Person(int age)
	{
		m_age = age;
		cout << "�вι��캯���ĵ���" << endl;


	}
	Person(const Person & p )
	{
		cout << "�������캯���ĵ���" << endl;
		m_age = p.m_age;

	}
	~Person()
	{
		cout << "���������ĵ���" << endl;
		
	}





	
	int m_age;

};


//1,ʹ���Ѿ�������Ķ����ʼ���¶���
void test01()
{
	
	Person p1(20);
	Person p2(p1);

	cout << "p2������Ϊ:" << p2.m_age << endl;


}


//2,ֵ���ݵķ�ʽ������������ֵ
void dowork1(Person p)
{

}
void test02()
{
	Person p;
	dowork1(p);//ֵ���ݻ´���࣬�ᰴ��p���󿽱��µĶ�����˻���ÿ������캯��



}
//3, ֵ��ʽ���ؾֲ�����
Person dowork2()
{
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;


}
void test03()
{
	Person p = dowork2();//�μ���ʾ�����⽫����ÿ������캯��
	cout << (int*)&p << endl;
}


int main()
{
	//test01();
	//test02();
	test03();



}