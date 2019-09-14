#include <stdio.h>
int so_trong_mang(int a[]){
	int j;
	scanf("%d",&j);
     for(int i=0;i<6;i++){
     	if(a[i]==j){
     			printf("khong co trong mang\n");
     			return 0;
			}
		printf("co trong mang\n");
    return 0;
}
}
int main(){
	int n[6]={2,5,3,7,4,8};
	so_trong_mang(n);
	return 0;
	}
