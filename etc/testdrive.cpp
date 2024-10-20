#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n-1; i++) {
    for (int j = 0; j < n-i-1; j++) {
      if (arr[j] > arr[j+1]) {
        swap(arr[j], arr[j+1]);
      }
    }
  }
}

void printArray(int arr[], int size) {
  for (int i=0; i < size; ++i)
    cout << arr[i] << " ";
  cout << endl;
}

int main() {
  int n;
  cout << "Masukkan jumlah elemen: ";
  cin >> n;

  int arr[n];
  cout << "Masukkan elemen: ";
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  bubbleSort(arr, n);
  cout << "Array setelah diurutkan: \n";
  printArray(arr, n);
  return 0;
}