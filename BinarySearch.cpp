#include <iostream>

using namespace std;

void readArray(int a[], int n){
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
}


void bubbleSort(int a[], int n){
    for(int i=0; i < n - 1; i++){
        for(int j= 0; j < n - i - 1; j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}


int binarySearch(int a[],int n, int k){
    for(int i=0; i < n; i++){
        if(a[i]>k){
            return a[i];
        }
    }
    return -1; //Không có số nào lớn hơn k.
}


int main(){
    int n, k;
    cout << "Nhập số lượng phần tử của mảng: \n";
    cin >> n;
    cout << "Nhập số cần so sánh: \n";
    cin >> k;
    int a[n];

    readArray(a, n);
    bubbleSort(a, n);

    int result = binarySearch(a, n, k);
    if(result != -1){
        cout << "Số nhỏ nhất trong dãy lớn hơn "  << k << " là: " << result;
    } else 
    cout << "Không có số nhỏ nhất trong dãy lớn hơn " << k;
    
    return 0;
}