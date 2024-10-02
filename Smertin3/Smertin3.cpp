// Smertin3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <clocale>
#include <string>
#include <ctime>
using namespace std;

//#2
string reverseListNums(int x) {
    string r;
    for (int i = x; i >= 0; i--) {
        if (!r.empty()) {
            r += " ";
        }
        r += to_string(i);
    }
    return r;
}
//#4
int pow(int x, int y) {
    int s = 1;
    for (int i = 0; i < y;) {
        s *= x;
        i++;
    }
    return s;
}
//#6
bool equalNum(int x) {
    int sr = x % 10;
    while (x > 0) {
        if (sr != (x % 10)) {
            return false;
        }
        x = x / 10;
    }
    return true;
}
//#8 
void leftTriangle(int x) {
    int j;
    for (int i = 1; i <= x; i++) {
        j = i;
        while (j > 0) {
            cout << "*";
            j--;
        }
        cout << endl;
    }
}
//#10
void guessGame() {
    int x, y, k = 0;
    y = rand() % 10;
    cout << "Введите число от 0 до 9(включительно): ";
    cin >> x;
    while (x != y) {
        cout << "Не угадали( Попробуйте еще раз! Введите число: ";
        cin >> x;
        k++;
    }
    cout << "Есть попадание! Поздравляю вы угадали!" << endl;
    cout << "Вам потребовалось " << k+1 << " попыток" << endl;
}
int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(0));
    //#2
    int str;
    cout << "№2. Введите число: ";
    cin >> str;
    cout << reverseListNums(str) << endl;
    //#4
    int x, y;
    cout << "№4. Введите два числа: ";
    cin >> x >> y;
    cout << pow(x, y) << endl;
    //#6
    int c;
    cout << "№6. Введите число: ";
    cin >> c;
    cout << equalNum(c) << endl;
    //#8
    int f;
    cout << "№8. Введите число: ";
    cin >> f;
    leftTriangle(f);
    //#10
    guessGame();
}

