#include<stdio.h>
int main()
{
	int a[5]={22,34,34,54,43};
     int*p1 = &a[0];
     int *p2 =&a[1];
     int dif =p2-p1;
     printf("difference in elements:%d",dif);
	
}
