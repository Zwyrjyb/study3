#include<iostream>
#include <string>
using namespace std;

//�������Ϊ���Ա



//�ֻ���
class Phone
{
public:
	//���캯��
	Phone(string pName)
	{
		m_Pname = pName;
		cout << "�ֻ�,���캯��" << endl;
	}
	//�ֻ�����
	string m_Pname;

};

//�� ��
class Person
{	
public:
	//���캯��
	Person(string name, string pName) :m_name(name), m_phone(pName)//Phone m_phone=pName;��ʽת����

		{
		cout << "�ˣ����캯��" << endl;
		}
	//����
	string m_name;
	//�ֻ�
	Phone m_phone;

};
void test01()
{
	Person p("����", "ƻ��MAX");
	cout << "�ֻ�Ʒ��" << p.m_phone.m_Pname << endl;
	cout << "����" << p.m_name << endl;



}
int main()
{
	test01();

}