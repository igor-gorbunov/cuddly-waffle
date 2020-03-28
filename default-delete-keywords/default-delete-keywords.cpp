#include "default-delete-keywords.hpp"

/*
template <typename T>
void run(T val) = delete;

void run(long val)
{
    std::cout << "run: val = " << val << std::endl;
}
*/

template <typename T>
void run(T val)
{
    std::cout << "run: " << val << std::endl;
}

void run(long int val) = delete;

int main()
{
    run(2);
    //run(3L);
    run('s');
    run("string");

    return 0;
}
