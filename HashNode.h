#pragma once 
#include <cstddef>

//Hash node class template
template <typename K, typename V>
class HashNode {
public:
	HashNode(const K &key, const V &value) :
		_key(key), _value(value), _next(NULL) {

	}

	K getKey() const {
		return _key;
	}

	V getValue() const {
		return _value;
	}

	void setValue(V value) {
		_value = value;
	}

	HashNode *getNext() const {
		return _next;
	}

	void setNext(HashNode *next){
			_next = next;
	}

private:
	//Key & Value pair
	K _key;
	V _value;

	//The Next bucket with the same key
	HashNode *_next;
	//Disallow copy and assignment
	HashNode(const HashNode &);
	HashNode & operator=(const HashNode &);
};

