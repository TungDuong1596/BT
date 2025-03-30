void BubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

void InsertionSort(int a[], int n) {
    int pos, x;
    for (int i = 1; i < n; i++) { // đoạn a[0] đã sắp
        x = a[i];
        pos = i;
        while (pos > 0 && x < a[pos - 1]) {
            a[pos] = a[pos - 1]; // dời chỗ
            pos--;
        }
        a[pos] = x;
    }
}

void SelectionSort(int a[], int n){
    int min;
    for(int i=0; i < n - 1; i++){
        min = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min]) min = j;
        }
        if (min != i)
	   	   Swap(a[min], a[i]);
    }
}
