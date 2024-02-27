#include<stdio.h>

void fibonacci(int n){
    int i, t1 = 0, t2 = 1, nextTerm;
    
    printf("Fibonacci series: ");

    for (i = 1; i <= n;i++) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int main(){
    int n;
    printf("Kaç adet Fibonacci sayýsý yazdýrmak istiyorsunuz? ");
    scanf("%d",&n);
    
    fibonacci(n);

    return 0;
}

