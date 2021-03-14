
/*
This is a tests to the function : snowman() (that creates snowmen)
Author : Shlomo Glick
*/


#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
// #include <stdexcept>
using namespace std;



string nospaces(string input) {
    input.erase(remove(input.begin(),input.end(), ' '), input.end());
    input.erase(remove(input.begin(),input.end(), '\t'), input.end());
    input.erase(remove(input.begin(),input.end(), '\n'), input.end());
    input.erase(remove(input.begin(),input.end(), '\r'), input.end());



	return input;
}




TEST_CASE("Good snowman code") {
    CHECK(nospaces(snowman(11114411)) == nospaces(" _===_ \n (.,.) \n ( : ) \n ( : )"));
    CHECK(nospaces(snowman(11111111)) == nospaces("_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(22222222)) == nospaces("  ___  \n ..... \n\\(o.o)/\n (] [) \n (\" \") "));
    CHECK(nospaces(snowman(33333333)) == nospaces("_\n/_\\ \n(O_O)\n/(> <)\\ \n (___)"));
    CHECK(nospaces(snowman(44444444)) == nospaces("___\n(_*_)\n(- -)\n(   )\n(   )"));
    CHECK(nospaces(snowman(12341234)) == nospaces(" _===_ \n (O.-)/\n<(> <) \n (   ) "));
    CHECK(nospaces(snowman(43214321)) == nospaces("  ___  \n (_*_) \n (o_.) \n (] [)\\ \n ( : ) "));
    CHECK(nospaces(snowman(12121212)) == nospaces(" _===_ \n (..o)/\n<( : ) \n (\" \") "));
    CHECK(nospaces(snowman(34343434)) == nospaces("   _  \n  /_\\  \n (O -) \n/(> <) \n (   ) "));
    CHECK(nospaces(snowman(14422334)) == nospaces(" _===_ \n\\(- o) \n (> <)\\ \n (   ) "));
    CHECK(nospaces(snowman(21144444)) == nospaces("  ___  \n ..... \n (.,-) \n (   ) \n (   ) "));
    CHECK(nospaces(snowman(31112233)) == nospaces("   _  \n  /_\\  \n\\(.,.)/\n (> <) \n (___) "));
    CHECK(nospaces(snowman(13241324)) == nospaces(" _===_ \n (o_-) \n<(] [)\\ \n (   ) "));
    CHECK(nospaces(snowman(12343214)) == nospaces(" _===_ \n (O.-)/\n/( : ) \n (   ) "));
    CHECK(nospaces(snowman(44444441)) == nospaces(" ___  \n (_*_) \n (- -) \n (   ) \n ( : )"));
    CHECK(nospaces(snowman(42134444)) == nospaces(" ___  \n (_*_) \n (..O) \n (   ) \n (   ) "));
    CHECK(nospaces(snowman(23413434)) == nospaces(" ___  \n ..... \n (-_.) \n/(> <) \n (   ) "));




    CHECK(nospaces(snowman(14444444)) == nospaces(" _===_ \n (- -) \n (   ) \n (   ) "));
    CHECK(nospaces(snowman(24444444)) == nospaces("  ___  \n ..... \n (- -) \n (   ) \n (   ) "));
    CHECK(nospaces(snowman(34444444)) == nospaces("   _  \n  /_\\  \n (- -) \n (   ) \n (   ) "));
   
    CHECK(nospaces(snowman(41444444)) == nospaces("  ___  \n (_*_) \n (-,-) \n (   ) \n (   ) "));
    CHECK(nospaces(snowman(42444444)) == nospaces("  ___  \n (_*_) \n (-.-) \n (   ) \n (   ) "));
    CHECK(nospaces(snowman(43444444)) == nospaces("  ___  \n (_*_) \n (-_-) \n (   ) \n (   ) "));
    
    CHECK(nospaces(snowman(44144444)) == nospaces("  ___  \n (_*_) \n (. -) \n (   ) \n (   ) "));
    CHECK(nospaces(snowman(44244444)) == nospaces("  ___  \n (_*_) \n (o -) \n (   ) \n (   ) "));
    CHECK(nospaces(snowman(44344444)) == nospaces("  ___  \n (_*_) \n (O -) \n (   ) \n (   ) "));
    
    CHECK(nospaces(snowman(44414444)) == nospaces("  ___  \n (_*_) \n (- .) \n (   ) \n (   ) "));
    CHECK(nospaces(snowman(44424444)) == nospaces("  ___  \n (_*_) \n (- o) \n (   ) \n (   ) "));
    CHECK(nospaces(snowman(44434444)) == nospaces("  ___  \n (_*_) \n (- O) \n (   ) \n (   ) "));
    
    CHECK(nospaces(snowman(44441444)) == nospaces("  ___  \n (_*_) \n (- -) \n<(   ) \n (   ) "));
    CHECK(nospaces(snowman(44442444)) == nospaces("  ___  \n (_*_) \n\\(- -) \n (   ) \n (   ) "));
    CHECK(nospaces(snowman(44443444)) == nospaces("  ___  \n (_*_) \n (- -) \n/(   ) \n (   ) "));
    
    CHECK(nospaces(snowman(44444144)) == nospaces("  ___  \n (_*_) \n (- -) \n (   )>\n (   ) "));
    CHECK(nospaces(snowman(44444244)) == nospaces("  ___  \n (_*_) \n (- -)/\n (   ) \n (   ) "));
    CHECK(nospaces(snowman(44444344)) == nospaces("  ___  \n (_*_) \n (- -) \n (   )\\ \n (   ) "));
    
    CHECK(nospaces(snowman(44444414)) == nospaces("  ___  \n (_*_) \n (- -) \n ( : ) \n (   ) "));
    CHECK(nospaces(snowman(44444424)) == nospaces("  ___  \n (_*_) \n (- -) \n (] [) \n (   ) "));
    CHECK(nospaces(snowman(44444434)) == nospaces("  ___  \n (_*_) \n (- -) \n (> <) \n (   ) "));
   
    CHECK(nospaces(snowman(44444441)) == nospaces("  ___  \n (_*_) \n (- -) \n (   ) \n ( : ) "));
    CHECK(nospaces(snowman(44444442)) == nospaces("  ___  \n (_*_) \n (- -) \n (   ) \n (\" \") "));
    CHECK(nospaces(snowman(44444443)) == nospaces("  ___  \n (_*_) \n (- -) \n (   ) \n (___) "));
    

    CHECK(nospaces(snowman(41111111)) == nospaces("  ___  \n (_*_) \n (.,.) \n<( : )>\n ( : ) "));
    CHECK(nospaces(snowman(14111111)) == nospaces(" _===_ \n (. .) \n<( : )>\n ( : ) "));
    CHECK(nospaces(snowman(11411111)) == nospaces(" _===_ \n (-,.) \n <( : )>\n ( : ) "));
    CHECK(nospaces(snowman(11141111)) == nospaces(" _===_ \n (.,-) \n<( : )>\n ( : ) "));
    CHECK(nospaces(snowman(11114111)) == nospaces(" _===_ \n (.,.) \n ( : )>\n ( : ) "));
    CHECK(nospaces(snowman(11111411)) == nospaces(" _===_ \n (.,.) \n<( : ) \n ( : ) "));
    CHECK(nospaces(snowman(11111141)) == nospaces(" _===_ \n (.,.) \n<(   )>\n ( : ) "));
    CHECK(nospaces(snowman(11111114)) == nospaces(" _===_ \n (.,.) \n<( : )>\n (   ) "));

   
}


TEST_CASE("Too short a number"){
    CHECK_THROWS(snowman(0));
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(12));
    CHECK_THROWS(snowman(123));
    CHECK_THROWS(snowman(1234));
    CHECK_THROWS(snowman(12341));
    CHECK_THROWS(snowman(123412));
    CHECK_THROWS(snowman(1234123));
    CHECK_THROWS(snowman(55));
    CHECK_THROWS(snowman(66));
    CHECK_THROWS(snowman(555));



}

