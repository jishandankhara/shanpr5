#include<stdio.h>
void main(){
int j,r,c;
printf("Enter the size of raw and colum:");
scanf("%d",&j);
int a[j][j];
 printf("enter the elements of array:\n");
 for(r=0;r<j;r++){
      for(c=0;c<j;c++){
      	printf("a[%d][%d]=",r,c);
      	scanf("%d",&a[r][c]);
}}
for(r=0;r<j;r++){
	for(c=0;c<j;c++);
printf("%d",a[c][r]);}
printf("\n");
}
