#include "Math.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int Math::Add(int n1,int n2) {
	return n1 + n2;
}

int Math::Add(int n1, int n2, int n3) {
	return n1 + n2 + n3;
}

int Math::Add(double n1, double n2) {
	return n1 + n2;
}

int Math::Add(double n1, double n2, double n3) {
	return n1 + n2 + n3;
}

int Math::Mul(int n1, int n2) {
	return n1 * n2;
}

int Math::Mul(int n1, int n2, int n3) {
	return n1 * n2 * n3;
}

int Math::Mul(double n1, double n2) {
	return n1 * n2;
}

int Math::Mul(double n1, double n2, double n3) {
	return n1 * n2 * n3;
}

int Math::Add(int count, ...) {
	int s = 0;
	va_list vl;
	va_start(vl, count);
	for (int i = 0; i < count; i++)
		s = s + va_arg(vl, int);
	va_end(vl);
	return s;
}

char* Math::Add(const char* sir1,const char* sir2) {
	if (sir1 == nullptr or sir2 == nullptr)
		return nullptr;
	char* sirNou = (char*)malloc((strlen(sir1) + strlen(sir2) + 1) * sizeof(char));
	memset(sirNou, 0, (strlen(sir1) + strlen(sir2) + 1) * sizeof(char));
	memcpy(sirNou, sir1, strlen(sir1));
	memcpy(sirNou + strlen(sir1), sir2, strlen(sir2));
	return sirNou;
}