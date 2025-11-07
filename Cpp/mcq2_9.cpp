#include <iostream>
using namespace std;

int main() {
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;
    int num4 = 40;
    int num5 = 50;

    int *ptr = &num1;
    int *ptr2 = ptr + 3;  

    int result = ptr2 - ptr;
    cout << result;

    return 0;
}