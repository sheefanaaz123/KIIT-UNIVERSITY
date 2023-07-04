#include<stdio.h>
#include<math.h>
int main() {
	int x[10], y[10],i,d[10];
	printf("Enter x coordinates of 10 points : ");
	for(i=0;i<10;i++){
			scanf("%d",&x[i]);
	}
	printf("Enter y coordinates of 10 points : ");
	for(i=0;i<10;i++){
		scanf("%d", &y[i]);
	}
	
	printf("\nDistance between 1st and 10 th point\n");
	d[0]=sqrt((x[0]-x[9])*(x[0]-x[9])+(y[0]-y[9])*(y[0]-y[9]));
    printf("\n%d",d[0]);
    
    printf("\nDistance between 2nd and 9th point\n");
	d[0]=sqrt((x[1]-x[8])*(x[1]-x[8])+(y[1]-y[8])*(y[1]-y[8]));
    printf("\n%d",d[1]);
    
    printf("\nDistance between 3rd and 8th point\n");
	d[0]=sqrt((x[2]-x[7])*(x[2]-x[7])+(y[2]-y[7])*(y[2]-y[7]));
    printf("\n%d",d[2]);
    
    printf("\nDistance between 4th and 7th point\n");
	d[0]=sqrt((x[3]-x[6])*(x[3]-x[6])+(y[3]-y[6])*(y[3]-y[6]));
    printf("\n%d",d[3]);
    
    printf("\nDistance between 5st and 6th point\n");
	d[0]=sqrt((x[4]-x[5])*(x[4]-x[5])+(y[4]-y[5])*(y[4]-y[5]));
    printf("\n%d",d[4]);
	return 0;
}
