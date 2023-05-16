/*显示出一个直角在左下方的等腰直角三角形（函数版）*/
#include<stdio.h>

void put_stars(int n){

    while(n-->0)
    putchar('*');
}

int main(void){

    int len,i;

    printf("生成一个直角在左下方的等腰直角三角形。\n");
    printf("短边：");
    scanf("%d",&len);

    for(i=0;i<len;i++){
        put_stars(i+1);
        putchar('\n');
    }

    return 0;
}