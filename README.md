# HashTableExample

This Hash Function implementation is generic and has template implemtation. This was not created for production level, but was created to
show proper implementation of this data structure and C++.

This Hash function returns the remainder when the key is divided by the hash table size. Ideally, the Hash Function would assign each of 
its key to a unique bucket, but most hash table designs assume that hash collisions can occur. The 

The HashTableExample has a custom hash function struct with operator() method implementation is defined according to key distribution

HASHNODE:
The HashNode class represents each bucket node in the table. This class is contains the key() and value() accessor functions for the pair 
elements. The HashNode class also containts a pointer to the next node sharing the same key.

HASHMAP:
The HashMap class contains get(key) to access the mapped value by key, put(key, value) pair in table and remove(key) to remove the hash by
node ny key. The HashMap class uses separate chaining strategy for collision resolution.  

Some of the expected functionality is missing for example, Iterators, Thread Safety, Allocator for dynamic memory allocation, Load factor 
and rehashing, size and comparator functions, and comparator for key comparisons. 

