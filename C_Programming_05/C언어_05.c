// 포인터와 함수 이해하기

// 인수 전달 방법
// 값에 의한 호출 : 복사본 전달 (함수 호출 시에 변수의 값을 함수에 전달)
// 참조에 의한 호출 : 원본 전달 (함수 호출 시에 변수의 주소를 함수에 전달)

// 값에 의한 호출 예시 코드
/*
void move(int x, int y)
{
	x = x + 1;
	y = y + 1;
}

void main()
{
	int x = 10, y = 20;

	printf("( %d, %d )\n", x, y); // 10, 20
	move(x, y);
	printf("( %d, %d )\n", x, y); // 10, 20
}
*/

// 참조에 의한 호출 예시 코드
/*
void move(int *x, int *y)
{
	*x = *x + 1;
	*y = *y + 1;
}

void main()
{
	int x = 10, y = 20;

	printf("( %d, %d )\n", x, y); // 10, 20
	move(x, y);
	printf("( %d, %d )\n", x, y); // 11, 21
}
*/

// swap() 함수
/*
#include <stdio.h>

void swap(int* x, int* y)
{
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

void main()
{
	int a = 100, b = 200;

	printf("swap() 호출 전 : a = %d, b = %d\n", a, b);
	swap(a, b);
	printf("swap() 호출 후 : a = %d, b = %d\n", a, b);
}
*/

// 2개 이상의 결과를 반환하기
// 2개의 좌표를 지나는 직선의 기울기와 y절편 구하기
/*
#include <stdio.h>
int line(int x1, int y1, int x2, int y2, float* slope, float* yintercept)
{
	if (x1 == x2)
		return -1;
	else
	{
		*slope = (float)(y2 - y1) / (float)(x2 - x1); // 기울기 = (y2-y1)/(x2-x1)
		*yintercept = y1 - (*slope) * x1; // y절편 = y1 - 기울기 * x1
		return 0;
	}
}

void main()
{
	float s, y;
	if (line(2, 2, 5, 5, &s, &y) == -1)
		printf("에러\n");
	else
		printf("기울기 : %f, y절편 : %f\n", s, y);
}
*/

// 포인터와 함수 관련 예제 코드

// 1
/*
#include <stdio.h>

int Plus_One(int n)
{
	n += 1;
	return n;
}

void Plus_One(int* n)
{
	*n += 1;
}

int main()
{
	int num1 = 0;
	printf("%d\n", num1); // 0
	 
	num1 = Plus_One(num1);
	printf("%d\n", num1); // 1

	num1 = Plus_One(num1);
	printf("%d\n", num1); // 2

	int num2 = 0;
	printf("%d\n", num2); // 0

	Plus_One(&num2);
	printf("%d\n", num2); // 1

	Plus_One(&num2);
	printf("%d\n", num2); // 2
}
*/

// 2
/*
#include <stdio.h>

void math_func(int x, int y, int* sum, int* mul)
{
	*sum = x + y;
	*mul = x * y;
}

int main()
{
	int num1, num2;
	int sum, mul;

	scanf_s("%d %d", &num1, &num2);
	math_func(num1, num2, &sum, &mul);

	printf("합 : %d\n", sum);
	printf("곱 : %d\n", mul);
}
*/

// 3
// 3개 숫자 입력받아 큰 숫자부터 작은 숫자로 정렬한 뒤 출력하는 프로그램
/*
#include <stdio.h>

void swap(double* pa, double* pb);
void line_up(double* maxp, double* midp, double* minp);

int main(void)
{
	double max, mid, min;

	printf("실수값 3개 입력 : ");
	scanf("%lf %lf %lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("정렬된 값 출력 : %.2lf, %.2lf, %.2lf\n", max, mid, min);
}

void swap(double* pa, double* pb)
{
	double tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

void line_up(double* maxp, double* midp, double* minp)
{
	if (*maxp < *midp)	swap(maxp, midp);
	if (*maxp < *minp)	swap(maxp, minp);
	if (*midp < *minp)	swap(midp, minp);
}
*/

// 인수의 변환을 막는 const
/*
#include <stdio.h>
void display(const int* xpos, const int* ypos);
void move(int* xpos, int* ypos);

int main(void)
{
	int x = 10;
	int y = 20;

	display(&x, &y);
	move(&x, &y);
	display(&x, &y);

	return 0;
}

void display(const int* xpos, const int* ypos)
{
	printf("현재의 위치(%d, %d) \n", *xpos, *ypos);
}
void move(const int* xpos, const int* ypos)
{
	*xpos = *xpos + 1;
	*ypos = *ypos + 1;
}
*/