#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//1、函数的默认参数
//形参列表（类型 变量名 = 默认值）

//注意事项1：如果有一个参数有了默认值，从这个参数起，从左往右都必须有默认值
int func(int a=10, int b = 10  ,int c = 10)
{
	return a + b + c;
}

void test01()
{
	cout << "ret = " << func(20) << endl;

}

//注意事项2：函数的声明和实现只能有一个有默认参数
int func2(int a = 10, int b = 10 );
int func2(int a, int b)
{ 
	return a + b; 
}


//2、函数的占位参数
//函数占位参数有什么用？目前没什么用，后面学到运算符重载的时候会用到
void func3(int = 1000)
{
	cout << "func3调用" << endl;

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