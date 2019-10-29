#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
  string text;
  cout << "What text would you like to reverse?" << endl;
  getline(cin, text);
  cout << "----- ORIGINAL -----\n" << text << endl;
  reverse(text.begin(), text.end());
  cout << "----- REVERSE -----\n" << text << endl;
}

// FAQ

// Q: Why is "getline" used instead of "cin"?
// A: Because using "cin <<" stops reading the input at the first whitespace character.

// Q: Why is the library "bits/stdc++.h" included?
// A: Because that's where the function "reverse()" is defined.
