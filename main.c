#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int plus(int N1, int N2)
{
	return (N1+N2);
}

int minus(int N1, int N2)
{
	return (N1-N2);
}

int multi(int N1, int N2)
{
	return (N1*N2);
}

int divfun(int N1, int N2)
{
	return (N1/N2);
}

int main(int argc, char *argv[]) {
	
	int n1, n2;
	char c;
	int (*pf)(int, int);
	int result;
	
	printf("input calculation : ");
	scanf("%d %c %d", &n1, &c, &n2);
	
	switch(c)
	{
		case '+':
			pf=plus;
			break;
			
		case '-':
			pf=minus;
			break;
			
		case '*':
			pf=multi;
			break;
			
		case '/':
			pf=divfun;
			break;
	}
	
	result = pf(n1,n2);
	printf("result = %d", result);
	
	return 0;
}
