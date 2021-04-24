#include<iostream>

#include<algorithm>
#include<string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

class Solution
{
public:
    string defangIPaddr(string address);
};


/*
Day : 21.03.26

Quest :
유효한 아이피 주소를 받아서 .을 [.] 로 바꾸어 출력해보기

@ Input :
address = "1.1.1.1"
@ Ouput:
"1[.]1[.]1[.]1"
@ Input :
Input: address = "255.100.50.0"
@ Output :
"255[.]100[.]50[.]0"
@ Constraints:
The given address is a valid IPv4 address.

Solution Class
#include<iostream>
class Solution
{
public:
    std::string defangIPaddr(std::string address);
};
/////////////////////////////////
std::string Solution::defangIPaddr(std::string address)
{
    return std::string();
}
//////////////////////////////////
*/