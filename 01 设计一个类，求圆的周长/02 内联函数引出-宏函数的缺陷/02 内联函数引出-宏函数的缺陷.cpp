#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//1���꺯�� ��Ҫ�����ţ���֤�����������

#define  MYADD(x,y) ((x)+(y))
void test01()
{
	int ret = MYADD(10, 20) * 20; //Ԥ����600 �����410 ��Ҫ�����ű�֤����
	cout << "ret = " << ret << endl;
}

//2����ʹ�������ţ���Щ�����Ȼ��Ԥ��Ч��������

#define  MYCOMPARE(a,b)  (((a)<(b))?(a):(b))

//1��������������ʵ�������ͬʱд�ؼ��� inline������������
//2�����ڲ��ĳ�Ա���� ���صļ��˹ؼ��� inline
inline int myCompare(int a, int b);
inline int myCompare(int a,int b)
{
	return a < b ? a : b;
}

void test02()
{
	int a = 10;
	int b = 20;
	//int ret = MYCOMPARE(++a, b); // Ԥ�ڽ��11  (((++a)<(b))?(++a):(b))
	int ret = myCompare(++a, b);
	cout << "ret = " << ret << endl;
}

int main(){

	test02();

	system("pause");
	return EXIT_SUCCESS;
}