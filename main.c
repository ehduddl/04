#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t;
    printf("input the year : ");
    scanf("%d",&t);
    
    if(t%4==0 && t%10!=0 || t%400==0)
    
    printf("%d is leap year!",t);
	
	else
	
	printf("%d is not leap year!",t);

}
