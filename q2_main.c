#include<stdio.h>
#include"utility.h"

double f(double y1,double y,double x){
/*f:f(y1,y,x)*/
	return 1-x-y1;

}

int main(){
	double h1=0.5;
	double x_0=0;
	double y_0=2;
	double y1_0=1;/*y'(0)=1*/
	double x_n=5;
	FILE* file1;
	file1=fopen("q2_file1.txt","w");

	RK4(&f,x_0,y_0,y1_0,x_n,h1,file1);
	fclose(file1);

	double h2=0.2;
	file1=fopen("q2_fileh2.txt","w");
	RK4(&f,x_0,y_0,y1_0,x_n,h2,file1);
	fclose(file1);

	double h3=0.08;
	file1=fopen("q2_fileh3.txt","w");
	RK4(&f,x_0,y_0,y1_0,x_n,h3,file1);
	fclose(file1);

	double h4=0.01;
	file1=fopen("q2_fileh4.txt","w");
	RK4(&f,x_0,y_0,y1_0,x_n,h4,file1);
	fclose(file1);
}
