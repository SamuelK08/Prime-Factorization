#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


vector<int> primeFactors(int userInput) {
  vector<int> result;
  while (userInput % 2 == 0) {
    result.push_back(2);
    userInput /= 2;
  }

  for(int i = 3; i <= sqrt(userInput); i = i + 2) {
    while(userInput % i == 0) {
      result.push_back(i);
      userInput /= i;
    }
  }

  if(userInput > 2) {
    result.push_back(userInput);
  }
  
  return result;
}

int main() {
  vector<int> result;
  int userInput = 0;
  
  cin >> userInput;
  result = primeFactors(userInput);

  for(int i = 0; i < result.size(); i++) {
    if(i != result.size() - 1) {
      cout << result[i] << "*";
    } else {
      cout << result[i];
    }    
  }

  return 0;
}
