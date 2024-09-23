#include <HelloProjConfig.h>
#include <basic/message.h>
#include <iostream>

void hello_world()
{
    for( auto i = 0; i < 10; i++ )
    {        auto j = i + 1;    }
    std::cout << "Hello World!\n";
}

void print_version()
{
    std::cout << " Project version is " << HelloProj_VERSION_MAJOR << "."
              << HelloProj_VERSION_MINOR << std::endl;
}