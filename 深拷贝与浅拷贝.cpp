#include <iostream>
using namespace std;
//ǳ����:�򵥵ĸ�ֵ��������
//���:�ڶ�����������ռ���п�������
class Person
{
public:

	Person()
	{
		cout << "Ĭ�Ϲ��캯���ĵ���" << endl;

	}
	Person(int age,int height,int weight )
	{
		m_height=new int(height);
		m_weight = new int(weight);
		cout << "�вι��캯���ĵ���" << endl;
		m_age = age;

	}
	//�Լ�дһ���������캯�������ǳ����������
	Person(const Person & p)
	{
		cout << "�������캯���ĵ���" << endl;
		//���Ǳ�����Ĭ�ϴ���
		/*m_age = p.m_age;
		 m_height = p.m_height;*/

		m_age = p.m_age;

		//���
		m_height = new int(*p.m_height);
		m_weight = new int(*p.m_weight);
		

	}
	~Person()
	{	
		//��������ͨ������ɾ������������
		if (m_height != NULL)
		{
			delete m_height;
			delete m_weight;
				m_height = NULL;
				m_weight = NULL;


		}
		cout << "���������ĵ���" << endl;

	}
	int m_age;
	int* m_height;
	int* m_weight;


};

void test01()
{
	Person p1(18,160,114514);
	cout << "����Ϊ" << p1.m_age << endl;
	cout << "���Ϊ" << *p1.m_height << endl;
	cout << "����Ϊ" << *p1.m_weight << endl;

	Person p2(p1);//ǳ�����ᵼ�¶����ڴ�����ͷţ��ȶ����p1����ͷ�,p1�е�*m_height�Ѿ����ͷ���һ��,����p2ʹ����ǳ������p2�� *m_height�ڴ��ַȫ���ͷţ����Ի���������ͷŵ�����
	cout << "����Ϊ" << p2.m_age << endl;
	cout << "���Ϊ" << *p2.m_height << endl;
	cout << "����Ϊ" << *p2.m_weight << endl;

}
int main() 
{
	test01();

}