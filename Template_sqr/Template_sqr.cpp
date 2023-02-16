/*
Нужно реализовать шаблонную функцию возведения в квадрат, 
которая работает не только с простыми числами, 
но и с векторами. Для этого создайте две реализации шаблонной функции.
*/

#include <iostream>
#include <vector>


template <typename T>
T sqr(T a)
{
    return a * a;
}

template<>
std::vector<int> sqr(std::vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        a[i] *= a[i];
    }
    return a;
}

void show_vector(const std::vector<int>& vec)
{
    for (auto i : vec)
    {
        std::cout << i << (i == vec.back() ? '\n' : ',');
    }
}

int main()
{
    int input = 10;
    std::vector<int> va = { 2, 5, 10 };

    std::cout << "[IN:] " << input << '\n';
    std::cout << "[OUT:] " << sqr<int>(input) << '\n';

    std::cout << "[IN:] ";
    show_vector(va);
    std::cout << "[OUT:] ";
    std::vector<int> v = sqr(va);
    show_vector(v);

    return 0;
}

