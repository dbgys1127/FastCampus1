#include<iostream>
#include<numeric>
using namespace std;

int main()
{
	//정수형
	/*int x, y, z;
	x = 1;
	y = 2;
	z = 3;
	std::cout << x << std::endl;
	std::cout << y << std::endl;
	std::cout << z << std::endl;

	int x = 1, y = 2, z = 3;

	cout << x << endl;
	cout << y << endl;
	cout << z << endl;*/

	/*int num0 = 11;//10진수
	int num1 = 011;//8진수
	int num2 = 0b11;//2진수
	int num3 = 0x11;//16진수

	cout << "num0 " << num0 << endl;//11
	cout << "num1 " << num1 << endl;//9
	cout << "num2 " << num2 << endl;//3
	cout << "num3 " << num3 << endl;//*/

	//자료형의 사이즈
	
	/*int intNum = 0;
	long longNum = 0;
	int* intPointer = &intNum;

	cout << sizeof(intNum) << endl;
	cout << sizeof(longNum) << endl;
	cout << sizeof(intPointer) << endl;*/
	
	//int8_t num0 = 0;
	//int16_t num1 = 0;
	//int32_t num2 = 0;

	//cout << sizeof(num0) << endl;
	//cout << sizeof(num1) << endl;
	//cout << sizeof(num2) << endl;

	//unsigned int a = 11u;//unsigned literal
	//long int longNum = 0L;//long
	//long long longlongNum = 0LL;//long long
	//unsigned long long ulonglongNum = 0LL;//unsigned long long

	//최대값 보기
	//cout << (int)numeric_limits<uint8_t>::max() << endl;
	//cout << numeric_limits<uint16_t>::max() << endl;
	//cout << numeric_limits<uint32_t>::max() << endl;
	//cout << numeric_limits<uint64_t>::max() << endl;

	uint32_t num32 = numeric_limits<uint32_t>::max();
	uint32_t num32_ = num32 + 1;
	cout << num32_ << endl;
}