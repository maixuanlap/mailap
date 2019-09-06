#include <stdio.h>
int main (){
	int a,b,c;
	scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
		while(a+b<=c||a+c<=b||b+c<=a){
			printf("nhap lai a,b,c");
			scanf("%d",&a);
            scanf("%d",&b);
            scanf("%d",&c);
            }
            printf("3 canh cua tam giac");
            return 0;
            }
