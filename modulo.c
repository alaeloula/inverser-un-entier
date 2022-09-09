#include <stdio.h>
#include <string.h>
#include <math.h>
invers(int a);



int invers(int a){
	int c=0;
	while(a!=0){
	  
	  
     int rest = a%10;
     c=c*10+rest;
	a/=10;
	
	}
	return c;
}
main()
{
	int c =invers(5876);
	printf("%d",c);
		
	}

