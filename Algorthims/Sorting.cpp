#include <iostream>
#include <vector>
using namespace std;

// Bubble Sort

void BubbleSort(int arr[] , int n){

    for(int i=0; i<n-1; i++){
        bool isSwap = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }

        if(!isSwap){
            return;
        }
    }
}

void printArray(int arr[] , int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

// Selection Sort

void SelectionSort(int arr[] , int n){

    for(int i=0; i<n-1; i++){
        int smallestIdx = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[smallestIdx]){
                smallestIdx = j;
            }
        }

        swap(arr[i],arr[smallestIdx]);
    }
}

// Quick Sort

void InsertionSort(int arr[] , int n){

    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;

        while(prev >= 0 && arr[prev] > curr){
            arr[prev+1] = arr[prev];
            prev--;
        }

        arr[prev+1] = curr;
    }
}

int main(){

    int arr[] = {1 , 3 ,2 , 9 , 4};
    int n = 5;


    cout << "Bubble Sort : " ;
    BubbleSort(arr , n);
    printArray(arr , n);
    cout << endl;

    cout << "Selection Sort : ";
    SelectionSort(arr , n);
    printArray(arr , n);
    cout << endl;

    cout << "Insertion Sort : ";
    InsertionSort(arr , n);
    printArray(arr , n);
    cout << endl;

    return 0;
}