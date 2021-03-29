class Number

{

private:
	int base;
	char* value;

public:

	Number(const char* value, int base); // where base is between 2 and 16
	Number() = default;
	~Number();

	Number(const Number& nr); //copy
	Number(Number&& nr); //move
	Number(const int nr);
	char operator[](int index);

	Number& operator--();
	Number& operator=(const char* nr1);
	Number& operator--(int val);
	Number& operator +=(Number nr2);
	bool operator<(Number nr2);
	bool operator>(Number nr2);
	bool operator==(Number nr2);
	bool operator<=(Number nr2);
	bool operator>=(Number nr2);
	bool operator!();
	Number& operator=(const int nr);
	Number& operator=(Number nr1);
	friend Number operator+(Number nr1, Number n2);
	friend Number operator-(Number nr1, Number n2);

	// add operators and copy/move constructor



	void SwitchBase(int newBase);

	void Print();

	int  GetDigitsCount(); // returns the number of digits for the current number

	int  GetBase(); // returns the current base

};

