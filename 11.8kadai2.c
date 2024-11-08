#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("睡眠時間を入力してください");
    scanf("%d", &a);
    printf("睡眠時間を入力してください");
    scanf("%d", &b);
    
    if(a > b)
    {
        printf("aのほうが睡眠時間が多いです");
    }
    
    else if(a < b)
    {
        printf("bのほうが睡眠時間が多いです");
    }
    
    else
    {
        printf("睡眠時間は同じです");
    }
    
   
    return 0;
}