#include <iostream>

int main() {
    int a,b;
    std::cout<<"input a: ";
    std::cin>>a;
    std::cout<<"input b: ";
    std::cin>>b;
    int * pa = &a;
    int * pb = &b;
    *pa= *pa+*pb;
    *pb=*pa-*pb;
    *pa=*pa-*pb;
    std::cout<<"a: "<<a<<"\n";
    std::cout<<"b: "<<b<<"\n";
}