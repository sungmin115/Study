#include"File_I_O.h"

void main() {
	ifstream readFile;
	readFile.open("test.txt");

	if (readFile.is_open()) {
		while (!readFile.eof()) {
			//1. istream의 getline.
			/*
			char tmp[256];
			readFile.getline(tmp, 256);
			cout << tmp << endl;    //지금은 읽은 문자열 바로 출력.
			*/

			//2. std::getline.
			string str;
			getline(readFile, str);
			cout << str << endl;
		}
		readFile.close();
	}
}