#include <iostream>

using namespace std;
 
int i = 9;
char c = 76;
float f = 4.123456;
double d = 4.123456;
bool b = true;
bool b2 = false;
 
int main(){
    
    cout << "i = " << i << '\n';
    cout << "c = " << static_cast<int>(c) << '\n';
    cout << "c = " << c << '\n';
    cout << "f = " << f << '\n';
    cout << "d = " << d << '\n';
    cout << "b = " << b << '\n';
    cout << "b2 = " << b2 << '\n';
    
    
    cout << "i: " << &i << '\n';
    cout << "c (char): " << &c << '\n';
    cout << "c: " << static_cast<void*>(&c) << '\n';
    cout << "f: " << &f << '\n';
    cout << "d: " << &d << '\n';
    cout << "b: " << &b << '\n';
    cout << "b2: " << &b2 << '\n';
    
    cout << "size: " << reinterpret_cast<size_t>(&i) << '\n';
    cout << "size of int: " << sizeof(i) << '\n';
    cout << "size of char: " << sizeof(c) << '\n';
    cout << "size of float: " << sizeof(f) << '\n';
    cout << "size of float with error: " << reinterpret_cast<size_t>(&d) - reinterpret_cast<size_t>(&f) << '\n';
    cout << "size of double: " << sizeof(d) << '\n';
    cout << "size of bool: " << sizeof(b) << '\n';
    
    return 0;
}