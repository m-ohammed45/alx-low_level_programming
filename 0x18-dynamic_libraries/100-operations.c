#include <stdio.h>

int add(int c, int n){
    return c+n;
}
int sub(int c, int n){
    return c -n;
}
int mul(int c, int n){
    return c*n;
}
int div(int c, int n){
    if(c == n){
        printf("Error: Division by Zero\n");
        return 0;
    }
    return c / n;
}
int mod(int c, int n){
    if (c == n){
        printf("Error: Division by Zero\n");
        return 0;
    }
    return c % n;
}
