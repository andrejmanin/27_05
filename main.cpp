#include <iostream>

using namespace std;

int task_1(int number, int step) {
    if(step == 1) return number;
    return task_1(number, step - 1) * number;
}

int sum(int number_1, int number_2) {
    int sum = 0;
    for(int i = number_1; i < number_2; i++) {
        sum += i;
    }
    return sum;
}

void task_3(int number_1, int number_2) {
    int sum = 0;
    for(int i = number_1; i < number_2; i++) {
        for (int j = 1; j < i; j++) {
            if(i % j == 0) sum += j;
        }
        if(sum == i) cout << i << endl;
        sum = 0;
    }
}

void card(int number, char suit) {
    cout << char(201) + string(9, char(205)) + char(187) << endl;
    cout << char(186) << number << " " << suit << string(6, ' ') << char(186) << endl;
    for (int i = 0; i < 7; i++) {
        cout << char(186) << string(9, ' ') << char(186) << endl;
    }
    cout << char(186) << string(6, ' ') << suit << " " << number << char(186) << endl;
    cout << char(200) + string(9, char(205)) + char(188) << endl;
}

void number(int number) {
    int sum_1 = 0, sum_2 = 0;
    for(int i = 0; i < 3; i++) {
        sum_1 += number % 10;
        number /= 10;
    }
    for(int i = 0; i < 3; i++) {
        sum_2 += number % 10;
        number /= 10;
    }
    if(sum_1 == sum_2) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    // // Task 1
    // int number, step;
    // cout << "Enter number: ";
    // cin >> number;
    // cout << "Enter step: ";
    // cin >> step;
    // cout << "Result: " << task_1(number, step) << endl;
    // cout << "-----------------------------------\n" << endl;
    //
    // // Task 2
    // int number_1, number_2;
    // cout << "Enter number 1: ";
    // cin >> number_1;
    // cout << "Enter number 2: ";
    // cin >> number_2;
    // cout << "Sum: " << sum(number_1, number_2) << endl;
    // cout << "-----------------------------------\n" << endl;

    // Task 3
    // cout << "Enter number 1: ";
    // cin >> number_1;
    // cout << "Enter number 2: ";
    // cin >> number_2;
    // task_3(number_1, number_2);
    // cout << "-----------------------------------\n" << endl;

    // Task 4
    // for (int i = 1; i <= 10; i++) {
    //     card(i, '♠');
    //     cout << endl;
    // }

    // Task 5
    int num;
    cout << "Enter number: ";
    cin >> num;
    number(num);

    return 0;
}