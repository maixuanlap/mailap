#include <stdio.h>
int main(){
	int n;
	int j;
	int s=0;
	printf("nhap so ");
	scanf("%d",&n);
	for(;n!=0;)
	{
          j =n%10;
           s=s+j;
           n=n/10;
		}
	printf("tong %d\n",s);
	return 0;
	}
