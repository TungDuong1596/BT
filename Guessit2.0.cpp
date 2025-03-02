#include <iostream>
#include <cstdlib> // Để sử dụng rand() và srand()
#include <ctime>   // Để sử dụng time()
using namespace std;

// Hàm khởi tạo số bí mật
int generateSecretNumber() {
    return rand() % 100 + 1; // Số bí mật từ 1 đến 100
}

// Hàm thực hiện vòng lặp đoán
bool playGuessingGame() {
    int secretNumber = generateSecretNumber(); // Tạo số bí mật
    int guess = 0;  // Biến lưu số đoán của người chơi
    int attempts = 0;  // Biến đếm số lần đoán
    int health = 100; // Máu của người chơi

    cout << "Hãy cố gắng đoán số bí mật (từ 1 đến 100)!" << endl;

    // Vòng lặp cho đến khi người chơi đoán đúng hoặc hết máu
    do {
        cout << "Nhập số đoán của bạn: ";
        cin >> guess;

        // Kiểm tra nhập hợp lệ
        if (guess < 1 || guess > 100) {
            cout << "Vui lòng nhập số trong khoảng 1-100!" << endl;
            continue;
        }

        attempts++; // Tăng số lần đoán
        health -= 10; // Trừ 10 máu mỗi lần đoán sai

        if (guess > secretNumber) {
            cout << "Số bạn đoán lớn hơn số bí mật. Hãy thử lại!" << endl;
        } else if (guess < secretNumber) {
            cout << "Số bạn đoán nhỏ hơn số bí mật. Hãy thử lại!" << endl;
        } else {
            cout << "🎉 Chúc mừng! Bạn đã đoán đúng số bí mật: " << secretNumber << "!" << endl;
            cout << "Bạn đã đoán đúng sau " << attempts << " lần." << endl;
            return true; // Người chơi thắng
        }

        cout << "Máu của bạn: " << health << endl;

        // Kiểm tra nếu máu hết
        if (health <= 0) {
            cout << "😢 Bạn đã hết máu và không đoán được số bí mật! Số bí mật là: " << secretNumber << endl;
            return false; // Người chơi thua
        }
    } while (true);
}

int main() {
    srand(time(0)); // Khởi tạo số ngẫu nhiên
    cout << "🎮 Chào mừng đến với trò chơi đoán số Guess It! 🎮" << endl;

    int playAgain;
    do {
        bool isWinner = playGuessingGame(); // Chơi trò chơi
        if (!isWinner) {
            cout << "Bạn đã chết! Bạn có muốn chơi lại không? (1: Có, 0: Không): ";
            cin >> playAgain;
        } else {
            cout << "Bạn có muốn chơi lại không? (1: Có, 0: Không): ";
            cin >> playAgain;
        }
    } while (playAgain == 1);

    cout << "Cảm ơn bạn đã chơi! Hẹn gặp lại. 👋" << endl;
    return 0;
}
