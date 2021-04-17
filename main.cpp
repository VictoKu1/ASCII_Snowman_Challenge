#include "snowman.hpp"
#include <array>
#include <iostream>
#include <unistd.h>
using namespace ariel;
using namespace std;
// To return char for a value. For example '2'
// is returned for 2. 'A' is returned for 10. 'B'
// for 11
char reVal(int num) {
  if (num >= 0 && num <= 9)
    return (char)(num + '0');
  else
    return (char)(num - 10 + 'A');
}

// Utility function to reverse a string
void strev(string str) {
  int len = str.length();
  int i;
  for (i = 0; i < len / 2; i++) {
    char temp = str.at(i);
    str.at(i) = str.at(len - i - 1);
    str.at(len - i - 1) = temp;
  }
}

// Function to convert a given decimal number
// to a base 'base' and
int fromDeci(char res[], int base, int inputNum) {
  int index = 0; // Initialize index of result

  // Convert input number is given base by repeatedly
  // dividing it by base and taking remainder
  while (inputNum > 0) {
    res[index++] = reVal(inputNum % base);
    inputNum /= base;
  }
  res[index] = '\0';

  // Reverse the result
  strev(res);

  return atoi(res);
}
string nospaces(string input) {
  std::erase(input, ' ');
  std::erase(input, '\t');
  std::erase(input, '\n');
  std::erase(input, '\r');
  return input;
}
int main() {
  cout << "For printing enter 1 and press Enter. \nFor customizing your "
          "personal snowman, enter 5 and press ENTER. \nFor getting a snowman "
          "by ID press whatever you want (On the keyboard (DUH !!!)) and press "
          "ENTER. \n";
  string input;
  cin >> input;
  input = nospaces(input);
  if (input == "1") {
    printSnowman();
    return 0;
  }
  if (input == "5") {
    customize();
    return 0;
  }
  printByID();
  return 0;
}
void printByID() {
  system("clear");
  string info = "Please enter 8 digit number where each digit is bigger or "
                "equal to 1 and lower or equal to 4 .";
  cout << info << endl;
  int HNLRXYTB = readAndCheckHNLRXYTB(info);
  system("clear");
  string snowman1;
  snowman1 = snowman(HNLRXYTB);
  cout << "Personal snowman ID: \n"
       << HNLRXYTB << "\n"
       << snowman1 << "___________" << endl;
}
void customize() {
  system("clear");
  string charles = snowman(11113211) + "___________\n";
  cout << charles
       << "Hello,\nmy name is Charles,\nIm your assistant here to build\nyour "
          "own unique (not really !) snoman,\nwhats your name ?\n";
  string name;
  cin >> name;
  system("clear");
  usleep(100000);
  charles = snowman(11111111) + "___________\n";
  cout << charles << "Alright " << name << ",\nNice to meet you!\n";
  usleep(1000000);
  system("clear");
  cout << charles << "Now " << name
       << ",\nLets start with the customization.....\nJust wait a second I "
          "need to find my glasses.\n.....\n";
  usleep(7000000);
  system("clear");
  charles = snowman(11221111) + "___________\n";
  cout << charles
       << "Finally, I found them !\nWow, now I can see !\nI really shouldnt "
          "drink that much.\nNow, to work.....\n";
  usleep(7000000);
  system("clear");
  string message;
  message = "Please choose a hat,\nPress:\n________________\n1 for that straw "
            "hat: \n _===_\n________________\n2 for a Mexican hat: \n ___ "
            "\n.....\n________________\n3 for a Fez:\n  _  \n /_\\ "
            "\n________________\n4 for a Russian hat:\n ___ "
            "\n(_*_)\n_________________\n";
  cout << charles << message;
  int h;
  h = readAndCheck(message);
  system("clear");
  charles = snowman(11221111) + "___________\n";
  message = "Please choose a nose,\nPress:\n________________\n1 for a normal "
            "nose: \n          ,\n________________\n2 for a dot nose: \n       "
            "   .\n________________\n3 for a line nose:\n          "
            "_\n________________\n4 for no nose:\n\n_________________\n";
  cout << charles << "Ok, now step 2 :\n" << message;
  int n;
  n = readAndCheck(message);
  system("clear");
  charles = snowman(11221111) + "___________\n";
  message =
      "Please choose a left eye for your snowman,\nPress:\n________________\n1 "
      "for a dot eye: \n          .\n________________\n2 for a bigger dot eye: "
      "\n          o\n________________\n3 for a biggest dot eye:\n          "
      "O\n________________\n4 for a closed eye:\n           "
      "-\n_________________\n";
  cout << charles << "Ok, now step 3 :\n" << message;
  int l;
  l = readAndCheck(message);
  system("clear");
  charles = snowman(11221111) + "___________\n";
  message = "Please choose a right eye for your "
            "snowman,\nPress:\n________________\n1 for a dot eye: \n          "
            ".\n________________\n2 for a bigger dot eye: \n          "
            "o\n________________\n3 for a biggest dot eye:\n          "
            "O\n________________\n4 for a closed eye:\n           "
            "-\n_________________\n";
  cout << charles << "Ok, now step 4 :\n" << message;
  int r;
  r = readAndCheck(message);
  system("clear");
  charles = snowman(11221111) + "___________\n";
  message =
      "Please choose a left arm for your snowman,\nPress:\n________________\n1 "
      "for a normal arm: \n          <\n________________\n2 for a upwards arm: "
      "\n          \\\n________________\n3 for a downwards arm:\n          "
      "/\n________________\n4 for no arm:\n\n_________________\n";
  cout << charles << "Ok, now step 5 :\n" << message;
  int x;
  x = readAndCheck(message);
  system("clear");
  charles = snowman(11221111) + "___________\n";
  message =
      "Please choose a left arm for your snowman,\nPress:\n________________\n1 "
      "for a normal arm: \n          >\n________________\n2 for a upwards arm: "
      "\n           /\n________________\n3 for a downwards arm:\n         "
      "\\\n________________\n4 for no arm:\n\n_________________\n";
  cout << charles << "Ok, now step 6 :\n" << message;
  int y;
  y = readAndCheck(message);
  system("clear");
  charles = snowman(11221111) + "___________\n";
  message =
      "Please choose a torso for your snowman,\nPress:\n________________\n1 "
      "for a buttons torso:\n      ( : )\n________________\n2 for a vest "
      "torso:\n      (] [)\n________________\n3 for an inward arms:\n      (> "
      "<)\n________________\n4 for no torso:\n\n_________________\n";
  cout << charles << "Ok, now step 7 :\n" << message;
  int t;
  t = readAndCheck(message);
  system("clear");
  charles = snowman(11221111) + "___________\n";
  message =
      "Please choose a base for your snowman,\nPress:\n________________\n1 for "
      "a buttons base:\n      ( : )\n________________\n2 for a feet base:\n    "
      "  (\" \")\n________________\n3 for a flat base:\n      "
      "(___)\n________________\n4 for no base:\n\n_________________\n";
  cout << charles << "Ok, now step 8 :\n" << message;
  int b;
  b = readAndCheck(message);
  system("clear");
  charles = snowman(11221111) + "___________\n";
  int HNLRXYTB = b + t * 10 + y * 100 + x * 1000 + r * 10000 + l * 100000 +
                 n * 1000000 + h * 10000000;
  string result = snowman(HNLRXYTB);
  cout << charles << "Ok my dear " << name
       << ",\nI think we're done here.\nNow I'll take off my glasses and "
          "you'll get your such wanted personal snowman.\n";
  charles = snowman(11112311) + "___________\n";
  usleep(7000000);
  system("clear");
  cout << charles << "See you around!\n";
  usleep(9000000);
  system("clear");
  charles = snowman(11111111) + "___________\n";
  cout << charles << "See you around!\n";
  usleep(5000000);
  system("clear");
  cout << "Personal snowman ID: \n"
       << HNLRXYTB << "\n"
       << result << "___________" << endl;
  return;
}
void printSnowman() {
  cout << "For printing it cool enter 1 and press Enter. \nFor the regular "
          "list printing enter whatever you want (On the keyboard (DUH !!!)) "
          "and press ENTER. \n";
  string input;
  cin >> input;
  input = nospaces(input);
  if (input == "1") {
    for (int i = 0; i <= 65535; i++) {
      char res[100];
      cout << fromDeci(res, 4, i) + 11111111 << ": \n"
           << snowman(fromDeci(res, 4, i) + 11111111) << "___________" << endl;
      usleep(100000);
      system("clear");
    }
    return;
  }
  for (int i = 0; i <= 65535; i++) {
    char res[100];
    cout << fromDeci(res, 4, i) + 11111111 << ": \n"
         << snowman(fromDeci(res, 4, i) + 11111111) << "___________" << endl;
  }
  return;
}
int readAndCheck(string message) {
  int output;
  for (;;) {
    if (cin >> output)
      break;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
  }
  while (output < 1 || output > 4) {
    string charles = snowman(11232211) + "___________\n";
    usleep(1000000);
    system("clear");
    cout << charles
         << "Im not sure I gave you that opption !\nTry one more time ."
         << message;
    for (;;) {
      if (cin >> output)
        break;
      cin.clear();
      cin.ignore(INT_MAX, '\n');
    }
  }
  return output;
}
int readAndCheckHNLRXYTB(string message) {
  const int minimalBorderOfLegitDna = 11111110;
  const int maximalBorderOfLegitDna = 44444445;
  int output;
  for (;;) {
    if (cin >> output)
      break;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
  }
  while (!(output > minimalBorderOfLegitDna &&
           output < maximalBorderOfLegitDna && isBase3(output))) {
    system("clear");
    cout << "Please make sure all the digits are int range from 1 to 4.\n"
         << "There is no option like that!\nTry one more time .\n"
         << message;
    for (;;) {
      if (cin >> output)
        break;
      cin.clear();
      cin.ignore(INT_MAX, '\n');
    }
  }
  return output;
}