#include<iostream>
#include<ctime>

int main()
{
    srand(time(nullptr));
    while(1){
        std::cout << rand() % 1000 << std::endl;
    }
    return 0;
}