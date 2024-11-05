/* Write a function template for selection sort that input , sorts and outputs an integers array and a float array.*/

#include <iostream>
using namespace std;

class Number {
public:
    // Template function to get data for an array
    template <class T>
    void getdata(T a[]) {
        cout << "Enter the elements:\n";
        for (int i = 0; i < 5; i++) {
            cin >> a[i];
        }
    }

    // Template function to display elements of an array
    template <class T>
    void display(T a[]) {
        cout << "Elements are: \n";
        for (int i = 0; i < 5; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    // Template function to sort an array using selection sort
    template <class T>
    void sort(T a[]) {
        int min;
        T temp;
        for (int i = 0; i < 5 - 1; i++) { // Only need to go to 4th element
            min = i;
            for (int j = i + 1; j < 5; j++) {
                if (a[j] < a[min]) {
                    min = j;
                }
            }
            if (min != i) {
                temp = a[i];
                a[i] = a[min];
                a[min] = temp;
            }
        }
    }
};


int main() {
    Number n1, n2;

    // Integer array
    cout << "Enter the elements in Array A:\n";
    int a[5];
    n1.getdata(a);
    cout << "Before sorting Array A:\n";
    n1.display(a);
    n1.sort(a);
    cout << "After sorting Array A:\n";
    n1.display(a);

    // Float array
    cout << "Enter the elements in Array B:\n";
    float b[5];
    n2.getdata(b);
    cout << "Before sorting Array B:\n";
    n2.display(b);
    n2.sort(b);
    cout << "After sorting Array B:\n";
    n2.display(b);

    return 0;
}

