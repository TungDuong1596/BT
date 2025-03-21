int strlen(char a[]){
    int i = 0;
    while(a[i] != '\0'){
        i++;
    }
    return i;
}

void deletechar (char a[], int index){
    int len = strlen(a);
    for(int i = index; i < len; i++){
        a[i] = a[i+1];
    }
    a[len-1] = '\0';
} 