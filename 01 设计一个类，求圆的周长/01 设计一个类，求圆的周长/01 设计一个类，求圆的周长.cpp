#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

const double PI = 3.14;

//���һ���࣬��Բ���ܳ�

//�﷨ class + ������
//���һ��Բ����
class Circle
{
//����Ȩ��
public:

	//��Բ���ܳ�
	double calculateZC()
	{
		return 2 * PI * m_R;
	}

	//ͨ��������Ƶĺ��� �޸İ뾶
	void setR(int r)
	{
		m_R = r;
	}

	//ͨ������ ��ȡԲ�İ뾶
	int getR()
	{
		return m_R;
	}

	//�뾶
	int m_R;
};

void test01()
{
	//ͨ��Բ�࣬����Բ ����
	Circle c1;
	//c1.m_R = 10;
	c1.setR(10);
	cout << "Բ���ܳ�Ϊ�� " << c1.calculateZC() << endl;
	cout << "Բ�İ뾶Ϊ�� " << c1.getR() << endl;
}



//���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��
class Student
{
public:

	//��Ա ������������Ƶĺ����ͱ���

	//����   ��Ա����  ��Ա����
	//����
	string m_Name;
	//ѧ��
	int m_Id;


	//��Ϊ   ��Ա����  ��Ա����
	//��������
	void setName(string name)
	{
		m_Name = name;
	}
	//����ѧ��
	void setId(int id)
	{
		m_Id = id;
	}

	//��ʾ������ѧ��
	void showStudent()
	{
		cout << "������ " << m_Name << " ѧ�ţ� " << m_Id << endl;
	}
};

void test02()
{
	//ͨ���ഴ������   ���̳�Ϊ ʵ����
	Student s1;
	s1.setName("����");
	s1.setId(1);
	cout << "������ " << s1.m_Name << " ѧ�ţ� " << s1.m_Id << endl;

	Student s2;
	s2.setName("����");
	s2.setId(2);
	s2.showStudent();
}

int main(){
	test02();


	system("pause");
	return EXIT_SUCCESS;
}