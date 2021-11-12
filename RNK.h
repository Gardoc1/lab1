#pragma once
#include "Vector.h"
#include <unordered_map>

class RNK {
	typedef std::unordered_map <Nucleotide, int, std::hash<int>> map;
public:
	size_t size;
	Vector vector;
	map card;

	RNK();
	RNK(size_t size1, Nucl nucleotide);
	RNK(const RNK& other);
	~RNK();

	class Nucl_ref {
	public:
		Nucl_ref(size_t idx, RNK& rnk);
		~Nucl_ref() = default;
		Nucl_ref& operator=(Nucl nucl);
		explicit operator Nucl();

	private:
		size_t index;
		RNK* rnk = nullptr;
	};

	void push(const RNK& other);
	void push(Nucl nucl);

	RNK operator+(const RNK& rnk1) const;
	RNK& operator=(const RNK& rnk);
	RNK operator!() const;
	bool operator==(const RNK& rnk1) const;
	bool operator!=(const RNK& rnk1) const;
	Nucl_ref operator[](size_t idx);

	size_t length() const;
	Nucl get_nucl(size_t idx) const;
	bool is_complimentary(const RNK& other) const;
	RNK split(size_t idx) const;
	void trim(size_t idx);

	int cardinality(Nucl nucleotide);
	void set_nucl(size_t index, Nucl nucl);
	static void print(const RNK& rnk);
};
