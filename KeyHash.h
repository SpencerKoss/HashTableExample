#pragma once

//Default Hash Function structure
template <typename K, size_t tableSize>
struct KeyHash {
	unsigned long operator()(const K &key) const {
		return reinterpret_cast<unsigned long>(key) % tableSize;
	}
};
 
