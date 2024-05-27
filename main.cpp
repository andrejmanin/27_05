#include <iostream>

using namespace std;

void task_1() {
    int n, k;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter k: ";
    cin >> k;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int task_2(int number) {
    if(number == 1) {
        return 1;
    }
    else {
        return task_2(number - 1) * number;
    }
}

void task_3() {
    int number;
    cout << "Enter number: ";
    cin >> number;
    for(int i = 2; i < number; i++) {
        if(number % i == 0) {
            cout << "Number is not prime" << endl;
            return;
        }
    }
    cout << "Number is prime" << endl;
}

int task_4(int number) {
    return number * number * number;
}

int task_5(int number_1, int number_2) {
    if(number_1 > number_2) {
        return number_1;
    }
    else {
        return number_2;
    }
}

bool task_6(int number) {
    if(number > 0) return true;
    return false;
}

int main() {
    //task_1();

    // task_2
    // int number;
    // cout << "Enter number: ";
    // cin >> number;
    // cout << "Factorial of " << number << " is " << task_2(number) << endl;

    //task_3
    // task_3();

    // task_4
    // int number;
    // cout << "Enter number: ";
    // cin >> number;
    // cout << "Cube of " << number << " is " << task_4(number) << endl;

    // task_5
    // int number_1, number_2;
    // cout << "Enter number 1: ";
    // cin >> number_1;
    // cout << "Enter number 2: ";
    // cin >> number_2;
    // cout << "Max number is " << task_5(number_1, number_2) << endl;

    // task_6
    // int number;
    // cout << "Enter number: ";
    // cin >> number;
    // cout << task_6(number) << endl;
    return 0;
}
