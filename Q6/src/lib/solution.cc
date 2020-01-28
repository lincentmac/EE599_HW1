#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

int Solution::FactorialNonRecur(int n) {
  if (n < 0) {
    return -1;
  }

  if (n == 0) {
    return 1;
  }

  int res = 1;
  for (int i = 1; i <= n; i++) {
    res *= i;
  }
  return res;
}

int Solution::FactorialRecur(int n) {
  if (n < 0) {
    return -1;
  }

  if (n == 0) {
    return 1;
  }

  return n * FactorialRecur(n - 1);
}

