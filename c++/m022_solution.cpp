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
