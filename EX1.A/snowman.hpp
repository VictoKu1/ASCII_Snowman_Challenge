#pragma once
#define INT_MAX 2147483647
#define INT_MIN -2147483648 
#include <string>
#include <stdexcept>
namespace ariel{
    std::string snowman(int dna);
    std::string buildSnowman(int dna);
    void constructSnowmanMatrix(std::string mainMatrix[5][7],std::string H[4][2][5],std::string N [4],std::string E[4],std::string X[4][2][1],std::string Y[4][2][1],std::string T[4][1][3],std::string B[4][1][3],int dna);
    void put(std::string mainMatrix[5][7],int x,int y,std::string arr[],int amountInRow, int length);
    // void removeBlankLinesIfExist(std::string mainMatrix[5][7],int dna);
    std::string matrixToString(std::string mainMatrix[5][7]);
}
bool isBase3(int num);
//*Following code were taken and editted from https://www.geeksforgeeks.org/convert-base-decimal-vice-versa/ to convert base 10 number to a given base.
char reVal(int num) ; 
void strev(char *str);
int fromDeci(char res[], int base, int inputNum);

