#include <iostream>

using namespace std;

void createArray(int* arr, int size){
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 101; 
    }
}

void alertArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printEvenNumbers(int* arr, int size) {
    cout << "An even array: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    const int arrSize = 20;
    int randomArray[arrSize];

    srand(time(nullptr)); 
    
    int* ref = randomArray;

    createArray(ref, arrSize);
    
    cout << "index 3 of Arr: " << *(ref + 3) << endl;

    cout << "Random Array: ";

    alertArray(ref, arrSize);
    printEvenNumbers(ref, arrSize);

    return 0;
}