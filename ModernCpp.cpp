// ModernCpp.cpp : 
// Diese Datei enthält die Funktion "main". 
// Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void print_vector (const std::string &description, const std::vector <int> &v);

int main()
{
    std::cout << "Modern C++ -- start!\n";

    std::vector<int> v = { 5, 9, -1, 200, 0, -22, 8, 100, 2, -220};
    
    print_vector("Content of vector        : ", v);
    
    sort(v.begin(), v.end());
    
    print_vector("Content of sorted vector : ", v);
    
    std::cout << "sizeof (bool)   = " << sizeof(bool)   << "\n";
    std::cout << "sizeof (short)  = " << sizeof(short)  << "\n";
    std::cout << "sizeof (char)   = " << sizeof(char)   << "\n";
    std::cout << "sizeof (float)  = " << sizeof(float)  << "\n";
    std::cout << "sizeof (double) = " << sizeof(double) << "\n";
    std::cout << "sizeof (void*)  = " << sizeof(void*)  << "\n";

    std::cout << "Now for some pointer handling" << std::endl;
    
    auto *a = new int();
    *a = 2;

    auto *b = static_cast<void*>(a);
    auto *c = static_cast<int*>(b);
    
    std::cout << "value *a = " << *a << std::endl;
    //std::cout << "value *b = " << *b << std::endl;
    std::cout << "value *c = " << *c << std::endl;

    delete a;

    auto *a1 = new int(3);
    auto *b1 = reinterpret_cast<void*>(a1);
    auto *c1 = reinterpret_cast<int*>(b1);
    
    std::cout << "value *a1 = " << *a1 << std::endl;
    //std::cout << "value *b1 = " << *b1 << std::endl;
    std::cout << "value *c1 = " << *c1 << std::endl;

    delete a1;

    std::cout << "Modern C++ -- The end." << std::endl;
    return 0;
}

void print_vector (const std::string &description, const std::vector <int> &v) {
    
    std::cout << description << " = ";
    
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i] << ((i != v.size()-1) ? ", " : "");
    }
    
    std::cout << "\n";
}
