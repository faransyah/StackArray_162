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

    void pop() {
        if (empty()) {//step 1
            cout << "\nStack is empty. cannot pop." << endl; // 1.a
            return; //1.b
        }

        cout << "\nThe popped element is:" << stack_Array[top] << endl; //step 2
        top--; //step 3 decrement
    }

    //method fo check if data is empty
    bool empty() {
        return (top == -1);
    }
