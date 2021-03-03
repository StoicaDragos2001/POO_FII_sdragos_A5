#include "Stats.h"
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>

void Stats::setEng(float grade_eng) {
	this->engleza = grade_eng;
}

int Stats::getEng() {
	return this->engleza;
}

void Stats::setIst(float grade_ist) {
	this->istorie = grade_ist;
}

int Stats::getIst() {
	return this->istorie;
}

void Stats::setMate(float grade_mate) {
	this->mate = grade_mate;
}

int Stats::getMate() {
	return this->mate;
}

void Stats::setName(char some_name[20]) {
	strcpy(this->name, some_name);
}

char* Stats::getName() {
	return this->name;
}

int Stats::Average() {
	return (this->mate + this->engleza + this->istorie) / 3;
}