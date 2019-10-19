#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//设计人结构体
struct Person
{
	char m_Name[64]; //姓名

	int m_Age; //年龄
};

void personEat(struct Person * p)
{
	printf("%s在吃人饭\n",p->m_Name);
}

void test01()
{
	struct Person p1;
	strcpy(p1.m_Name, "张三");
	p1.m_Age = 10;
	personEat(&p1);
}

//狗结构体
struct Dog
{
	char m_Name[64]; //狗名

	int m_Age; //年龄
};

void dogEat(struct Dog * p)
{
	printf("%s在吃狗粮\n", p->m_Name);
}

void test02()
{
	struct Dog dog;
	strcpy(dog.m_Name, "旺财");
	dog.m_Age = 5;

	dogEat(&dog);

	struct Person p1;
	strcpy(p1.m_Name, "老王");
	p1.m_Age = 20;
	dogEat(&p1);
}


int main(){
	test02();


	system("pause");
	return EXIT_SUCCESS;
}