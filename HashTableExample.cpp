#include "pch.h"
#include <iostream>
#include "HashNode.h"
#include "KeyHash.h"
#include "HashMap.h"
#include <string>
#include <assert.h>
using namespace std;

struct MyKeyHash {
	unsigned long operator()(const int& k) const {
		return k % 10;
	}
};
int main()
{

	HashMap<int, string, 10, MyKeyHash> hmap;

}

