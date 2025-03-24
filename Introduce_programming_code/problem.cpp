#include <iostream>

int main()
{
    const int type1 = 1;
    const int type2 = 2;
    const int type3 = 3;
    const int type4 = 4;
    int age;
    std::cout << "Your age:\n";
    std::cin >> age;
    char sex;
    std::cout << "Your sex:\n";
    std::cin >> sex;
    if ((age < 0) || ((sex != 'M') || (sex != 'm')) || ((sex != 'F') || (sex != 'f')))
    {
        std::cout << "I do not know why" << std::endl;
        return -1;
    }
    if (age >= 21)
    {
        if (sex == 'M' || sex == 'm')
            std::cout << type1 << std::endl;
        else
            std::cout << type2 << std::endl;
    }
    else
    {
        if (sex == 'M' || sex == 'm')
            std::cout << type3 << std::endl;
        else
            std::cout << type4 << std::endl;
    }
    return 0;
}