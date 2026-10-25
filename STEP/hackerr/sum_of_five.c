#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int sum=0,r;
    while(n>0)
    {
        r=n%10;
        sum+=r;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}