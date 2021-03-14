/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: Yosef Danan
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"

#include <stdexcept>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <regex>
using namespace std;

const int VALID_INPUT_LEN = 8;
const int MAX_INPUT_RANGE = 4;
const int MIN_INPUT_RANGE = 1;

// enum is more suitable for this
const int UP = 1;
const int MIDDLE = 2;
const int DOWN = 3;

const int SEED = 3;

const int HAT_POS = 8;
const int FACE_POS = 7;
const int TURSO_POS = 2;
const int BASE_POS = 1;
const int ARM_POS = 4;

/*
generate random integer in [min,max] range
and return him
*/
const int randInt(int min, int max)
{
    srand((unsigned)time(NULL));
    int range = max - min + 1;
    return rand() % range + min;
}
/*
generate random input for snowman method in len length
*/
const int rand_input(int len)
{
    int res = 0;
    for (int i = 0; i < len; i++)
    {
        res *= 10;
        res += randInt(MIN_INPUT_RANGE, MAX_INPUT_RANGE);
    }
    return res;
}
/*
delete all the spaces and the newlines charcter from the start and from the end
and return the trimed string
note: spaces and newlines in the middle will not be removed
const string &str - is to avoid copy
*/
string trim(const string &str)
{
    int first = 0, last = str.size() - 1;
    while ((str[last] == ' ' || str[last] == '\n') && last >= 0)
        last--;

    while ((str[first] == ' ' || str[first] == '\n') && first < last)
        first++;

    return str.substr(first, last - first + 1);
}
/*
parenthesisNumber=UP/MIDDLE/DOWN
c = char to find(wither '(' or ')' charcter)
return -1 if not found or the parenthesisNumber not in range [1,3] 
*/
int findNthOccurnce(string str, int parenthesisNumber, char c)
{
    int index;
    parenthesisNumber = 4 - parenthesisNumber;
    for (index = str.size() - 1; index >= 0 && parenthesisNumber; index--)
        if (str[index] == c)
            parenthesisNumber--;
    return parenthesisNumber != 0 ? -2 : index + 1;
}
/*
used to validate the base(DOWN) turso(MIDDLE) and face(UP)
actual - the result from snowman method
right - the right result that we expect to get from snowman
pos - the part to check for(UP/MIDDLE/DOWN)
return if the output is valid
*/
bool checkPart(string actual, string right, int pos)
{
    int index = findNthOccurnce(actual, pos, '(') + 1;
    if (index < 0)
        return false;
    for (int i = 0; i < right.size(); i++)
        if (actual[index + i] != right[i])
            return false;
    return actual[right.size() + index] == ')';
}
/*
generate random snowman input with the add_part number in the pos position
where pos is the start where to put add_pos(left to right) and the position counted by the
distance from the right
*/
const int generateInputWith(int add_part, int pos)
{
    int len = to_string(add_part).size();
    int part1 = rand_input(VALID_INPUT_LEN - pos) * pow(10, pos);
    int part2 = rand_input(pos - len);
    return add_part * pow(10, pos - len) + part1 + part2;
}
/*
output - snowman output
right_arm/left_arm - charcter need to be as the right/left arm 
right_pos/left_pos - the positon of the arm(UP,MIDDLE,DOWN)
if the the arm is 4 than it checks for space or nothing
*/
bool validateArms(string output, char left_arm, char right_arm, int left_pos, int right_pos)
{
    int left_index = findNthOccurnce(output, left_pos, '(') - 1;
    int right_index = findNthOccurnce(output, right_pos, ')') + 1;
    return (output[left_index] == left_arm || (left_arm == ' ' && output[left_index] == '\n')) && (output[right_index] == right_arm || (right_arm == ' ' && output[right_index] == '\n'));
}
bool startsWith(string s1, string s2)
{
    s1.erase(std::remove(s1.begin(), s1.end(), ' '), s1.end());
    return s1.rfind(s2, 0) == 0;
}
string snowman(int num)
{
    return trim(ariel::snowman(num));
}

