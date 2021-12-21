#include <stdio.h>

#define LEN 100

int fibonacci(int);

int main()
{
    int fib[LEN];

    fibonacci(LEN);

    return 0;
}

int fibonacci(int num)
{
    int num1;
    int num2;
    int i;
    int fib[LEN];

    for (i=1;i<LEN + 1;i++)
        num1 = fib[i-1];
        num2 = fib[i];
        fib[i+1] = num1 + num2;
    if (fib[i] == LEN)
        return fib[];
    else
        return fibonacci(int num + 1);
}
