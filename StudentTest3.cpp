//
// Created by eviat on 3/4/2021.
//
#include "doctest.h"
#include <iostream>
#include "snowman.hpp"
#include <cmath>
#include <string>
#include <algorithm>

using namespace ariel;
using namespace std;

string remove_spaces(string input) {
    input.erase(remove(input.begin(),input.end(), ' '), input.end());
    input.erase(remove(input.begin(),input.end(), '\t'), input.end());
    input.erase(remove(input.begin(),input.end(), '\n'), input.end());
    input.erase(remove(input.begin(),input.end(), '\r'), input.end());
    return input;
}

TEST_CASE("Hat"){
    /*check all the types of the hats */

            CHECK(remove_spaces(snowman(11114411)) == remove_spaces(string("\n_===_\n(.,.)\n( : )\n( : )")));
            //_===_

            CHECK(remove_spaces(snowman(23414431)) == remove_spaces(string("\n___\n.....\n(-_.)\n(> <)\n( : )")));
            // ___
            //.....

            CHECK(remove_spaces(snowman(32142412)) == remove_spaces(string("\n_\n/_\\\n\\(..-)\n( : )\n(\" \")")));
            //  _
            // /_\

            CHECK(remove_spaces(snowman(44444444)) == remove_spaces(string("\n___\n(_*_)\n(- -)\n(   )\n(   )")));
            // ___
            //(_*_)
}

TEST_CASE("Face"){
    /*check all the combination of the faces of the snowman*/
            //left eye - 3 digit
            CHECK(remove_spaces(snowman(11114411)) == remove_spaces(string("\n_===_\n(.,.)\n( : )\n( : )")));
            CHECK(remove_spaces(snowman(12211313)) == remove_spaces(string("\n_===_\n(o..)\n<( : )\\\n(___)")));
            CHECK(remove_spaces(snowman(44344444)) == remove_spaces(string("\n___\n(_*_)\n(O -)\n(   )\n(   )")));
            CHECK(remove_spaces(snowman(11411442)) == remove_spaces(string("\n_===_\n(-,.)\n<(   )\n(\" \")")));

            //right eye- 4 digit
            CHECK(remove_spaces(snowman(12211313)) == remove_spaces(string("\n_===_\n(o..)\n<( : )\\\n(___)")));
            CHECK(remove_spaces(snowman(14122121)) == remove_spaces(string("\n_===_\n\\(. o)\n(] [)>\n( : )")));
            CHECK(remove_spaces(snowman(41133114)) == remove_spaces(string("\n___\n(_*_)\n(.,O)\n/( : )>\n(   )")));
            CHECK(remove_spaces(snowman(41444111)) == remove_spaces(string("\n___\n(_*_)\n(-,-)\n( : )>\n( : )")));

            //nose- 2 digit
            CHECK(remove_spaces(snowman(11211313)) == remove_spaces(string("\n_===_\n(o,.)\n<( : )\\\n(___)")));
            CHECK(remove_spaces(snowman(12132121)) == remove_spaces(string("\n_===_\n\\(..O)\n(] [)>\n( : )")));
            CHECK(remove_spaces(snowman(43113114)) == remove_spaces(string("\n___\n(_*_)\n(._.)\n/( : )>\n(   )")));
            CHECK(remove_spaces(snowman(44414111)) == remove_spaces(string("\n___\n(_*_)\n(- .)\n( : )>\n( : )")));

}

