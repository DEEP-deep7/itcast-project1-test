#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//设计人结构体
class Person
{
public:
	char m_Name[64]; //姓名

	int m_Age; //年龄

	//人吃饭行为
	void personEat()
	{
		printf("%s在吃人饭\n", m_Name);
	}
};

//狗结构体
struct Dog
{
	
	char m_Name[64]; //姓名

	int m_Age; //年龄


	//狗吃饭行为
	void dogEat()
	{
		printf("%s在吃狗粮\n", m_Name);
	}
	
};

//C++中封装的思想：
//将属性和行为作为一个整体，来表现生活中的事物
//将属性和行为，加以权限控制
//权限：一共三种
//公共权限 public      成员 类内可以访问，类外也可以访问
//保护权限 protected   成员 类内可以访问，类外不可以访问
//私有权限 private     成员 类内可以访问，类外不可以访问

//C++中 struct 和class区别？
//默认权限不同，struct默认权限 是 public   class默认权限 private


void test01()
{
	Person p1;
	strcpy(p1.m_Name, "老王");
	p1.m_Age = 10;
	p1.personEat();

	Dog dog;
	strcpy(dog.m_Name, "旺财");
	dog.m_Age = 10;
	dog.dogEat();

	//p1.dogEat(); Person中没有dogEat函数
}


//权限控制
class Person1
{
public:
	string m_Name;//姓名
protected:
	string m_Car; //汽车
private:
	int m_Pwd; //密码

public:
	void func()
	{
		m_Name = "张三";  //公共权限下，类内可以访问，类外也可以访问
		m_Car = "劳斯莱斯"; //保护权限下，类内可以访问，类外访问不到
		m_Pwd = 12345;   //私有权限下，类内可以访问，类外访问不到
	}
};
void test02()
{
	Person1 p1;
	p1.m_Name = "李四"; //可以修改
	//p1.m_Car = "拖拉机"; error
	//p1.m_Pwd = 54321;  error

	p1.func();
}

int main(){

	test02();

	system("pause");
	return EXIT_SUCCESS;
}