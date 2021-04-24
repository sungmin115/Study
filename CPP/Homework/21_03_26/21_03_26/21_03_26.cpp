#include"21_03_26.h"

string Solution::defangIPaddr(string address){
    string from = ".";
    string to = "[.]";
    size_t start_pos = 0;

    while ((start_pos = address.find(from, start_pos)) != string::npos) {
        address.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
    return address;
}

int main(void) {
    string input = " ";
    string output = " ";
    Solution* ad = new Solution();

    cout << "유효한 아이피 주소를 입력 하시오. " << endl;
    cin >> input;
    output = ad->defangIPaddr(input);
    cout << output << endl;

    return EXIT_SUCCESS;
}