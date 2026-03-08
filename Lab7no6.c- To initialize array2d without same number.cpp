#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void arr(int a[20][20],int m,int n);
int main(){
	int m,n;
	int a[20][20];
	scanf("%d %d",&m,&n);
	srand(time(NULL));
	arr(a,m,n);
	
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
}

void arr(int a[20][20],int m,int n){
	int i,j,l,k;
	int num,dup;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			do{
				num = rand()%101+100;
				dup = 0;
				
				for(k=0;k<m;k++){
					for(l=0;l<n;l++){
						if(a[k][l] == num){
							dup = 1;
						}
					}
				}
			}while(dup);
		a[i][j]=num;
	}
}
	
}
