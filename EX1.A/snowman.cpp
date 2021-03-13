#include "snowman.hpp"
bool isBase3(int num){
    const int downgradeConstantSoTheNumberWillBeModuloThree = 11111111;
    if(num<0){
        return false;
    }
    if(num==0){
        return true;
    }
    num = num - downgradeConstantSoTheNumberWillBeModuloThree ; 
    if(num<0){
        return false;
    }
    if(num==0){
        return true;
    }
    const int numLastDigit = 10;
    while(num>0){
        if(num%numLastDigit>3){
            return false;
        }
        num = num/numLastDigit;
    }
    return true;
}
namespace ariel{
    std::string snowman(int dna){
        const int minimalBorderOfLegitDna = 11111110;
        const int maximalBorderOfLegitDna =44444445;
        const std::string genericString="Output.";
        if(dna>minimalBorderOfLegitDna&&dna<maximalBorderOfLegitDna&&isBase3(dna)){
                return buildSnowman(dna);
        }else{
                throw std::invalid_argument{"Invalid code '5'"};
            }
        return genericString ;
    }
    std::string buildSnowman(int dna){
        std::string mainMatrix[5][7]={};
        const mainMatrix[0][0]="";
        const mainMatrix[0][6]="";
        const mainMatrix[1][0]="";
        const mainMatrix[1][6]="";
        const mainMatrix[2][1]="(";
        const mainMatrix[2][5]=")";
        const mainMatrix[3][1]="(";
        const mainMatrix[3][5]=")";
        const mainMatrix[4][1]="(";
        const mainMatrix[4][5]=")";
        const mainMatrix[4][0]="";
        const mainMatrix[4][6]="";
        const std::string H[4][2][5]={"","","","","",
                                "_","=","=","=","_",
                                " ","_","_","_"," ",
                                ".",".",".",".",".",
                                " "," ","_"," "," ",
                                " ","/","_","\\"," ",
                                " ","_","_","_"," ",
                                "(","_","*","_",")"};
        const std::string N[4]={",",".","_",""};
        const std::string E[4]={".","o","O","-"}; //*E for Eye, instead of two equal matrises R & L.
        const std::string X[4][1][2]={"",
                                "<",
                                "\\",
                                "",
                                "",
                                "/",
                                "",
                                "",};
        const std::string Y[4][1][2]={"",
                                ">",
                                "/",
                                "",
                                "",
                                "\\",
                                "",
                                "",};
        const std::string T[4][1][3]={" ","."," ",
                                      "]"," ","[",
                                      ">"," ","<",
                                      " "," "," "};                       
        const std::string B[4][1][3]={" ",":"," ",
                                      "\""," ","\"",
                                      "_","_","_",
                                      " "," "," "};
                                      

    }

}