TEST_CASE("Torso"){ //7 digit
            CHECK(remove_spaces(snowman(11114411)) == remove_spaces(string("\n_===_\n(.,.)\n( : )\n( : )")));
            CHECK(remove_spaces(snowman(14131121)) == remove_spaces(string("\n_===_\n(. O)\n<(] [)>\n( : )")));
            CHECK(remove_spaces(snowman(23414431)) == remove_spaces(string("\n___\n.....\n(-_.)\n(> <)\n( : )")));
            CHECK(remove_spaces(snowman(44444444)) == remove_spaces(string("\n___\n(_*_)\n(- -)\n(   )\n(   )")));
}
TEST_CASE("Arms"){
            //left arms- 5 digit
            CHECK(remove_spaces(snowman(11411442)) == remove_spaces(string("\n_===_\n(-,.)\n<(   )\n(\" \")")));
            CHECK(remove_spaces(snowman(32142412)) == remove_spaces(string("\n_\n/_\\\n\\(..-)\n( : )\n(\" \")")));
            CHECK(remove_spaces(snowman(12143313)) == remove_spaces(string("\n_===_\n(..-)\n/( : )\\\n(___)")));
            CHECK(remove_spaces(snowman(11114411)) == remove_spaces(string("\n_===_\n(.,.)\n( : )\n( : )")));

            //right arms- 6 digit
            CHECK(remove_spaces(snowman(14131121)) == remove_spaces(string("\n_===_\n(. O)\n<(] [)>\n( : )")));
            CHECK(remove_spaces(snowman(12143213)) == remove_spaces(string("\n_===_\n(..-)/\n/( : )\n(___)")));
            CHECK(remove_spaces(snowman(12143313)) == remove_spaces(string("\n_===_\n(..-)\n/( : )\\\n(___)")));
            CHECK(remove_spaces(snowman(44444444)) == remove_spaces(string("\n___\n(_*_)\n(- -)\n(   )\n(   )")));
}
TEST_CASE("Base"){ //8 digit
            CHECK(remove_spaces(snowman(11114411)) == remove_spaces(string("\n_===_\n(.,.)\n( : )\n( : )")));
            CHECK(remove_spaces(snowman(11411442)) == remove_spaces(string("\n_===_\n(-,.)\n<(   )\n(\" \")")));
            CHECK(remove_spaces(snowman(12143313)) == remove_spaces(string("\n_===_\n(..-)\n/( : )\\\n(___)")));
            CHECK(remove_spaces(snowman(44444444)) == remove_spaces(string("\n___\n(_*_)\n(- -)\n(   )\n(   )")));
}
TEST_CASE("Good snowman code") {
    /* Compare the results of legal cases */

            CHECK(remove_spaces(snowman(11114411)) == remove_spaces(string("\n_===_\n(.,.)\n( : )\n( : )")));
            CHECK(remove_spaces(snowman(44444444)) == remove_spaces(string("\n___\n(_*_)\n(- -)\n(   )\n(   )")));
            CHECK(remove_spaces(snowman(12143313)) == remove_spaces(string("\n_===_\n(..-)\n/( : )\\\n(___)")));
            CHECK(remove_spaces(snowman(11411442)) == remove_spaces(string("\n_===_\n(-,.)\n<(   )\n(\" \")")));
            CHECK(remove_spaces(snowman(23414431)) == remove_spaces(string("\n___\n.....\n(-_.)\n(> <)\n( : )")));
            CHECK(remove_spaces(snowman(12211313)) == remove_spaces(string("\n_===_\n(o..)\n<( : )\\\n(___)")));
            CHECK(remove_spaces(snowman(14131121)) == remove_spaces(string("\n_===_\n(. O)\n<(] [)>\n( : )")));
            CHECK(remove_spaces(snowman(41111114)) == remove_spaces(string("\n___\n(_*_)\n(.,.)\n<( : )>\n(   )")));
            CHECK(remove_spaces(snowman(41411111)) == remove_spaces(string("\n___\n(_*_)\n(-,.)\n<( : )>\n( : )")));
            CHECK(remove_spaces(snowman(14134411)) == remove_spaces(string("\n_===_\n(. O)\n( : )\n( : )")));
            CHECK(remove_spaces(snowman(32142412)) == remove_spaces(string("\n_\n/_\\\n\\(..-)\n( : )\n(\" \")")));

}

TEST_CASE("short length input") {
    /* check at randomly 10 option of every decimals numbers */

    //check numbers between 0-10
    for(int i=0; i<10; i++){
        int random= rand()%10;
        CHECK_THROWS(snowman((random)));
    }

    //check numbers between 10 - 100
    for(int i=0; i< 10; i++){
        int random= rand()%90 +10;
        CHECK_THROWS(snowman(random));
    }

    //check numbers between 100-1000
    for(int i=0; i<10; i++){
        int random= rand()%900+100;
        CHECK_THROWS(snowman(random));
    }

    //check number between 1000- 10000
    for(int i=0 ; i<10; i++){
        int random = rand()%9000 +1000;
        CHECK_THROWS(snowman(random));
    }

    //check number between 10000- 100000
    for(int i=0 ; i<10; i++){
        int random = rand()%90000 +10000;
        CHECK_THROWS(snowman(random));
    }

    //check number between 100000- 10000000
    for(int i=0 ; i<10; i++){
        int random = rand()%900000 +100000;
        CHECK_THROWS(snowman(random));
    }
}

