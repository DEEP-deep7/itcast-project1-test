#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//1、宏函数 需要加括号，保证运算的完整性

#define  MYADD(x,y) ((x)+(y))
void test01()
{
	int ret = MYADD(10, 20) * 20; //预期是600 结果是410 需要加括号保证完整
	cout << "ret = " << ret << endl;
}

//2、即使加了括号，有些情况依然与预期效果不符合

#define  MYCOMPARE(a,b)  (((a)<(b))?(a):(b))

//1、函数的声明和实现体必须同时写关键字 inline才算内联函数
//2、类内部的成员函数 隐藏的加了关键字 inline
inline int myCompare(int a, int b);
inline int myCompare(int a,int b)
{
	return a < b ? a : b;
}

void test02()
{
	int a = 10;
	int b = 20;
	//int ret = MYCOMPARE(++a, b); // 预期结果11  (((++a)<(b))?(++a):(b))
	int ret = myCompare(++a, b);
	cout << "ret = " << ret << endl;
}

int main(){

	test02();

	system("pause");
	return EXIT_SUCCESS;
}