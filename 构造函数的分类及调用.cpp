#include <iostream>
using namespace std;
/*
���ַ��෽ʽ��
��������Ϊ���вι�����޲ι���
�����ͷ�Ϊ����ͨ����Ϳ�������
���ֵ��÷�ʽ��
���ŷ�
��ʾ��
��ʽת����
*/
class Person
{
public:
	//���캯��
	Person()
	{
		cout << "person�Ĺ��캯������" << endl;

	}
	//�вι��캯��
	Person(int a)
	{
		age = a;

		cout << "person���вι��캯������" << endl;

	}
	//�������캯��
	Person( const Person &p)
	{
		//��������˵����Կ�����������
		age = p.age;
		cout << "person�Ŀ������캯������" << endl;

	}
	~Person()
	{
		cout << "person��������������" << endl;

	}


	int age;

};

//����

void Text01()
{
	//1.
	////����Ϊ���ŷ�
	//Person p1;//Ĭ�Ϲ��캯���Ĺ���
	//Person p2(10);//�вι��캯���ĵ���
	//Person p3(p2);//�������캯���ĵ���
	//cout << "p2�е�age Ϊ��" << p2.age << endl;
	//cout << "p3�е�age Ϊ��" << p3.age << endl;
	 

	//2.
	////����Ϊ��ʾ��
	//Person p1;
	//Person p2 = Person(10);//�вι���
	//Person p3 = Person(p2);//��������

	//Person(10);//�������� ��ǰ�н�����,ϵͳ���Զ�������������

	//ע������:��Ҫ���ÿ������캯�� ��ʼ���������� ����������Ϊ Person(p3); �ȼ��� Perosn p3 ;
		


	//3.
	//����Ϊ��ʽת����
	Person p1 = 10;//�вι��� �൱��person p1 = person (10);
	Person p2 = p1;//��������



	
	
}
int main()

{
	Text01();
	

}