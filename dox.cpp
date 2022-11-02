#include <fstream>
#include <iostream>
using namespace std;

int main() {
  string username, fname, lname, age, ip, dad, mom, sibling, number, fucker;
  cout << "Enter Username Of Target: ";
  cin >> username;
  cout << "Enter First Name Of Target: ";
  cin >> fname;
  cout << "Enter Last Name Of Target: ";
  cin >> lname;
  cout << "Enter The Age Of Target: ";
  cin >> age;
  cout << "Enter The IP Of Target: ";
  cin >> ip;
  cout << "Enter Dad Of Target: ";
  cin >> dad;
  cout << "Enter Mom Of Target: ";
  cin >> mom;
  cout << "Enter Sibling of Target: ";
  cin >> sibling;
  cout << "Enter Num Of Target: ";
  cin >> number;
  cout << "Who Fucked " + username + " ?: ";
  cin >> fucker;
  ofstream File(username + ".txt");
  File << "[+] Username: " + username + "\n";
  File << "[+] First Name: " + fname + "\n";
  File << "[+] Last Name: " + lname + "\n";
  File << "[+] Age: " + age + "\n";
  File << "[+] IP: " + ip + "\n";
  File << "[+] Dad: " + dad + "\n";
  File << "[+] Mom: " + mom + "\n";
  File << "[+] Sibling: " + sibling + "\n";
  File << "[+] Number: " + number + "\n";
  File << "[+] Fucker: " + fucker + "\n";
}
