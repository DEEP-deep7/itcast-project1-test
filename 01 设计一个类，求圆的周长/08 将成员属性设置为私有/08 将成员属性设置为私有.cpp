#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

class Person
{
public:
	//��������
	void setName(string name)
	{
		m_Name = name;
	}
	//��ȡ����
	string getName()
	{
		return m_Name;
	}

	//��ȡ����
	int getAge()
	{
		return m_Age;
	}
	//��������
	void setAge(int age)
	{
		if (age <0 || age > 150)
		{
			cout << "�����������" << endl;
			return;
		}
		m_Age = age;
	}

	//��������
	void setLover(string lover)
	{
		m_Lover = lover;
	}

private:
	//����  �ɶ���д
	string m_Name;
	//����   ֻ��  �ģ�  �ɶ�  ��д ��д���� ���������0 ~ 150֮�䣩
	int m_Age = 18;
	//����   ֻд
	string m_Lover;
};

//����Ա��������Ϊ˽�кô���
//�����Լ����ƶ�дȨ��
//����дȨ�ޣ�������֤���ݵ���Ч��
void test01()
{
	Person p1;
	p1.setName("����");
	cout << "������ " << p1.getName() << endl;


	p1.setAge(100);
	cout << "���䣺 " << p1.getAge() << endl;

	p1.setLover("�Ծ�Ůʿ");
	//cout << "�����ǣ� " << p1.m_Lover << endl;
}

int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}