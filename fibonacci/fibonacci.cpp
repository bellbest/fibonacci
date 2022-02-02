#include<stdio.h>
int mem[100] = {  };

int fibonacci(int n) {
    if (n == 0) {
        
        return 0;
    }
    else if (n == 1) {
       
        return 1;
    }
    if (mem[n] == 0) {
        mem[n] = fibonacci(n - 1) + fibonacci(n - 2);
    }
    return mem[n];
}

int main() {
    int a;
    int n;
    scanf_s("%d", &a);
    
    for (int i = 0; i < a; i++) {
        scanf_s("%d", &n);
        if(n==0)
            printf("%d %d\n", fibonacci(n+1), fibonacci(n));
        else
            printf("%d %d\n", fibonacci(n - 1), fibonacci(n));


    }

    
    return 0;

    
}