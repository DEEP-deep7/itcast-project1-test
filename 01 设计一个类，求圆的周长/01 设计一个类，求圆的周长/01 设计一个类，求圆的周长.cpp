#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

const double PI = 3.14;

//设计一个类，求圆的周长

//语法 class + 类名称
//设计一个圆类型
class Circle
{
//公共权限
public:

	//求圆的周长
	double calculateZC()
	{
		return 2 * PI * m_R;
	}

	//通过类中设计的函数 修改半径
	void setR(int r)
	{
		m_R = r;
	}

	//通过函数 获取圆的半径
	int getR()
	{
		return m_R;
	}

	//半径
	int m_R;
};

void test01()
{
	//通过圆类，创建圆 对象
	Circle c1;
	//c1.m_R = 10;
	c1.setR(10);
	cout << "圆的周长为： " << c1.calculateZC() << endl;
	cout << "圆的半径为： " << c1.getR() << endl;
}



//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
class Student
{
public:

	//成员 ：包括类中设计的函数和变量

	//属性   成员属性  成员变量
	//姓名
	string m_Name;
	//学号
	int m_Id;


	//行为   成员函数  成员方法
	//设置姓名
	void setName(string name)
	{
		m_Name = name;
	}
	//设置学号
	void setId(int id)
	{
		m_Id = id;
	}

	//显示姓名和学号
	void showStudent()
	{
		cout << "姓名： " << m_Name << " 学号： " << m_Id << endl;
	}
};

void test02()
{
	//通过类创建对象   过程称为 实例化
	Student s1;
	s1.setName("张三");
	s1.setId(1);
	cout << "姓名： " << s1.m_Name << " 学号： " << s1.m_Id << endl;

	Student s2;
	s2.setName("李四");
	s2.setId(2);
	s2.showStudent();
}

int main(){
	test02();


	system("pause");
	return EXIT_SUCCESS;
}