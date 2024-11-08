#include <stdio.h>

int a = 10; // Global value
void print(); // Function prototype

void print()  // Defining function
{  
    printf("Global: %d\n", a);
}

int main(){
    printf("Global: %d\n", a);
    int a = 20; // Local value
    printf("Local: %d\n", a);
    print();
    

    return 0;
}