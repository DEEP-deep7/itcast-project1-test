#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

class Person
{
public:
	//设置姓名
	void setName(string name)
	{
		m_Name = name;
	}
	//获取姓名
	string getName()
	{
		return m_Name;
	}

	//获取年龄
	int getAge()
	{
		return m_Age;
	}
	//设置年龄
	void setAge(int age)
	{
		if (age <0 || age > 150)
		{
			cout << "你这个老妖精" << endl;
			return;
		}
		m_Age = age;
	}

	//设置情人
	void setLover(string lover)
	{
		m_Lover = lover;
	}

private:
	//姓名  可读可写
	string m_Name;
	//年龄   只读  改：  可读  可写 （写年龄 必须控制在0 ~ 150之间）
	int m_Age = 18;
	//情人   只写
	string m_Lover;
};

//将成员属性设置为私有好处：
//可以自己控制读写权限
//对于写权限，可以验证数据的有效性
void test01()
{
	Person p1;
	p1.setName("张三");
	cout << "姓名： " << p1.getName() << endl;


	p1.setAge(100);
	cout << "年龄： " << p1.getAge() << endl;

	p1.setLover("苍井女士");
	//cout << "情人是： " << p1.m_Lover << endl;
}

int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}