#include"File_I_O.h"

void main() {
	ifstream readFile;
	readFile.open("test.txt");

	if (readFile.is_open()) {
		while (!readFile.eof()) {
			//1. istream�� getline.
			/*
			char tmp[256];
			readFile.getline(tmp, 256);
			cout << tmp << endl;    //������ ���� ���ڿ� �ٷ� ���.
			*/

			//2. std::getline.
			string str;
			getline(readFile, str);
			cout << str << endl;
		}
		readFile.close();
	}
}