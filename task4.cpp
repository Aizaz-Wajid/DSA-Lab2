
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int size = 100;


    char* str = new char[size];

    
    cout << "Enter a string: ";
    cin.getline(str, size);

    
    int length = strlen(str);

    
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

   
    cout << "Reversed string: " << str << endl;

  // Free dynamically allocated memory
    delete[] str;

    return 0;
}
