#include <stdio.h>
#include <math.h>

void update(int *a,int *b) {
    // Complete this function
    int sum = * a + *b ;
    int absolute = abs(*a - *b);
    *a = sum;
    *b = absolute;   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
