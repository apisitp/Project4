#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num;
	printf("enter number");
		scanf("%d",&num);
		if (num%2 ==0 )
		{
			printf("%d is even");
		}
		else {
			printf("odd");
		}
		
		return 0;

}