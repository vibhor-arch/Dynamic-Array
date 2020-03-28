#include<iostream>
using namespace std;
#include "DynamicArray.cpp"

int main()
{
    DynamicArray d1;
    d1.addElement(10);
    d1.addElement(20);
    d1.addElement(30);
    d1.addElement(40);
    d1.addElement(50);
    d1.addElement(60);
    d1.addElement(70);
    d1.print();

    DynamicArray d2(d1);
    d1.add(1,100);
    d2.print();
    d1.print();
}

