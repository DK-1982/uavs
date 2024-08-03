#include <iostream>

int fib(int n)
{
    // вычисляем числа фибоначи
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    std::cout<<"Fibonacchi number 1 :"<<fib(0)<<std::endl;
    std::cout<<"Fibonacchi number 1 :"<<fib(1)<<std::endl;
    std::cout<<"Fibonacchi number 1 :"<<fib(2)<<std::endl;
    std::cout<<"Fibonacchi number 1 :"<<fib(3)<<std::endl;
    std::cout<<"Fibonacchi number 1 :"<<fib(4)<<std::endl;
}
