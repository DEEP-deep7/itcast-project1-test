#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//����˽ṹ��
struct Person
{
	char m_Name[64]; //����

	int m_Age; //����
};

void personEat(struct Person * p)
{
	printf("%s�ڳ��˷�\n",p->m_Name);
}

void test01()
{
	struct Person p1;
	strcpy(p1.m_Name, "����");
	p1.m_Age = 10;
	personEat(&p1);
}

//���ṹ��
struct Dog
{
	char m_Name[64]; //����

	int m_Age; //����
};

void dogEat(struct Dog * p)
{
	printf("%s�ڳԹ���\n", p->m_Name);
}

void test02()
{
	struct Dog dog;
	strcpy(dog.m_Name, "����");
	dog.m_Age = 5;

	dogEat(&dog);

	struct Person p1;
	strcpy(p1.m_Name, "����");
	p1.m_Age = 20;
	dogEat(&p1);
}


int main(){
	test02();


	system("pause");
	return EXIT_SUCCESS;
}