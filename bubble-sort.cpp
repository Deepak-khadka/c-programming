#include <iostream>
using namespace std;

// Bubble sort function in C++
void bubbleSort(int array[], int size) {
 // loop to access each array element
 for (int step = 0; step < size; ++step) {
 
     // loop to compare array elements
     for (int i = 0; i < size - step; ++i) {
     // compare two adjacent elements

        if (array[i] > array[i + 1]) {
            int temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
        }
     }
   }
}

int main() 
{
    int sortingValue[7] = { 3,5,7,8,1,9,4 };
    int size = 7;
    bubbleSort(sortingValue, size);

    // Display the sorted value
    for (int i = 0; i < size; i++) {
        cout<<sortingValue[i]<<endl;
    }
    
}
