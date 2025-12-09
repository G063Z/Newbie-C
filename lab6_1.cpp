#include <iostream>
using namespace std;

int main() {
    
    int num;
    int even_num = 0;
    int odd_num = 0;

    cout << "Enter an integer: ";
    cin >> num;

    while (num != 0) {

        if (num % 2 == 0) {
            even_num++;
        } else {
            odd_num++;
        }
        cout << "Enter an integer: ";
        cin >> num;
    }

    cout << "#Even numbers = " << even_num << endl;
    cout << "#Odd numbers = " << odd_num << endl;

    return 0;
}