TEST_CASE("long numbers") {
    /* numbers that bigger than 8 digits */

    for(int i=0; i<10; i++){
        int random = rand()+10000000;
        CHECK_THROWS(snowman(random));
    }
}

//legal length of input but illegal number - numbers between 5-9
TEST_CASE("illegal digits"){
    //check it at every location of the 8 digits

    //illegal digits at x-------
    for(int i=0; i< 3 ; i++){
        int number=01111111;
        int power = pow(10,7);
        int random= rand()%5+5; //number between 5- 9
        number += random*power;
        CHECK_THROWS(snowman(number));
    }

    //illegal digits at -x------
    for(int i=0; i< 3 ; i++){
        int number=10111111;
        int power = pow(10,6);
        int random= rand()%5+5; //number between 5- 9
        number += random*power;
        CHECK_THROWS(snowman(number));
    }

    //illegal digits at --x-----
    for(int i=0; i< 3 ; i++){
        int number=11011111;
        int power = pow(10,5);
        int random= rand()%5+5; //number between 5- 9
        number += random*power;
        CHECK_THROWS(snowman(number));
    }

    //illegal digits at ---x----
    for(int i=0; i< 3 ; i++){
        int number=11101111;
        int power = pow(10,4);
        int random= rand()%5+5; //number between 5- 9
        number += random*power;
        CHECK_THROWS(snowman(number));
    }

    //illegal digits at ----x---
    for(int i=0; i< 3 ; i++){
        int number=11110111;
        int power = pow(10,3);
        int random= rand()%5+5; //number between 5- 9
        number += random*power;
        CHECK_THROWS(snowman(number));
    }

    //illegal digits at -----x--
    for(int i=0; i< 3 ; i++){
        int number=11111011;
        int power = pow(10,2);
        int random= rand()%5+5; //number between 5- 9
        number += random*power;
        CHECK_THROWS(snowman(number));
    }

    //illegal digits at ------x-
    for(int i=0; i< 3 ; i++){
        int number=11111101;
        int power = pow(10,1);
        int random= rand()%5+5; //number between 5- 9
        number += random*power;
        CHECK_THROWS(snowman(number));
    }

    //illegal digits at -------x
    for(int i=0; i< 3 ; i++){
        int number=11111110;
        int random= rand()%5+5; //number between 5- 9
        number += random;
        CHECK_THROWS(snowman(number));
    }
}


TEST_CASE("illegal negative input") {
    /* check at randomly 10 option of evert decimals numbers negative numbers*/

    //check numbers between 0-10
    for(int i=0; i<10; i++){
        int random= -(rand()%10);
                CHECK_THROWS(snowman((random)));
    }

    //check numbers between 10 - 100
    for(int i=0; i< 10; i++){
        int random= -(rand()%90 +10);
                CHECK_THROWS(snowman(random));
    }

    //check numbers between 100-1000
    for(int i=0; i<10; i++){
        int random= -(rand()%900+100);
                CHECK_THROWS(snowman(random));
    }

    //check number between 1000- 10000
    for(int i=0 ; i<10; i++){
        int random = -(rand()%9000 +1000);
                CHECK_THROWS(snowman(random));
    }

    //check number between 10000- 100000
    for(int i=0 ; i<10; i++){
        int random = -(rand()%90000 +10000);
        CHECK_THROWS(snowman(random));
    }

    //check number between 100000- 10000000
    for(int i=0 ; i<10; i++){
        int random = -(rand()%900000 +100000);
        CHECK_THROWS(snowman(random));
    }
            //numbers contain characters
            CHECK_THROWS(snowman('z'));
            CHECK_THROWS(snowman(555+ 't'));
            CHECK_THROWS(snowman('t'+12341239));
            CHECK_THROWS(snowman(1234432123+'x'));
            CHECK_THROWS(snowman(34024372+'H'));

}



