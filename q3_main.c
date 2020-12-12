#include<stdio.h>
#include"utility.h"
#define e 2.71828

double f(double y1,double y,double x){
/*f:f(y1,y,x)*/
	return y1+1;
}
int main(){
	double h=0.02;/*step size*/
	double z;
	printf("give guesss value of slope at x=a:\n");
	scanf("%lf",&z);
	FILE * fptr;
	fptr=fopen("q3_output.txt","w");
	
	printf("\ny(b)=%lf",shoot(&f,0,1,1,2*(e-1),z,h,fptr));
	
	return 0;
}

/*output*/
/*
give guesss value of slope at x=a:
5

y(b)=3.436560
*/
