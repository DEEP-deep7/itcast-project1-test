#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//����˽ṹ��
class Person
{
public:
	char m_Name[64]; //����

	int m_Age; //����

	//�˳Է���Ϊ
	void personEat()
	{
		printf("%s�ڳ��˷�\n", m_Name);
	}
};

//���ṹ��
struct Dog
{
	
	char m_Name[64]; //����

	int m_Age; //����


	//���Է���Ϊ
	void dogEat()
	{
		printf("%s�ڳԹ���\n", m_Name);
	}
	
};

//C++�з�װ��˼�룺
//�����Ժ���Ϊ��Ϊһ�����壬�����������е�����
//�����Ժ���Ϊ������Ȩ�޿���
//Ȩ�ޣ�һ������
//����Ȩ�� public      ��Ա ���ڿ��Է��ʣ�����Ҳ���Է���
//����Ȩ�� protected   ��Ա ���ڿ��Է��ʣ����ⲻ���Է���
//˽��Ȩ�� private     ��Ա ���ڿ��Է��ʣ����ⲻ���Է���

//C++�� struct ��class����
//Ĭ��Ȩ�޲�ͬ��structĬ��Ȩ�� �� public   classĬ��Ȩ�� private


void test01()
{
	Person p1;
	strcpy(p1.m_Name, "����");
	p1.m_Age = 10;
	p1.personEat();

	Dog dog;
	strcpy(dog.m_Name, "����");
	dog.m_Age = 10;
	dog.dogEat();

	//p1.dogEat(); Person��û��dogEat����
}


//Ȩ�޿���
class Person1
{
public:
	string m_Name;//����
protected:
	string m_Car; //����
private:
	int m_Pwd; //����

public:
	void func()
	{
		m_Name = "����";  //����Ȩ���£����ڿ��Է��ʣ�����Ҳ���Է���
		m_Car = "��˹��˹"; //����Ȩ���£����ڿ��Է��ʣ�������ʲ���
		m_Pwd = 12345;   //˽��Ȩ���£����ڿ��Է��ʣ�������ʲ���
	}
};
void test02()
{
	Person1 p1;
	p1.m_Name = "����"; //�����޸�
	//p1.m_Car = "������"; error
	//p1.m_Pwd = 54321;  error

	p1.func();
}

int main(){

	test02();

	system("pause");
	return EXIT_SUCCESS;
}