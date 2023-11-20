#include <iostream>
#include <vector>
#include <list>
#include <deque>

void Print(const std::vector<int>& container, const std::string& symb)
{
    auto iter = container.begin();

    if (iter != container.end()) 
    {
        std::cout << *iter;
        ++iter;
    }

    for (; iter != container.end(); ++iter) 
    {
        std::cout << symb << *iter;
    }
}


void Print(const std::list<int>& container, const std::string& symb)
{
    auto iter = container.begin();

    if (iter != container.end()) 
    {
        std::cout << *iter;
        ++iter;
    }

    for (; iter != container.end(); ++iter)
    {
        std::cout << symb << *iter;
    }
}

void Print(const std::deque<double>& container, const std::string& symb) 
{
    auto iter = container.begin();

    if (iter != container.end()) 
    {
        std::cout << *iter;
        ++iter;
    }

    for (; iter != container.end(); ++iter) 
    {
        std::cout << symb << *iter;
    }
}


int main() 
{
    std::cout << "vector" << std::endl;
    std::vector<int> v = { 0, 10, 15, 20 };
    Print(v, " , ");

    std::cout << std::endl;

    std::cout << "list" << std::endl;
    std::list<int> l = { 0, 10, 15, 20 };
    Print(l, " , ");

    std::cout << std::endl;

    std::cout << "deque" << std::endl;
    std::deque<double> deque = { 1.1, 1.23, 1.234 };
    Print(deque, " , ");

    std::cout << std::endl;

    return 0;
}
