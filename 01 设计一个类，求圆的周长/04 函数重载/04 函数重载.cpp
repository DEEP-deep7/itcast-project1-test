#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//函数重载
//C++中允许函数名相同的多个函数同时存在，但是有些条件

//1、在相同的作用域下
//2、函数名称相同
//3、参数的个数不同、或者类型不同、或者顺序不同
void func()
{
	cout << "func()的调用" << endl;
}

void func(int a)
{
	cout << "func(int a)的调用" << endl;
}

void func(double a)
{
	cout << "func(double a)的调用" << endl;
}

void func(int a ,double b)
{
	cout << "func(int a ,double b)的调用" << endl;
}

void func(double a, int b)
{
	cout << "func(double a, int b)的调用" << endl;
}


//函数的返回值不可以作为重载的条件
//int func(double a, int b)
//{
//	cout << "func(double a, int b)的调用" << endl;
//}


//class Person
//{
//public:
//	void func(){} //成员函数
//};

void test01()
{
	func(3.14,10);
}



//函数重载注意事项
//1、加const的引用和不加const的引用 也是可以作为重载的条件的

void func2(int &a) //int &a = 10 不合法
{
	cout << "func2(int &a)调用" << endl;
}
void func2(const int &a)//const int &a = 10 合法
{
	cout << "func2(const int &a)调用" << endl;
}

//如果有引用版本，就不要出现值传递版本，可以共存，但是在调用的时候，出现二义性
//void func2(int a)
//{
//	cout << "func2(int a)调用" << endl;
//}

void test02()
{
	int a = 10;
	func2(10);
}


//2、函数重载 尽量不要和 函数默认参数 同时使用，可能会出现二义性
void func3(int a)
{
	cout << " func3(int a)调用" << endl;
}
void func3(int a, int b = 10)
{
	cout << " func3(int a,int b)调用" << endl;
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