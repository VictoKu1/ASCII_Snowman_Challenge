#include "snowman.hpp"
#include <array>
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
        if(!(dna>minimalBorderOfLegitDna&&dna<maximalBorderOfLegitDna&&isBase3(dna))){
            throw std::invalid_argument{"Invalid code '"+std::to_string(dna)+"'"};
        }
        return buildSnowman(dna);
    }
    std::string buildSnowman(int HNLRXYTB){
        const int ten = 10; //* To take the digits out of HNLRXYTB we need to take a modulo of ten to retreive the last number and divide by ten to get access to the next last number.
        const int b=(HNLRXYTB%ten)-1 ;
        HNLRXYTB/=ten;
        const int t=(HNLRXYTB%ten)-1 ;
        HNLRXYTB/=ten;
        const int y=(HNLRXYTB%ten)-1 ;
        HNLRXYTB/=ten;
        const int x=(HNLRXYTB%ten)-1 ;
        HNLRXYTB/=ten;
        const int r=(HNLRXYTB%ten)-1 ;
        HNLRXYTB/=ten;
        const int l=(HNLRXYTB%ten)-1 ;
        HNLRXYTB/=ten;
        const int n=(HNLRXYTB%ten)-1 ;
        HNLRXYTB/=ten;
        const int h=(HNLRXYTB%ten)-1 ;
        std::array<std::array<std::string,4>,2>H={{{"     "," ___ ","  _  "," ___ "},
                                                    {"_===_","....."," /_\\ ","(_*_)"}}};
        std::array<std::string,4>N={",",".","_"," "};
        std::array<std::string,4>E={".","o","O","-"};//*E for Eye, instead of two equal matrises R & L.
        std::array<std::array<std::string,4>,2>X={{{" ","\\"," "," "},
                                                   {"<"," ","/"," "}}};
        std::array<std::array<std::string,4>,2>Y={{{" ","/"," "," "},
                                                    {">"," ","\\"," "}}};
        std::array<std::string,4>T={" : ","] [","> <","   "};
        std::array<std::string,4>B={" : ","\" \"","___","   "};
        std::string snowman =" "+H[0][h]+" \n"
                            +" "+H[1][h]+" \n"
                            +X[0][x]+"("+E.at(l)+N.at(n)+E.at(r)+")"+Y[0][y]+"\n"
                            +X[1][x]+"("+T.at(t)+")"+Y[1][y]+"\n"
                            +" ("+B.at(b)+") \n";                         
        return snowman;
    }
}



