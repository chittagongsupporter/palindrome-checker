#include <iostream>
// checks whether the string is a palindrome
// returns true if the string is a palindrome
// else returns false if it is not
bool checkPalindrome(std::string stringToCheck) {
  int i = 0;
  int j = stringToCheck.length() - 1;
  while (i < j) {
    if (stringToCheck[i] != stringToCheck[j]) {
      return false;
    }
    i++;
    j--;
  }
  return true;
}

// main execution of flow
int main() {
  std::cout << "This program checks if a string is a palindrome." << std::endl;
  std::cout << checkPalindrome("racecar") << std::endl;

  std::cout << checkPalindrome("hello") << std::endl;

  std::cout << checkPalindrome("a") << std::endl;

  return 0;
}