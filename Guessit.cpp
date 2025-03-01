#include <iostream>
#include <cstdlib> // Để sử dụng rand() và srand()
#include <ctime>   // Để sử dụng time()
using namespace std;

// Hàm khởi tạo số bí mật
int generateSecretNumber() {
    return rand() % 100 + 1; // Số bí mật từ 1 đến 100
}

// Hàm thực hiện vòng lặp đoán
void playGuessingGame(int secretNumber) {
    int guess = 0; // Biến để lưu số đoán của người chơi
    int attempts = 0; // Biến để đếm số lần đoán

    cout << "Hãy cố gắng đoán số bí mật!" << endl;

    // Vòng lặp cho đến khi người chơi đoán đúng
    do {
        cout << "Nhập số đoán của bạn: ";
        cin >> guess; // Nhập số đoán từ người chơi
        attempts++; // Tăng số lần đoán

        if (guess > secretNumber) {
            cout << "Số bạn đoán lớn hơn số bí mật. Hãy thử lại!" << endl;
        } else if (guess < secretNumber) {
            cout << "Số bạn đoán nhỏ hơn số bí mật. Hãy thử lại!" << endl;
        } else {
            cout << "Chúc mừng! Bạn đã đoán đúng số bí mật: " << secretNumber << "!" << endl;
            cout << "Bạn đã đoán đúng sau " << attempts << " lần." << endl;
        }
    } while (guess != secretNumber); // Tiếp tục cho đến khi đoán đúng
}

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = generateSecretNumber(); // Tạo số bí mật
    cout << "Chào mừng đến với trò chơi Guess It!" << endl;

    playGuessingGame(secretNumber); // Bắt đầu trò chơi

    return 0;
}