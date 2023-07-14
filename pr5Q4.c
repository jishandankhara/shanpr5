#include<stdio.h>
void main(){
	int j,i,r,c,m,n,sum=0,s=0;
	printf("Enter the number of raws:");
	scanf("%d",&i);
	printf("Enter the number of colums:");
	scanf("%d",&j);
	int a[i][j];
	printf("Enter elements of A array:\n");
	for(r=0;r<i;r++){
		for(c=0;c<j;c++){
		printf("a[%d][%d]",r,c);
		scanf("%d",&a[r][c]);
		}
	}
        printf("\nEnter the number of raws:");
	    scanf("%d",&m);
	    printf("\nEnter the elements of raw%d:",m);
	    for(r=0;r<i;r++){
	    	if(r==m){
	    		for(c=0;c<j;c++){
	    			printf("%d,",a[r][c]);
	    			sum=sum+a[r][c];
				}
			}
		}
	printf("\nthe sum of raw %d is:%d",m,sum);
	printf("\nEnter the number of colum:");
	scanf("%d",&n);
	printf("\nElements of colum %d are",n);
	for(c=0;c<j;c++){
		if(c==n){
			for(r=0;r<i;r++){
				printf("%d,",a[r][c]);
	s=s+a[r][c];
			}
		}
	}
printf("\nsum of raw %d is: %d",n,s);
}
