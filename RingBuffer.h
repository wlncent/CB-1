#pragma once
#include <iostream>
template <class T>
class RingBuffer
{
public:
	explicit RingBuffer(size_t size);
	void push(T value);
	T get();
	void pop_front();
	void pop_back();
	bool isEmpty() const;
	bool isFull() const;
	size_t getMaxSize() const;
	size_t sizeQueue() const;

private:
	std::unique_ptr<T[]> ringBuffer;
	size_t head;
	size_t tail;
	const size_t maxSize;
	bool full;
};

