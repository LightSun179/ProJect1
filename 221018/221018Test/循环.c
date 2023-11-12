#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>

#include<stdio.h>
//int main()
//{
	/*int x=0, y=0;
	scanf("%d", &x);

	if (x < 0)y =-1;
		if (x != 0)y = 1;
	else y = 2;

		printf("%d",y);


	return 0;*/


	//chooose



	/*int choose;
	scanf("%d", &choose);
	switch (choose)
	{

	case '1':
	case'2': printf("666"); break;
	defalt:;
	}


	return 0;*/



//
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//double average(int n, double* arr)
//{
//    double sum = 0.0;
//    double aver;
//    int i;
//    for (i = 0; i < n; i++)
//    {
//        sum = sum + arr[i];
//    }
//    aver = sum / n;
//    printf("该组数据的平均数为%.5lf\n", aver);
//    return aver;
//}
//double A_uncertainty(int n, double* arr, double aver)
//{
//    int i;
//    double ua;//A类不确定度
//    double record;
//    for (i = 0; i < n; i++)
//    {
//        record = (arr[i] - aver) * (arr[i] - aver) + record;
//    }
//    ua = sqrt(record / (n * (n - 1)));
//    printf("其A类不确定度为%.5lf\n", ua);
//    return ua;
//}
//double B_uncertainty()
//{
//    double fenduzhi;
//    double ub;
//    printf("请输入该仪器对应的分度值为: ");
//    scanf("%lf", &fenduzhi);
//    ub = fenduzhi / sqrt(3);
//    printf("其B类不确定度为:%.5lf\n", ub);
//    return ub;
//}
//double uncertainty(double a, double b)
//{
//    double u;
//    u = sqrt(a * a + b * b);
//    printf("其不确定度为%.5lf\n", u);
//    return u;
//}
//void Relative_uncertainty(double aver, double u)
//{
//    double E;
//    E = (u / aver) * 100;//计算相对不确定度
//    printf("其      相对不确定度为:%.5lf%%\n", E);//在printf中 两个% 才能在终端中输出 %
//}
//void result(double aver, double u)
//{
//
//    printf("其测量结果为%.5lf + %.5lf\n", aver, 2 * u);
//}
//int main()
//{
//    int n;              //数据的个数
//    int i;              //循环的条件
//    double aver = 0;    //记录平均数
//    double ua;          // 记录A类不确定度
//    double ub;          // 记录B类不确定度
//    double u;           // 记录不确定度
//    double* p;          // 存放指向浮点型数组的指针
//    int choose = 1;
//
//    while (choose != 0)
//    {
//        printf("请输入数据的个数:");
//        scanf("%d", &n);
//
//        p = (double*)malloc(n * sizeof(double)); //为数组分配n个空间
//
//        printf("请输入%d个数据(浮点数):", n);
//        for (i = 0; i < n; i++)
//        {
//            scanf("%lf", &p[i]);
//        }
//
//        aver = average(n, p);             // 计算平均值
//        ua = A_uncertainty(n, p, aver);         // 计算A类不确定度
//        ub = B_uncertainty();               // 计算B类不确定度
//        u = uncertainty(ua, ub);            // 计算不确定度
//        Relative_uncertainty(aver, u);      // 计算相对不确定度
//        result(aver, u);                    // 显示最终结果
//        printf("\n");
//        printf("输入非0的数继续计算:");
//        scanf("%d", &choose);
//        printf("\n");
//    }
//}
//int main()
//{
//	int a[3] = { 0,1,2 };
//	int k=0;
//	for (k = 0; k < 3; k++)
//	{
//		k = a[k];
//		printf("%d\n", k);
//	}
//	printf("%d\n",a);
//	printf("%d\n", sizeof(a));
//	return 0;

//}