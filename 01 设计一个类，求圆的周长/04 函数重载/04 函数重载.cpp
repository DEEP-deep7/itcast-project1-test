#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//��������
//C++������������ͬ�Ķ������ͬʱ���ڣ�������Щ����

//1������ͬ����������
//2������������ͬ
//3�������ĸ�����ͬ���������Ͳ�ͬ������˳��ͬ
void func()
{
	cout << "func()�ĵ���" << endl;
}

void func(int a)
{
	cout << "func(int a)�ĵ���" << endl;
}

void func(double a)
{
	cout << "func(double a)�ĵ���" << endl;
}

void func(int a ,double b)
{
	cout << "func(int a ,double b)�ĵ���" << endl;
}

void func(double a, int b)
{
	cout << "func(double a, int b)�ĵ���" << endl;
}


//�����ķ���ֵ��������Ϊ���ص�����
//int func(double a, int b)
//{
//	cout << "func(double a, int b)�ĵ���" << endl;
//}


//class Person
//{
//public:
//	void func(){} //��Ա����
//};

void test01()
{
	func(3.14,10);
}



//��������ע������
//1����const�����úͲ���const������ Ҳ�ǿ�����Ϊ���ص�������

void func2(int &a) //int &a = 10 ���Ϸ�
{
	cout << "func2(int &a)����" << endl;
}
void func2(const int &a)//const int &a = 10 �Ϸ�
{
	cout << "func2(const int &a)����" << endl;
}

//��������ð汾���Ͳ�Ҫ����ֵ���ݰ汾�����Թ��棬�����ڵ��õ�ʱ�򣬳��ֶ�����
//void func2(int a)
//{
//	cout << "func2(int a)����" << endl;
//}

void test02()
{
	int a = 10;
	func2(10);
}


//2���������� ������Ҫ�� ����Ĭ�ϲ��� ͬʱʹ�ã����ܻ���ֶ�����
void func3(int a)
{
	cout << " func3(int a)����" << endl;
}
void func3(int a, int b = 10)
{
	cout << " func3(int a,int b)����" << endl;
}
void test03()
{
	//func3(10);
}


int main(){
	test03();


	system("pause");
	return EXIT_SUCCESS;
}