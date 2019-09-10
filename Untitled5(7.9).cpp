#include <stdio.h>
int main(){
	int x[12];
	int s=0;
		for(int i=0;i<12;++i){
		scanf("%d",&x[i]);
		}
			for(int i=0;i<12;++i){
				s +=x[i];
				}
				printf("gia tri trung binh:%d\n",s);
				return 0;
				}