TEST_CASE("negative number"){
    CHECK_THROWS(snowman(-00000000));
    CHECK_THROWS(snowman(-11111111));
    CHECK_THROWS(snowman(-22222222));
    CHECK_THROWS(snowman(-55555555));
    CHECK_THROWS(snowman(-11111));
    CHECK_THROWS(snowman(-3333));
    CHECK_THROWS(snowman(-999));
    CHECK_THROWS(snowman(-77));
    CHECK_THROWS(snowman(-5));
}




TEST_CASE("At least one of the indexes is out of range (1-4)") {
   
    CHECK_THROWS(snowman(11111119));
    CHECK_THROWS(snowman(11111189));
    CHECK_THROWS(snowman(11111789));
    CHECK_THROWS(snowman(11116789));
    CHECK_THROWS(snowman(22299444));
    CHECK_THROWS(snowman(37223111));
    CHECK_THROWS(snowman(00023111)); 

    CHECK_THROWS(snowman(00000000));
    CHECK_THROWS(snowman(01111111));
    CHECK_THROWS(snowman(10111111));
    CHECK_THROWS(snowman(11011111));
    CHECK_THROWS(snowman(11101111));
    CHECK_THROWS(snowman(11110111));
    CHECK_THROWS(snowman(11111011));
    CHECK_THROWS(snowman(11111101));
    CHECK_THROWS(snowman(11111110));

    CHECK_THROWS(snowman(55555555));
    CHECK_THROWS(snowman(11111115));
    CHECK_THROWS(snowman(11111151));
    CHECK_THROWS(snowman(11111511));
    CHECK_THROWS(snowman(11115111));
    CHECK_THROWS(snowman(11151111));
    CHECK_THROWS(snowman(11511111));
    CHECK_THROWS(snowman(15111111));
    CHECK_THROWS(snowman(51111151));

    CHECK_THROWS(snowman(66666666));
    CHECK_THROWS(snowman(61111111));
    CHECK_THROWS(snowman(16111111));
    CHECK_THROWS(snowman(11611111));
    CHECK_THROWS(snowman(11161111));
    CHECK_THROWS(snowman(11116111));
    CHECK_THROWS(snowman(11111611));
    CHECK_THROWS(snowman(11111161));
    CHECK_THROWS(snowman(11111116));

    CHECK_THROWS(snowman(77777777));
    CHECK_THROWS(snowman(71111111));
    CHECK_THROWS(snowman(17111111));
    CHECK_THROWS(snowman(11711111));
    CHECK_THROWS(snowman(11171111));
    CHECK_THROWS(snowman(11117111));
    CHECK_THROWS(snowman(11111711));
    CHECK_THROWS(snowman(11111171));
    CHECK_THROWS(snowman(11111117));

    CHECK_THROWS(snowman(88888888));
    CHECK_THROWS(snowman(81111111));
    CHECK_THROWS(snowman(18111111));
    CHECK_THROWS(snowman(11811111));
    CHECK_THROWS(snowman(11181111));
    CHECK_THROWS(snowman(11118111));
    CHECK_THROWS(snowman(11111811));
    CHECK_THROWS(snowman(11111181));
    CHECK_THROWS(snowman(11111118));

    CHECK_THROWS(snowman(99999999));
    CHECK_THROWS(snowman(91111111));
    CHECK_THROWS(snowman(19111111));
    CHECK_THROWS(snowman(11911111));
    CHECK_THROWS(snowman(11191111));
    CHECK_THROWS(snowman(11119111));
    CHECK_THROWS(snowman(11111911));
    CHECK_THROWS(snowman(11111191));
    CHECK_THROWS(snowman(11111119));
  
}

TEST_CASE("The number is too long"){
     CHECK_THROWS(snowman(123412341));
     CHECK_THROWS(snowman(000000000));
     CHECK_THROWS(snowman(111111111));
     CHECK_THROWS(snowman(555555555));
     CHECK_THROWS(snowman(123456789));
}