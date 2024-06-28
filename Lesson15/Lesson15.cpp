#include <iostream>

void EvenOdd(int N)
{
    for(int i = 0; i <= N; ++i) {
        std::cout << i << (!(i % 2) ? " - Even!\n" : " - Odd!\n");
    }
}

int main()
{
    const int N = 10;

    for(int i = 0; i <= N; ++i) {
        if(i % 2 == 0) {
            std::cout << i << " - Even!\n";
        } else {
            std::cout << i << " - Odd!\n";
        }
    }

    EvenOdd(N);
}

