//作用域和生命周期



#define _CRT_SUCURE_NO_WARNINGS

#include <stdio.h>
extern int ff;
enum sex
{
	male,
	female,
	secret
};
int main()
{
	printf("%d\n",ff);
	int n = 10;
	n = 20;
	printf("n\n");
	printf("%d\n", male);
	printf("%d\n", female);
	printf("%d\n", secret);


	return 0;
	//int n = 10;
	//int arr[n] = { 0 };
}
