#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>


//int main()
//{
//	int i, j ,k, t;
//	int a[5] = { 3,6,1,9,4 };
//	for (i = 0; i < sizeof(a) / sizeof(int) - 1; i++)
//	{
//		k = i;
//		for (j = i + 1; j < sizeof(a)/sizeof(int); j++)
//		{
//			if (a[j] < a[k])
//				k = j;
//			printf("%d,%d,%d,%d,%d\n", a[0], a[1], a[2], a[3], a[4]);
//
//		}
//		if (k != i) 
//		{
//			t = a[i]; a[i] = a[k]; a[k] = t;
//			printf("%d,%d,%d,%d,%d\n", a[0], a[1], a[2], a[3], a[4]);
//
//		}
//		printf("%d,%d,%d,%d,%d\n", a[0], a[1], a[2], a[3], a[4]);
//		
//		
//
//
//	}
//
//	return 0;
//
//
//
//}

//#include <stdio.h>
//
//void selection_sort(int arr[], int len) {
//    int i, j, min_idx;
//
//    // 选择排序的核心代码
//    for (i = 0; i < len - 1; i++) {
//        min_idx = i;
//        for (j = i + 1; j < len; j++) {
//            if (arr[j] < arr[min_idx]) {
//                min_idx = j;
//            }
//        }
//        // 交换元素
//        int temp = arr[i];
//        arr[i] = arr[min_idx];
//        arr[min_idx] = temp;
//    }
//}
//
//int main() {
//    int arr[] = { 64, 25, 12, 22, 11 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//    selection_sort(arr, n);
//    printf("排序后的数组：\n");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//int main()
//{
//	int k = 2;
//	if (k++ % 2 == 0)
//		if (k++ % 3 == 0)
//			if (k++ % 5 == 0)
//				printf("\d\n", k);
//			else printf("%d\n", ++k);
//	return 0;
//}
//int main()
//{
//	int i, j;
//	for (j = 10; j < 11; j++)
//	{
//		for (i = 9; i < j; i++)
//			if (j% i == 0)
//				break;
//		if (i >= j - 1)
//			printf("%d\n", j);
//
//	}
//
//	return 0;
//}
//int main()
//{
//	int a, b;
//	float c;
//	scanf("%d,%d,%f", &a, &b, &c);
//	printf("a=%d,b=%d,c=%f\n", a, b, c);
////	return 0;
////}
//int main()
//{
//	int a;
//	scanf("a=%f", &a);
//	printf("%d", a);
//	return 0;
//	int i = 1, j = 2;
//	printf("%d, %d", i, j);
//}

//int f(int t[], int n);
//int main()
//{
//	int a[4] = { 4,1,3,5 }, s;
//	s = f(a, 4);
//	printf("%d\n", s)
//		;
//	return 0;
//
//
//
//
//}
//int f(int t[], int n)
//{
//	if (n > 0)
//		return t[n - 1] + f(t, n - 1)
//		;
//	else
//	{
//		return 0;
//	}
//
//
////}
//int main()
//{
//	int b[3][3] = { 1,1,1,1,1,1,1,1,1 }, i, j, t = 1;
//
//	for (i = 0; i < 3; i++)
//		for (j = i; j <= i; j++)
//			t += b[i][b[i][i]];
//	printf("%d\n", t);
//
//	int m = 5; int a[m];
//}

//
//int main() {
//
//	int a[3] = { 0001,0010,1000 }; int i;
//	for (i = 0; i < 3; i++)
//		printf("%d ", a[i]);
//	return 0;
//
//
//
//}
//int main() {
//
//	//int i = 12;
//	//printf("%d", printf("%d", printf("%d",i)));
//	//return 0;
//	//	
//
//	//void recur(char c);
//	//recur('0'); return 0;
//	//	
//		
//}
//void recur(char c) {
//
//
//	printf("%c", c);
//	if (c < '3')
//		recur(c + 1); 
//	printf("%c", c);
//}


//
//int n = 30;
//void func1() {
//
//	int n = 10;
//	printf("func1 n: %d\n", n);
//
//
//}
//void func2(int n) {
//
//	printf("func2 n: %d\n", n);
//
//
//}
//void func3(i) {
//
//	printf("func3 n: %d\n", n);
//
//
//}
//
//int main() {
//	int n = 40;
//	func1(); func2(n); func3();
//	printf("main n: %d\n", n);
//	return 0;
//
//
//
//
//}

//
//typedef struct {
//
//
//	int num;
//	double sum;
//}REC;
//void fun1(REC x)
//{
//
//	x.num = 11;
//	x.sum = 88.8;
//}
//void fun2(REC *x) {
//	x->num = 22;
//	x->sum = 98.4;
//
//}
//int main()
//{
//	REC a = { 2,90.5 }, * x = &a;
//	fun1(a);
//	printf("%d,", a.num);
//	fun2(x);
//	printf("%d\n", a.num);
//	return 0;
//
//
//}

//int main()
//{
//	FILE* fp;
//	char str[80] = "I am a student#Hello World!#";
//	int i = 0;
//	if ((fp = fopen ("test","w"))==NULL)
//	{
//		printf("Cannot open file \n");
//		exit(0);
//	}
//	while (str[i] != '#')
//	{
//		if (str[i] >= 'a' && str[i] <= 'z')
//			str[i] -= 32;
//			fputc(str[i], fp);
//		i++;
//	}
//	fclose(fp);
//	fp = fopen(" test", "r");
//	fgets(str, strlen(str) + 1, fp);
//	printf(" %s\n", str);
//	fclose(fp);
//	return 0;
////}
//char s[] = "ZheJiang";
//s[strlen(s) / 2 - 1] = 0;
//printf("%d#%s#", strlen(s), s);
//
//int main()
//{
//	int m = 90;
//	int i;
//	for (i = 2; i < m + 1; i++) {
//		if (m % i == 0) {
//			printf("%d\n", i);
//			m /= i;
//		}
//	}
//
//}
int main()
{


	double r = 0;
	double L = 4 * n;
	for (i = 0; ; i++) {
		r = (110 + 2 * n * tan(a) - 0.9 * k * sin(a)) / (sin(pi / 6 - a) / sin(pi / 3) + sin(a));
		printf("x=%.2f\n", (0.9 * k + r) * cos(a));

		if ((0.9 * k + r) * cos(a) >= L)
			break;
		k += cos(a) * r / sin(pi / 6 + a);


	}
	printf("%d\n", 2 * i * n);

}