TEST_CASE("Bad snowman code")
{
    CHECK_THROWS(snowman(rand_input(VALID_INPUT_LEN - 1)));
    CHECK_THROWS(snowman(rand_input(VALID_INPUT_LEN + 1))); //too long
    CHECK_THROWS(snowman(11184411));
}
TEST_CASE("Hat")
{
    //https://stackoverflow.com/questions/1878001/how-do-i-check-if-a-c-stdstring-starts-with-a-certain-string-and-convert-a
    //rfind is good becouse of the 0 parmeter
    CHECK(startsWith(snowman(generateInputWith(1, HAT_POS)), "_===_"));
    CHECK(startsWith(snowman(generateInputWith(2, HAT_POS)), "___\n....."));
    CHECK(startsWith(snowman(generateInputWith(3, HAT_POS)), "_\n/_\\"));
    CHECK(startsWith(snowman(generateInputWith(4, HAT_POS)), "___\n(_*_)"));
}
TEST_CASE("Face")
{
    CHECK(checkPart(snowman(generateInputWith(111, FACE_POS)), ".,.", UP));
    CHECK(checkPart(snowman(generateInputWith(112, FACE_POS)), ".,o", UP));
    CHECK(checkPart(snowman(generateInputWith(123, FACE_POS)), "o,O", UP));
    CHECK(checkPart(snowman(generateInputWith(423, FACE_POS)), "o O", UP));
    CHECK(checkPart(snowman(generateInputWith(222, FACE_POS)), "o.o", UP));
    CHECK(checkPart(snowman(generateInputWith(333, FACE_POS)), "O_O", UP));
    CHECK(checkPart(snowman(generateInputWith(444, FACE_POS)), "- -", UP));
    CHECK(checkPart(snowman(generateInputWith(422, FACE_POS)), "o o", UP));
    CHECK(checkPart(snowman(generateInputWith(234, FACE_POS)), "O.-", UP));
    CHECK(checkPart(snowman(generateInputWith(321, FACE_POS)), "o_.", UP));
    CHECK(checkPart(snowman(generateInputWith(343, FACE_POS)), "-_O", UP));
    CHECK(checkPart(snowman(generateInputWith(211, FACE_POS)), "...", UP));
    //we can add here all the permutation
}
TEST_CASE("Torso")
{
    CHECK(checkPart(snowman(generateInputWith(1, TURSO_POS)), " : ", MIDDLE));
    CHECK(checkPart(snowman(generateInputWith(2, TURSO_POS)), "] [", MIDDLE));
    CHECK(checkPart(snowman(generateInputWith(3, TURSO_POS)), "> <", MIDDLE));
    CHECK(checkPart(snowman(generateInputWith(4, TURSO_POS)), "   ", MIDDLE));
}
TEST_CASE("Base")
{
    CHECK(checkPart(snowman(generateInputWith(1, BASE_POS)), " : ", DOWN));
    CHECK(checkPart(snowman(generateInputWith(2, BASE_POS)), "\" \"", DOWN));
    CHECK(checkPart(snowman(generateInputWith(3, BASE_POS)), "___", DOWN));
    CHECK(checkPart(snowman(generateInputWith(4, BASE_POS)), "   ", DOWN));
}
TEST_CASE("Arms")
{
    CHECK(validateArms(snowman(generateInputWith(11, ARM_POS)), '<', '>', MIDDLE, MIDDLE));
    CHECK(validateArms(snowman(generateInputWith(12, ARM_POS)), '<', '/', MIDDLE, UP));
    CHECK(validateArms(snowman(generateInputWith(23, ARM_POS)), '\\', '\\', UP, MIDDLE));
    CHECK(validateArms(snowman(generateInputWith(24, ARM_POS)), '\\', ' ', UP, UP));
    CHECK(validateArms(snowman(generateInputWith(44, ARM_POS)), ' ', ' ', UP, UP));
    CHECK(validateArms(snowman(generateInputWith(42, ARM_POS)), ' ', '/', UP, UP));
}