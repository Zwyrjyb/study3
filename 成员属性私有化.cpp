#include <iostream>
#include <string>
using namespace std;


//��Ա��������Ϊ˽��
//���Կ������ݵĶ�дȨ��
//����д���Լ�����ݵ���Ч��

class Person
{
public:
	//��������
	void setName(string name)
	{
		m_name = name;

	}
	//��ȡ����
	string  getName()
	{
		return m_name;
		
	}
	// ��ȡ����
	int getAge()
	{
		//��ʼ������
		m_age = 10;
		return m_age;

	}
	void setAge(int age)
	{	
		//�����ݽ��м��
		if (age < 0 || age >150)
		{
			return;

		}
		m_age = age;

	}
private:
	//����
	string m_name;
	//����
	int m_age;
	//���ˣ�����������
	string m_lover;


};
int main()
{
	Person p1;
	p1.setName("����");
	cout << "����˽�ɶ:" << p1.getName() << endl;
	cout << "���䣺" << p1.getAge() << endl;

}