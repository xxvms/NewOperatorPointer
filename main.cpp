//introduction of NEW operator
#include <iostream>
#include <cstring>

int main()
{
    char const* str{"Idle hands are the devils workshop"};
    int length = strlen(str);                   // get length of str
    
    char* ptr = nullptr;                        // make a pointer to char
    ptr = new char[length + 1];                 // set aside memory string length + '\0'
    strcpy(ptr, str);                           // copy str to new memory area str
    
    std::cout << "ptr= " << ptr << std::endl;    // shows that ptr is now in str
    
    delete[]ptr;                                // release ptr memory
    std::cout << "after delete!" << ptr << "<-" << std::endl;
    system("pause");
    return 0;
}