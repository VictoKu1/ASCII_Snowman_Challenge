#pragma once
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483648; 
#include <string>
#include <stdexcept>
namespace ariel{
    std::string snowman(int dna);
    std::string buildSnowman(int HNLRXYTB);
}
bool isBase3(int num);
char reVal(int num) ; 
void strev(std::string str);
std::string nospaces(std::string input);
int fromDeci(char res[], int base, int inputNum);
void customize();
void printSnowman();
int readAndCheck(std::string message);
int readAndCheckHNLRXYTB(std::string message);
void printByID();