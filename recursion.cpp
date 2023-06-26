#include <iostream>
#include <vector>
using namespace std;

void recursive(vector<int> &factors,int current) {
    bool isPrime = true;

    for(int i = 2; i <= current / 2; i++) {
        if(current % i == 0) {
           factors.push_back(i);
           current /=  i;
           isPrime = false;
        }
    }

    if(isPrime && current > 1) {
        factors.push_back(current);
    } else if(!isPrime) {
        recursive(factors, current);
    }
}


int main() {
    vector<int> numbers;

    int userInput = 0;
    cout << "Enter a number to be prime factorized: ";
    cin >> userInput;

    recursive(numbers, userInput);

    for(int i = 0; i < numbers.size(); i++) {
        if(i < numbers.size() - 1) {
            cout << numbers[i] << "*";
        } else {
            cout << numbers[i] << endl;
        }
    }

    return 0;
}
