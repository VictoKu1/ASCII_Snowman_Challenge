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
        const std::string X[4][2][1]={"",
                                "<",
                                "\\",
                                "",
                                "",
                                "/",
                                "",
                                "",};
        const std::string Y[4][2][1]={"",
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
        constructSnowmanMatrix(mainMatrix,H,N,E,X,Y,T,B,dna);
        // removeBlankLinesIfExist(mainMatrix,dna);
        return matrixToString(mainMatrix);                              
    }
        void constructSnowmanMatrix(std::string mainMatrix[5][7],std::string H[4][2][5],std::string N [4],std::string E[4],std::string X[4][2][1],std::string Y[4][2][1],std::string T[4][1][3],std::string B[4][1][3],int dna){
            put(mainMatrix,4,2,B[dna%10],3,3;
            dna = dna/10;
            put(mainMatrix,3,2,T[dna%10],3,3);
            dna = dna/10;
            put(mainMatrix,2,6,Y[dna%10],1,2);
            dna = dna/10;
            put(mainMatrix,2,0,X[dna%10],1,2);
            dna = dna/10;
            put(mainMatrix,2,4,E[dna%10],1,1);
            dna = dna/10;
            put(mainMatrix,2,2,E[dna%10],1,1);
            dna = dna/10;
            put(mainMatrix,2,3,N[dna%10],1,1);
            dna = dna/10;
            put(mainMatrix,0,1,H[dna%10],5,10);
        }
        void put(std::string mainMatrix[5][7],int x,int y,std::string arr[],int amountInRow, int length){
            
        }
        // void removeBlankLinesIfExist(std::string mainMatrix[5][7],int dna){
        //     int marker = 0 ;
        //     if ((dna/100)%10==4){
        //         marker=(marker*10)+1;
        //     }
        //     if ((dna/1000)%10==4){
        //         marker=(marker*10)+2;
        //     }
        //     if ((dna/10000000)%10==1){
        //         marker=(marker*10)+3;
        //     }
             
        // }
        std::string matrixToString(std::string mainMatrix[5][7]){
            std::string snowman="" ;
            for (int i=0;i<5;i++){
                for(int j = 0;j<7;j++){
                    if(i==4){
                        snowman = snowman+mainMatrix[i][j]+"\n";
                    }
                    snowman = snowman+mainMatrix[i][j];
                }
            }
            return snowman ;
        }
}



