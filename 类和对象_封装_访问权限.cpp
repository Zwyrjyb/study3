#include<iostream>
#include <string>
using namespace std;
//����Ȩ��public	�����ⶼ���Է���
//����Ȩ��protected		���ڿ��Է��ʣ����ⲻ�ɷ���,����Ҳ���Է��ʸ����еı�������
//˽��Ȩ��private		���ڿ��Է��ʣ����ⲻ�ɷ��ʣ����Ӳ����Է��ʸ����е�˽������

class Person
{	
	//����Ȩ��
	public:
		string m_name;
	//����Ȩ��
protected:
	string m_car;
	//˽��Ȩ��
private:
	int m_password;//���п�����

	void function()
	{
		m_name = "�����ƶ�";
		m_car = "����������";
		m_password = 114514;

	}



};
int main()
{	
	//ʵ����
	Person p1;
	p1.m_name = "�����ƶ�";
	//p1.m_car = "����������";����Ȩ�������ⲻ�ɷ���,private˽��Ȩ��ͬ��
	
}