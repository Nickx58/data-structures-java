#include <iostream>
using namespace std;
 
int main() {
    int input;
    int match = 0;
    cin >>input;
    for (int i = 0; i<input; i++) {
        int number;
        cin >>number;
        if (number == 2) {
            match = 2;
        } else if (number%2 != 0) {
            match = 1;
        } else if (number % 2 == 0 && number > 2) {
            match = 0;
        }
        cout <<match<<'\n';
    }
    return 0;
}
