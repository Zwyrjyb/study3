#include <iostream>
#include <string>
using namespace std;

/*
* c++��Ϊ�������ﶼΪ���󣬶������������Ժ���Ϊ
* �˿�����Ϊ����������������������ߵȣ���Ϊ����·���ܲ���
* ��������Ϊ����,��������̥�����̵ȣ���Ϊ����ʻ�������ֵ�
*
*������ͬ���ʵĶ������ǿ���ͳ��Ϊ�࣬���������࣬�����복��
*/



//���һ��Բ������Բ���ܳ�
//�ܳ���ʽ:2 * pi * �뾶
const double PI = 3.14;

//class����һ���࣬���������������
class Circle
{
	//����Ȩ��
public://����Ȩ��

	//����
	int m_r;

	//��Ϊ
	//��ȡԲ���ܳ�
	double calculateZC()
	{
		return 2 * PI * m_r;

	}
};
//ѧ����
class student {
public:
	unsigned int m_id;
	string m_name;

	void showId()
	{
		

		cout<<"Id��" << m_id << endl;
	}
	void showName()
	{
		
		cout <<"����:" << m_name << endl;
	}
	void showStudent()
	{
		cout << "����:" << m_name << "id:" << m_id << endl;
	}
	};
int main()
{
	//ͨ��Բ��������һ�������Բ
	Circle c1;
	//��Բ��������Խ��и�ֵ
	c1.m_r = 10;
	cout << "Բ���ܳ�Ϊ:" << c1.calculateZC() << endl;



	 //ʵ����student

	student s1;
	s1.m_id = 114514;
	s1.m_name = "�����ƶ�";
	cout << "id:" << s1.m_id << endl;
	cout << "����:" << s1.m_name << endl;
	s1.showId();
	s1.showName();
	s1.showStudent();

	student s2;
	s2.m_id = 19198;
	s2.m_name = "��������";
	s2.showStudent();

}






//���е����Ժ���Ϊ��ͳ��Ϊ��Ա
//���� ��Ա���� ��Ա����
//��Ϊ ��Ա���� ��Ա����
//����