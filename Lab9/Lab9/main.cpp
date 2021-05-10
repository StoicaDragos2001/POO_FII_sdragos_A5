#include <iostream>
using namespace std;
template <class K, class V>
class Map
{
	struct elem
	{
		K key;
		V list;
		int index;
	}*x;

	int size;
	int count;

public:
	Map()
	{
		this->size = 20;
		this->count = 0;
		x = (elem*)malloc(sizeof(elem) * size);
	}
	void realocare()
	{
		this->size = this->size * 2;
		x = (elem*)realloc(x, sizeof(elem) * size);
	}
	V& operator[](K val)
	{
		count++;	
		realocare();
		return x[val].list;
	}
	elem* begin() { return &x[0]; }
	elem* end() { return &x[count]; }
};	
int main() {
	Map<int, const char*> m;

	m[10] = "C++";

	m[20] = "test";

	m[30] = "Poo";

	for (auto [key, value, index] : m)

	{

		printf("Index:%d, Key=%d, Value=%s\n", index, key, value);

	}

	return 0;
}