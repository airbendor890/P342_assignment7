#include<stdio.h>
#include<math.h>
#include"utility.h"
#define e 2.71828

double f(double y,double x){
	return 6.0-(2*y)/x;
	
}

int main(){
	double h1=0.5;
	/*Initial value x0,y0*/
	double x_0=3.0;
	double y_0=1.0;
	double x_n=10;
	FILE* fptr;
	fptr=fopen("q1_2_h1.txt","w");
	/*euler explicit method call*/
	Euler_explicit(&f,x_0,y_0,x_n,h1,fptr);
	fclose(fptr);

	double h2=0.2;
	fptr=fopen("q1_2_h2.txt","w");
	Euler_explicit(&f,x_0,y_0,x_n,h2,fptr);
	fclose(fptr);

	double h3=0.08;
	fptr=fopen("q1_2_h3.txt","w");
	Euler_explicit(&f,x_0,y_0,x_n,h3,fptr);
	fclose(fptr);

	double h4=0.01;
	fptr=fopen("q1_2_h4.txt","w");
	Euler_explicit(&f,x_0,y_0,x_n,h4,fptr);
	fclose(fptr);
return 0;
}
