#include <stdio.h>
int main(){
	
	char  x[8];
	for(int i=0;i<4;++i){
		for(int j=0;j<8;++j){
			if(j==0||j==7){
			x[j]='|';
			printf("|",x[j]);
			}
			
			if(j>0&&j<7){
				x[i]='+';
				printf("+",x[j]);
				}
				}
			printf("\n");
		}
				return 0;
				}
