#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//1��������Ĭ�ϲ���
//�β��б����� ������ = Ĭ��ֵ��

//ע������1�������һ����������Ĭ��ֵ������������𣬴������Ҷ�������Ĭ��ֵ
int func(int a=10, int b = 10  ,int c = 10)
{
	return a + b + c;
}

void test01()
{
	cout << "ret = " << func(20) << endl;

}

//ע������2��������������ʵ��ֻ����һ����Ĭ�ϲ���
int func2(int a = 10, int b = 10 );
int func2(int a, int b)
{ 
	return a + b; 
}


//2��������ռλ����
//����ռλ������ʲô�ã�Ŀǰûʲô�ã�����ѧ����������ص�ʱ����õ�
void func3(int = 1000)
{
	cout << "func3����" << endl;

}
void test02()
{
	func3();
}


int main(){

	test02();

	system("pause");
	return EXIT_SUCCESS;
}