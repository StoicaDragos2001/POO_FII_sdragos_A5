#pragma once
class Stats
{
	char name[20];
	float engleza;
	float mate;
	float istorie;

public:

	void setName(char* my_name);
	char* getName();
	void setEng(float grade_eng);
	int getEng();
	void setIst(float grade_ist);
	int getIst();
	void setMate(float grade_mate);
	int getMate();
	int Average();
};

