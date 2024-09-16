#include <HelloProjConfig.h>
#include <iostream>

void hello_world()
{
    std::cout << "Hello World!\n";
}

void print_version()
{
    std::cout << " Project version is " << HelloProj_VERSION_MAJOR << "."
              << HelloProj_VERSION_MINOR << std::endl;
}

int main()
{
    hello_world();
    print_version();
}