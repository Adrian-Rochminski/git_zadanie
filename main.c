#include <stdio.h>

int Policz(int a, int b);


int main() {
    printf("Hello, World!\n");
    printf("W pierszym branchu 2+3= %d", Policz(2,3));
    return 0;
}


int Policz(int a, int b){

    return a+b;

}