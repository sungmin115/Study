#include"01.h"
class changun {
private:
	int m_test;

	int fn_test() {
		m_test = 3;
	}
	int fn_test_two() {
		m_test = 5;
	}
public:
	int m_public_test;
	int fn_public_test() {
	}
	int fn_getter_m_test() {
		return m_test;
	}
	void fn_setter_m_test(int m_test) {
		this->m_test = m_test;
	}

};


typedef struct test {
	int test_number;
}TEST;

bool fn_test_one(TEST t,changun c) {
	t.test_number;
	
	c.fn_getter_m_test();
	c.fn_setter_m_test(3);
}
bool fn_test_two(TEST t, changun c) {
		
}

int main(int argc,char** argv) {
	 TEST t;
	 changun c;
	 t.test_number;
	 c.m_public_test;
	 
	return 0;
}