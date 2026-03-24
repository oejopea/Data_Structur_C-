#include <iostream>
using namespace std;
#include "DLL.cpp"

int main()
{
    DLL dll;
    dll.addToLast(7);
    dll.addToLast(8);
    dll.addToLast(1);
    dll.addToLast(3);
    dll.addToLast(5);
    dll.deleteElemet(8);
    dll.print();
    dll.printRev();
    return 0;
}

