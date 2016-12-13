#ifndef 13_39_H
#define 13_39_H
#include <memory>
#include <string>

class StrVec{
public:
	StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr) {}
	StrVec()(const StrVec&);
	StrVec& operator=(const StrVec&);
	~StrVec();

	void push_back(const string&);
	size_t size() const { return first_free - elements; }
	size_t capacity() const { return cap - elements; }
	string* begin() const { return elements; }
	string* end() const { return first_free; }

	void reserve(size_t new_cap);
	void resize(size_t count);
	void resize(size_t count, const string&);
private:
	pair<string*,string*> alloc_n_copy(const string*,
									   const string*);
	void free();
	void chk_n_alloc()
	{
		if(size() == capacity()) reallocate();
	}
	void reallocate();
	void alloc_n_copy(size_t new_cap);
	void alloc_n_move(size_t new_cap);
private:
	string* elements;
	string* first_free;
	string* cap;
	allocator<string> alloc;
};

#endif