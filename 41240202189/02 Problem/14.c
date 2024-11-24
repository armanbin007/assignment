#include <stdio.h>
int main(){
    float X;
    scanf("%f", &X);
    int A, B;
    if(X > 0){
        A = X+1;
    } else{
        A = X-1;
    }
        B = X;
    float C = X;
    if(X < 0){
        C = -X;
    }
    printf("A = %d, B = %d, C = %.1f\n", A,B,C);
    
    return 0;
}
