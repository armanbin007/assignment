#include <stdio.h>
int main(){
    int X, Y;
    scanf("%d %d", &X, &Y);
    int mul = X;
    mul = X * Y;
    printf("Multiplication: %d\n", mul);
    
    int div = X;
    div = X / Y;
    printf("Division: %d\n", div);
    
    return 0;
}