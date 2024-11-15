#include <stdio.h>

int main(void)
{
    int Taro, Hanako, Jiro;
    
    Taro = 27;  // 太郎の年齢
    Hanako = 59;  // 花子の年齢
    Jiro = 15;  // 次郎の年齢
    
    //変数と定数の比較
    if (Taro == 20)
        printf("太郎は20歳です\n");
    if (Hanako != 20)
        printf("花子は20歳ではありません\n");
    if (Hanako >= 20)
        printf("花子は20歳以上です\n");
    if (Taro < 20)
        printf("次郎は20歳未満です\n");
        
    //変数と変数の比較
    if (Taro > Jiro)
        printf("太郎は次郎より年上です\n");
    
    return 0;
}