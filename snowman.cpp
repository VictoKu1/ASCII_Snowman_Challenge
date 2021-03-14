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
        const std::string genericString="Output.";
        if(dna>minimalBorderOfLegitDna&&dna<maximalBorderOfLegitDna&&isBase3(dna)){
                return buildSnowman(dna);
        }else{
                throw std::invalid_argument{"Invalid code '"+std::to_string(dna)+"'"};
            }
        return genericString ;
    }
    std::string buildSnowman(int HNLRXYTB){
        const int b=(HNLRXYTB%10)-1 ;
        HNLRXYTB/=10;
        const int t=(HNLRXYTB%10)-1 ;
        HNLRXYTB/=10;
        const int y=(HNLRXYTB%10)-1 ;
        HNLRXYTB/=10;
        const int x=(HNLRXYTB%10)-1 ;
        HNLRXYTB/=10;
        const int r=(HNLRXYTB%10)-1 ;
        HNLRXYTB/=10;
        const int l=(HNLRXYTB%10)-1 ;
        HNLRXYTB/=10;
        const int n=(HNLRXYTB%10)-1 ;
        HNLRXYTB/=10;
        const int h=(HNLRXYTB%10)-1 ;
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
        std::string snowman =" "+H[h][0]+" \n"
                            +" "+H[h][1]+" \n"
                            +X[x][0]+"("+E[l]+N[n]+E[r]+")"+Y[y][0]+"\n"
                            +X[x][1]+"("+T[t]+")"+Y[y][1]+"\n"
                            +" ("+B[b]+") \n";                         
        return snowman;
    }

}



