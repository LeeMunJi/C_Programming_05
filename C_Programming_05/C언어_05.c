// �����Ϳ� �Լ� �����ϱ�

// �μ� ���� ���
// ���� ���� ȣ�� : ���纻 ���� (�Լ� ȣ�� �ÿ� ������ ���� �Լ��� ����)
// ������ ���� ȣ�� : ���� ���� (�Լ� ȣ�� �ÿ� ������ �ּҸ� �Լ��� ����)

// ���� ���� ȣ�� ���� �ڵ�
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

// ������ ���� ȣ�� ���� �ڵ�
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

// swap() �Լ�
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

	printf("swap() ȣ�� �� : a = %d, b = %d\n", a, b);
	swap(a, b);
	printf("swap() ȣ�� �� : a = %d, b = %d\n", a, b);
}
*/

// 2�� �̻��� ����� ��ȯ�ϱ�
// 2���� ��ǥ�� ������ ������ ����� y���� ���ϱ�
/*
#include <stdio.h>
int line(int x1, int y1, int x2, int y2, float* slope, float* yintercept)
{
	if (x1 == x2)
		return -1;
	else
	{
		*slope = (float)(y2 - y1) / (float)(x2 - x1); // ���� = (y2-y1)/(x2-x1)
		*yintercept = y1 - (*slope) * x1; // y���� = y1 - ���� * x1
		return 0;
	}
}

void main()
{
	float s, y;
	if (line(2, 2, 5, 5, &s, &y) == -1)
		printf("����\n");
	else
		printf("���� : %f, y���� : %f\n", s, y);
}
*/

// �����Ϳ� �Լ� ���� ���� �ڵ�

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

	printf("�� : %d\n", sum);
	printf("�� : %d\n", mul);
}
*/

// 3
// 3�� ���� �Է¹޾� ū ���ں��� ���� ���ڷ� ������ �� ����ϴ� ���α׷�
/*
#include <stdio.h>

void swap(double* pa, double* pb);
void line_up(double* maxp, double* midp, double* minp);

int main(void)
{
	double max, mid, min;

	printf("�Ǽ��� 3�� �Է� : ");
	scanf("%lf %lf %lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("���ĵ� �� ��� : %.2lf, %.2lf, %.2lf\n", max, mid, min);
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

// �μ��� ��ȯ�� ���� const
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
	printf("������ ��ġ(%d, %d) \n", *xpos, *ypos);
}
void move(const int* xpos, const int* ypos)
{
	*xpos = *xpos + 1;
	*ypos = *ypos + 1;
}
*/