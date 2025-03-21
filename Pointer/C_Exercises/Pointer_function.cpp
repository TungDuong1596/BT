#include "Other_function.h"

// Đảo xâu
void reverse(char a[]){
    int len = strlen(a);
    for(int i = 0; i < len/2; i++){
        char temp = *(a+i);
        *(a+i) = *(a+len-i-1);
        *(a+len-i-1) = temp;
    }
}

//Xóa kí tự
void delete_char(char a[], char c){
    int len = strlen(a);
    for(int i = 0; i < len; i++){
        if(*(a+i) == c){
            deletechar(a, i);
        }
    }
}

//Độn phải
void pad_right(char a[], int n){
    int len = strlen(a);
    for(int i = len; i < len+n; i++){
        *(a+i) = '0';
    }
    *(a+len+n) = '\0';
}

//Độn trái
void pad_left(char a[], int n){
    int len = strlen(a);
    for(int i = len; i >= 0; i--){
        *(a+i+n)=*(a+i);
    }
    for(int i = 0; i < n; i++){
        *(a+i)='0';
    }
}

//Cắt xâu
void truncate(char a[], int n){
    int len = strlen(a);
    if(len > n){
        *(a+n) = '\0';
    }
}

//Đối gương
bool is_palindrome(char a[]){
    int len = strlen(a);
    for(int i=0; i< len/2; i++){
        if(*(a+i)==*(a+len-i)){
            return true;
        }
    }
    return false;
}

//Lọc trái
void trim_left(char a[]){
    int len = strlen(a);
    while(*(a) == '0'){
        deletechar(a, 0);
        len--;
    }
}

//Lọc phải
void trim_right(char a[]){
    int len = strlen(a);
    while(*(a+len-1) == '0'){
        deletechar(a, len-1);
        len--;
    }
}