
#include <iostream>
using namespace std;

// Part 1
void analyze_pointer(int* ptr) {
    
    cout << "Memory location: " << ptr << endl;

   
    cout << "Value: " << *ptr << endl;
}

int main() {

   
    int iValue;
    iValue = 50;

    cout << "Stack variable:" << endl;

   
    analyze_pointer(&iValue);


    
    int* pValue = new int;

    *pValue = 100;

    cout << "\nHeap variable:" << endl;

    analyze_pointer(pValue);

   
    delete pValue;

    return 0;
}

