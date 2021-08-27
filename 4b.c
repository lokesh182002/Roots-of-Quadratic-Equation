#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int a,b,c,d,deno;
	float root1,root2;
	printf("Enter the values for a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	d=(b*b)-(4*a*c);
	deno=2*a;
	if(d>0)
	{
		printf("\nReal Roots");
		root1=(-b+sqrt(d))/deno;
		root2=(-b-sqrt(d))/deno;
		printf("\nROOT1=%f \t ROOT2=%f",root1,root2);
		
	}
else if(d==0)
{
	printf("Equal Roots");
	root1=(-b)/deno;
	root2=(-b)/deno;
	printf("\nROOT1=%f \t ROOT2=%f",root1,root2);
}
else 
{
	printf("Imaginary Roots");
	
}
return 0;
}
