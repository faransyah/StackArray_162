#include <iostream>
#include <string>

using namespace std;

class stackArray {
private:
    int stack_Array[5];
    int top;
public:
    //constructor
    stackArray() {
        top = -1;
    }

    int push(int element) {
        if (top == 4) {
            cout << "Number of data exceeds the limit." << endl;
            return 0;
        }

        top++;
        stack_Array[top] = element; //step3
        cout << endl;
        cout << element << "Ditambahkan(pushed)" << endl;

        return element;
   
    }
    
    