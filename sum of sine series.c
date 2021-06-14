#include<stdio.h>
#include<math.h>
void main(){
	int i,n;
	float x,val,t,sum;
	printf("\nEnter the value for x: ");
	scanf("%f",&x);
	printf("\nEnter the value for n: ");
	scanf("%d",&n);
	val = x;
	x = x * 3.14159 /180;
	t = x;
	sum = x;
	
	for(i=1;i<n+1;i++){
		t = (t*pow((double)(-1),(double)(2*i-1)) * x * x)/(2*i*(2*i+1));
		sum += t;
	}
	printf("\nSine value of %f is: %f",val,sum);
}
