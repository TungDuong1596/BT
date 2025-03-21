#include <iostream>

using namespace std;

int main(){
    int *p;
    int i;
    int k;
    i = 4; //gán giá trị của i = 4
    k = i; //k = i = 4 
    p = &i; // con trỏ p trỏ đến địa chỉ của ii

    //lệnh nào trong số các lệnh dưới đây sẽ gán cho i giá trị 5?
    // k = 5;   S   i = 4 vì k được gán bằng giá trị của i
    
    // *k = 5;  S   lỗi vì k không phải con trỏ
    
    // p = 5;   S   lỗi vì p là con trỏ và địa chỉ của p không thể là 5
    
    // *p = 5;  Đ   Trước khi qua câu lệnh: con trỏ p có giá trị là 4 và địa chỉ của i (vì p = &i)
    //              SSau khi qua câu lệnh: con trỏ p có giá trị là 5 và địa chỉ của i

    *p=5;
    cout << i;
}