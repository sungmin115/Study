#include<iostream>
#include<string>
class data {
	protected:
		std::string d_name;
		int old;
		bool add_old();

};

class sungmin :public data {
private:
	std::string name;
	int old;
public:
	bool add_old(int old);
};

class bbong : public data  {
public:
	bool fn_number();
};
