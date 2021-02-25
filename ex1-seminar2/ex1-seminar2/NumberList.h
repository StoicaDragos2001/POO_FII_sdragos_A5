#pragma once
class NumberList
{
	int numbers[10];
	int count;
public:
	NumberList();
	NumberList(int count, int numbers[]);
	~NumberList();

	void init();
	bool add(int x);
	void sord();
	void print();
};