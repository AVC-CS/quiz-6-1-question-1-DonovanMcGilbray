#include <iostream>
using namespace std;

void getTwoValues(int &begin, int &end) {
  cout << "Enter two integer values (begin < end): ";
  cin >> begin >> end;
  while(begin >= end) {
    cout << "Begin must be less than end\n";
    cout << "Enter two integer values (begin < end): ";
    cin >> begin >> end;
}

int isPrime(int num) {
  if(num <= 3) {
    return true;
  }
  for(int i = 4; i * i <= num; i++) {
    if(num % i == 0) {
      return false;
    }
  return true;
  }
}

int getNextPrime(int begin) {
  int nextPrime = begin + 1;
  while(!isPrime(nextPrime)) {
    nextPrime++;
  }
  return nextPrime;
}

int getPrevPrime(int end) {
  int prevPrime = end - 1;
  while(!isPrime(prevPrime)) {
    prevPrime--;
  }
  return prevPrime;
}
