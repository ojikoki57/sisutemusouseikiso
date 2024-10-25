#include <stdio.h>

int main()
{
    int k, l;
    printf("how many student?");
    scanf("%d", &k);
    
    printf("how many student?");
    scanf("%d", &l);
    
    int sum = k + l;
    printf("All student: %d\n", sum);
    
    return 0;
    
}