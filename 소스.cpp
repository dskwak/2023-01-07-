//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define SIZE 3
//typedef struct {
//	char NAME[100];
//	char TITLE[100];
//	int PAGE;
//}student;
//int main(void) {
//	student BIF[SIZE] = { 0 };
//	printf("도서 정보입력\n아래와같은 순서로 적어주시기바랍니다\n제목 저자명 페이지수\n");
//	for (int i = 0; i < SIZE; i++) {
//		scanf_s("%s", BIF[i].TITLE,sizeof(BIF[i].TITLE));
//		scanf_s("%s", BIF[i].NAME,sizeof(BIF[i].NAME));
//		scanf_s("%d", &BIF[i].PAGE);
//	}
//	printf("------------------------------\n");
//	for (int i = 0; i < SIZE; i++) {
//		printf("%s ", BIF[i].TITLE);
//		printf("%s ", BIF[i].NAME);
//		printf("%d ", BIF[i].PAGE);
//		printf("\n----------------------------------------------------------\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define SIZE 3
//typedef struct _Books_ImFormation {
//	char TITLE[100];
//	char NAME[100];
//	int PAGE;
//}BIF;
//int main(void) {
//	BIF* _BIF =(BIF*)malloc(sizeof(BIF)*SIZE);
//	for (int i = 0; i < SIZE; i++) {
//		scanf_s("%s", _BIF[i].NAME, sizeof(_BIF->NAME));
//		scanf_s("%s", _BIF[i].TITLE, sizeof(_BIF->TITLE));
//		scanf_s("%d", &_BIF[i].PAGE);
//	}
//	for (int i = 0; i < SIZE; i++) {
//		printf("--------------------------------------")
//		printf("%s ", _BIF[i].NAME);
//		printf("%s ", _BIF[i].TITLE);
//		printf("%d ", _BIF[i].PAGE);
//		printf("\n");
//	}
//	return 0;
//	
////}
//#include <stdio.h> 
//#include <stdlib.h>
//#include <string.h>
//
//#include "complex_number_minuse.h"
//#include "complex_number_pluse.h"
//typedef struct _COMPLEX_REALNUMBER {
//	double a = 1.2;
//	double b = 2.4;
//	double c = 1.1;
//	double d = 2.2;
//}CMRN;
//int main(void) {
//	CMRN P;
//	printf("%lf %lf \n",real_number_pluse(P.a, P.b, P.c, P.d),complex_number_pluse(P.a,P.b,P.c,P.d));
//	printf("%lf %lf",real_number(P.a, P.b, P.c, P.d),complex_number_minuse(P.a,P.b,P.c,P.d));
//}
//#include <iostream>
//int main(void)
//{
//	int num = 20;
//	std::cout << "hello world!" << std::endl;
//	std::cout << "hello" << "world" << std::endl;
//	std::cout << num << ' ' << 'A';
//	std::cout << ' ' << 3.1 << std::endl;
//	return 0;
//}
/*
#include <iostream>
int main(void)
{
	int val1;
	std::cout << "출력할것";
	std::cin >> val1;

	int val2;
	std::cout << "입력해줘";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈결과" << result << std::endl;
	return 0;
}
*/
/*
#include <iostream>
int main(void)
{
	int val1, val2;
	int result = 0;
	std::cout << "두수 입력 할 값"<<std::endl;
	std::cin >> val1>>val2;
	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++)
			result = result + i;
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
			result += 1;
	}
	std::cout << result << std::endl;
	return 0;

//}*/
//#include <iostream>
//int main(void)
//{
//	int arr[5]; //0~4까지 받음    arr[5]-> 5개 할당받는다.
//	int sum=0;
//	for (int i = 0; i < 5; i++)
//	{
//		std::cout << "입력할" << i << "번쨰 값\n";
//		std::cin >> arr[i];
//		sum += arr[i];
//	}
//	std::cout << sum << "\n";
//	return 0;
//}
//#include <iostream>
//int main(void)
//{
//	int PNUM; //PHONE NUMBER
//	char NAME[10];
//	std::cout << "입력할값\n";
//	std::cin >> PNUM>> NAME;
//	std::cout << PNUM << NAME<<"\n";
////}
//#include <iostream>
//int main(void)
//{
//	int val1;
//	std::cout << "몇단을 출력할것인가요?";
//	std::cin >> val1;
//	int result;
//	for (int i = 1; i < 10; i++)
//	{
//		result = i * val1;
//		std::cout << val1 << "*" << i << "=" << result<<std::endl;
//	}
//	return 0;
////}
//#include <iostream>
//#define NUM 50
//int main(void)
//{
//	int salePrice = 0;
//	int pay=0;
//	double result;
//
//	while (1)
//	{
//		std::cout << "판매금액" << std::endl;
//		std::cin >> salePrice;
//		if (salePrice == -1) {
//			std::cout << "프로그램을 종료합니다\n";
//			break;
//
//		}
//	
//		pay =NUM +(int)(salePrice *0.12); // 급여
//		std::cout << "이번달 급여 :" << pay<<std::endl;
//	}
//	return 0;
////}
//#include <iostream>
//
//void swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void swap(char *a, char *b)
//{
//	char temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void swap(double* a, double* b)
//{
//	double temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main(void)
//{
//	int num1 = 20, num2 = 30;
//	swap(&num1, &num2);
//	std::cout << num1 << ' ' << num2 << std::endl;
//
//	char ch1 = 'A', ch2 = 'B';
//	swap(&ch1, &ch2);
//	std::cout << ch1 << ' ' << ch2 << std::endl;
//
//	double dbl1 = 1.111, dbl2 = 5.555;
//	swap(&dbl1, &dbl2);
//	std::cout << dbl1 << ' ' << dbl2 << std::endl;
//	return 0;
//}
//
//#include <iostream>
//int boxvolue(int a, int b, int c);
//int boxvolue(int a, int b);
//int boxvolue(int a);
//int main(void) {
//	std::cout << "[3,3,3]:" << boxvolue(3, 3, 3) << std::endl;
//	std::cout << "[5,5,D]" << boxvolue(5, 5) << std::endl;
//	std::cout << "[7,D,D]" << boxvolue(7) << std::endl;
//	return 0;
//}
//int boxvolue(int a,int b,int c) {
//	return a * b * c;
//}
//int boxvolue(int a,int b) {
//	return a * b;
//}
//int boxvolue(int a) {
//	return a;
////}
//#include <iostream>
//using namespace std;
//int pluse(int *a) {
//	return *a -= 1;
//}
//int minuse(int *b) {
//	return (*b)*-1;
//}
//int main(void) {
//	int num=0;
//	cout << "값" << endl;
//	cin >> num;
//	cout << pluse(&num)<<endl;
//	cout << minuse(&num)<<endl;
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//int pluse(int &ref1) { //1씩 증가하는 함수
//	return ref1 + 1;
//}
//int change(int& ref1) { // 부호를 바꾸는 함수
//	return (- 1 * ref1);
//}
//int main(void) { 
//	int num = 1;
//	cout << "증가" << pluse(num) << endl;
//	cout << "부호 변경" << change(num) << endl
//}

//#include <iostream>
//void swapPointer(int *ptr1, int *ptr2) { //주소값을 가리킴
//	int temp;
//	temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//
//}
//int main(void)
//{
//	int num1 = 5;
//	int* ptr1 = &num1;
//	int num2 = 10;
//	int* ptr2 = &num2;
//	std::cout << *ptr1 << "   " << *ptr2 << std::endl;
//	swapPointer(ptr1, ptr2);// 현재 ptr1,2 는 주소값
//	std::cout << *ptr1<< "   " << *ptr2 << std::endl;
//}
//
//#include <stdlib.h>
//
//typedef struct __point
//{
//	int xpos;
//	int ypos;
//}Point;
//Point& pntadder(const Point& p1, const Point& p2) {
//
//}
//int main(void)
//{
//	int a = 1;
//	int& c = a;
//
//	Point *num1 = new Point;
//	Point* num2 = new Point;
//	Point* num3 = (Point*)malloc(sizeof(Point));
//
//	pntadder(*num1,*num2);
//}
#include <iostream>
#include <string.h>
using namespace std;
int main(void)
{
	char a[16] = "10wa42t", b[24] = "5taws";
	cout << strlen("gekko") << endl;
	cout << strcpy_s(a,b) << endl;

}