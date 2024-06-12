#include <iostream>
#include <string>
using namespace std;

// تابع برای بررسی میزان سختی رمز عبور
int passwordStrength(string password) {
    int strength = 0;
    int length = password.length();

    // بررسی طول رمز عبور
    if (length >= 6) {
        strength += 20;
    }

    // بررسی وجود عدد در رمز عبور
    for (char c : password) {
        if (isdigit(c)) {
            strength += 20;
            break;
        }
    }

    // بررسی وجود حروف خاص در رمز عبور
    for (char c : password) {
        if (!isalnum(c)) {
            strength += 20;
            break;
        }
    }

    // بررسی وجود حروف بزرگ در رمز عبور
    for (char c : password) {
        if (isupper(c)) {
            strength += 20;
            break;
        }
    }

    // بررسی وجود حروف کوچک در رمز عبور
    for (char c : password) {
        if (islower(c)) {
            strength += 20;
            break;
        }
    }

    return strength;
}

int main() {
    string password;

    // دریافت رمز عبور از کاربر
    cout << "Enter your password: ";
    cin >> password;

    // محاسبه و نمایش میزان سختی رمز عبور
    int strength = passwordStrength(password);
    cout << "Password strength: " << strength << "%" << endl;

    return 0;
}
