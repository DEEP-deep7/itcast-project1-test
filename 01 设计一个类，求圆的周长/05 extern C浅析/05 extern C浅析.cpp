#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include "test.h"

//extern "C" void show();


void test01()
{
	show();  // _Z4showv �Ҳ��������ĺ���
}

int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}