#include <stdio.h>

int Policz(int a, int b);


int main() {
    printf("Hello, World!\n");
    printf("W pierszym branchu 2*3= %d\n", Policz(2,3));
    printf("zmienione");

    return 0;
}


int Policz(int a, int b){

    return a*b;

}