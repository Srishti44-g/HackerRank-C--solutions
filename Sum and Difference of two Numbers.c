#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int i,j,a,b;
    float f,g,x,y;
    scanf("%d %d ",&a,&b);
    scanf("%f %f",&x,&y);
    i = a+b;
    j = a-b;
    f = x+y;
    g = x-y;
    printf("%d %d\n",i,j);
    printf("%0.1f %0.1f\n",f,g);
    return 0;
}
