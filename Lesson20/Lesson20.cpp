#include <iostream>

enum class Result
{
    SUCCESS,
    FAIL,
    ERROR_WRITE,
    ERROR_READ
};

enum class Another
{
    WORK,
    SUCCESS,
};

Result DoWork()
{
    return Result::SUCCESS;
}

enum Alphabet
{
    A,
    B,
    C
};

int main()
{
    std::cout << A;

    Result workResult = DoWork();
    if(workResult == Result::SUCCESS) {

    }

    Another anotherRes = Another::WORK;
}

