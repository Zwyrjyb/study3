#include <iostream>
using namespace std;

//struct权限默认为公有
//class权限默认为私有
struct s1 {
	int m_id;

};
class c1 {
	int m_id;

};
int main()
{
	s1 s1;
	s1.m_id = 114514;
	//c1.m_id = 114514;不符合语法

}