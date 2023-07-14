#include<stdio.h>

void main(){
int a,b;
printf("Enter the array's' size:");
scanf("%d",&a);

printf("Enter array's Element\n");
int j[a];
for(b=0;b<a;b++) {
	printf("j[%d]",b);
	scanf("%d",&j[b]);
}printf("negative elements from an array:");
for(b=0;b<a;b++) {
	if(j[b]<0){
		printf("%d,",j[b]);
	}
}

}
