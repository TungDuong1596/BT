//BinarySearch

#include <iostream> 

using namespace std;

void BubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int binarySearch(int a[], int left, int right, int target) {
    int mid = left + (right - left) / 2;
    if (left > right) return -1; 
    if(a[mid] == target) return mid;
    if(a[mid] > target) return binarySearch(a, left, mid - 1, target);
    return binarySearch(a, mid + 1, right, target);
}

int main(){
    int n;
    cout << "Số phần tử của mảng là: " << endl;
    cin >> n;
    int a[100];
    cout << "Các phần tử thuộc mảng: " << endl;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "Số cần tìm là: " << endl;
    int k;
    cin >> k;
    BubbleSort(a, n);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    int result = binarySearch(a, 0, n-1, k);
    cout << "Vị trí của " << k << " trong mảng a[n] là: " << result << endl;
}