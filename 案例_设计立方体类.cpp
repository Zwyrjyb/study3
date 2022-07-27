#include <iostream>
using namespace std;

class Cube
{
public:
	//求立方体的体积
	unsigned int getV()
	{
		return m_H * m_L * m_W;

	}
	//求立方体的面积
	unsigned int getS()
	{
		return 2 * m_H * m_L + 2*m_L * m_W + 2*m_H * m_W;

	}
	//设置长宽高
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
	//返回长宽高
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
			cout << "确实一模一样" << endl;
		}
		else
		{
			cout << "不一样" << endl;

		}
	}

	//立方体定义
private:
	unsigned int m_H;
	unsigned int m_L;
	unsigned int m_W;

}c1,c2;
//全局函数判断立方体相等
void check()
{
	if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW())
	{
		cout << "确实一模一样" << endl;
	}
	else
	{
		cout << "不一样"<<endl;

	}
}
int main()
{	
	//赋值
	
	
	c1.setH(114514);
	c1.setW(114514);
	c1.setL(114514);

	
	c2.setH(114514);
	c2.setW(114514);
	c2.setL(114514);
	
	check();
	c1.check();


}