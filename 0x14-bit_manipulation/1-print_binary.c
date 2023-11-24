#include <stdio.h>
void print_binary(unsigned long int n) {
    int i;    
    int size = sizeof(unsigned long int) * 8;

    for (i = size - 1; i >= 0; i--) {
        
        int bit = (n >> i) & 1;   
        putchar(bit + '0');
    }
    putchar('\n');
}

int main() {
    unsigned long int number = 1;
    printf("Binary representation of %lu: ", number);
    print_binary(number);

    return 0;
}
