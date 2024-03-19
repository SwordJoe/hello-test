#include<iostream>
#include<ctime>
#include<unistd.h>
int main()
{
    srand(time(nullptr));
    while(1){
        std::cout << rand() % 1000 << std::endl;
        std::cout << rand() % 100 << std::endl;
        sleep(1);
    }
    return 0;
}