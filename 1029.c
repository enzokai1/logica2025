#include <stdio.h>

int calls; 

int fibonacci(int n) {
    calls++; 
    
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        int X;
        scanf("%d", &X);
        
        calls = 0; 
        int result = fibonacci(X);
        
        
        calls = calls - 1;
        
        printf("fib(%d) = %d calls = %d\n", X, calls, result);
    }
    
    return 0;
}
