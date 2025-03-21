#include <iostream>

using namespace std;

int main(){
    char c = 'A', d = 'B';
    //địa chỉ của c là 0x1234, địa chỉ của b là 0x5678
    char* p1 = &c;
    //p1 trỏ đến địa chỉ của c (0x1234)
    char* p2 = &d;
    //p2 trỏ đến địa chỉ của c (0x5678)
    char* p3; //p3 chưa có giá trị ban đầuđầu

    p3 = &d; // p3 trỏ đến d, tức p3=0x5678
    cout << "*p3 = " << *p3 << ", p3 = " << p3 << endl;
    //Output:  *p3 = B  (Giá trị)
    //          p3 = 0x5678 (Địa chỉ ô)

    p3 = p1; // p3 = &c -> p3 trỏ đến c, tức p3=0x1234
    cout << "*p3 = " << *p3 << ", p3 = " << p3 << endl;
    //Output:  *p3 = A  (Giá trị)
    //          p3 = 0x1234 (Địa chỉ ô)

    *p1 = *p2; // giá trị của p1 được gán bằng giá trị của p2 -> *p1 = 'B', nhưng địa chỉ p1 giữ nguyênnguyên
    cout << "*p1 = " << *p1 << ", p1 = " << p1 << endl;
    //Output:  *p3 = BB  (Giá trị)
    //          p3 = 0x1234 (Địa chỉ ô)

}

