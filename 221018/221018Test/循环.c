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
//    printf("�������ݵ�ƽ����Ϊ%.5lf\n", aver);
//    return aver;
//}
//double A_uncertainty(int n, double* arr, double aver)
//{
//    int i;
//    double ua;//A�಻ȷ����
//    double record;
//    for (i = 0; i < n; i++)
//    {
//        record = (arr[i] - aver) * (arr[i] - aver) + record;
//    }
//    ua = sqrt(record / (n * (n - 1)));
//    printf("��A�಻ȷ����Ϊ%.5lf\n", ua);
//    return ua;
//}
//double B_uncertainty()
//{
//    double fenduzhi;
//    double ub;
//    printf("�������������Ӧ�ķֶ�ֵΪ: ");
//    scanf("%lf", &fenduzhi);
//    ub = fenduzhi / sqrt(3);
//    printf("��B�಻ȷ����Ϊ:%.5lf\n", ub);
//    return ub;
//}
//double uncertainty(double a, double b)
//{
//    double u;
//    u = sqrt(a * a + b * b);
//    printf("�䲻ȷ����Ϊ%.5lf\n", u);
//    return u;
//}
//void Relative_uncertainty(double aver, double u)
//{
//    double E;
//    E = (u / aver) * 100;//������Բ�ȷ����
//    printf("��      ��Բ�ȷ����Ϊ:%.5lf%%\n", E);//��printf�� ����% �������ն������ %
//}
//void result(double aver, double u)
//{
//
//    printf("��������Ϊ%.5lf + %.5lf\n", aver, 2 * u);
//}
//int main()
//{
//    int n;              //���ݵĸ���
//    int i;              //ѭ��������
//    double aver = 0;    //��¼ƽ����
//    double ua;          // ��¼A�಻ȷ����
//    double ub;          // ��¼B�಻ȷ����
//    double u;           // ��¼��ȷ����
//    double* p;          // ���ָ�򸡵��������ָ��
//    int choose = 1;
//
//    while (choose != 0)
//    {
//        printf("���������ݵĸ���:");
//        scanf("%d", &n);
//
//        p = (double*)malloc(n * sizeof(double)); //Ϊ�������n���ռ�
//
//        printf("������%d������(������):", n);
//        for (i = 0; i < n; i++)
//        {
//            scanf("%lf", &p[i]);
//        }
//
//        aver = average(n, p);             // ����ƽ��ֵ
//        ua = A_uncertainty(n, p, aver);         // ����A�಻ȷ����
//        ub = B_uncertainty();               // ����B�಻ȷ����
//        u = uncertainty(ua, ub);            // ���㲻ȷ����
//        Relative_uncertainty(aver, u);      // ������Բ�ȷ����
//        result(aver, u);                    // ��ʾ���ս��
//        printf("\n");
//        printf("�����0������������:");
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