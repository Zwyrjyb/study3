#include <iostream>
using namespace std;

class Cube
{
public:
	//������������
	unsigned int getV()
	{
		return m_H * m_L * m_W;

	}
	//������������
	unsigned int getS()
	{
		return 2 * m_H * m_L + 2*m_L * m_W + 2*m_H * m_W;

	}
	//���ó����
	void setH(unsigned int a)
	{
		m_H = a;

	}
	void setL(unsigned int a)
	{
		m_L = a;

	}
	void setW(unsigned int a)
	{
		m_W = a;

	}
	//���س����
	unsigned int getH()
	{
		return m_H;
	}

	unsigned int getL()
	{
		return m_L;
	}

	unsigned int getW()
	{
		return m_W;
	}
	void check() {
		if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW())
		{
			cout << "ȷʵһģһ��" << endl;
		}
		else
		{
			cout << "��һ��" << endl;

		}
	}

	//�����嶨��
private:
	unsigned int m_H;
	unsigned int m_L;
	unsigned int m_W;

}c1,c2;
//ȫ�ֺ����ж����������
void check()
{
	if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW())
	{
		cout << "ȷʵһģһ��" << endl;
	}
	else
	{
		cout << "��һ��"<<endl;

	}
}
int main()
{	
	//��ֵ
	
	
	c1.setH(114514);
	c1.setW(114514);
	c1.setL(114514);

	
	c2.setH(114514);
	c2.setW(114514);
	c2.setL(114514);
	
	check();
	c1.check();


}