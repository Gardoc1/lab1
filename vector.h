#pragma once
#include <iostream>

typedef enum Nucleotide: unsigned char{
	T, C, A, G
}Nucl;

class Vector
{
public:
	Vector();
	Vector(size_t size1, Nucl nucl);
	~Vector() = default;

	Vector copy_vector(const Vector& vector);
	int get(size_t i) const;

	void push_back(int elem);
	void setArray(int* new_array) { array = new_array;};
	void setCapacity(size_t new_capacity) { capacity = new_capacity;};
	void setSize(size_t new_size) { size = new_size;};
	void push(size_t index, Nucl nucl);

private:
	int* array;
	size_t size;
	size_t capacity;
};
