#include "Header.h"

template <typename T>
T min(T data[], int N) {
	T min = data[0];
	for (int i = 1; i < N; i++)
	{
		if (data[i] < min) min = data[i];
	}
	return min;
}

void testMin() {

	char data_ch[] = { '4', '1' };
	int data1[] = { 7,9,5,6,2,3,4,8,1 };
	int data2[] = { -7,-9,-5,-6,-2,-3,-4,-8,-1 };
	int data3[] = { -7,9,-5,6,2,-3,4,-8,1 };
	int expect_ch = '1';
	int expect1 = 1;
	int expect2 = -9;
	int expect3 = -8;
	assert(min(data1, 9) == expect1);
	assert(min(data2, 9) == expect2);
	assert(min(data3, 9) == expect3);
	assert(min(data_ch, 2) == expect_ch);

}

template <typename T>
void sort(T data[], int N) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
                if (data[i] < data[j]) 
                    swap(data[i], data[j]);
        }
}

void testSort() {
	int data[] = { 7,9,5,6,2,3,4,8,1 };
	int expectedData[] = { 1,2,3,4,5,6,7,8,9 };
	sort(data, 9);
	for (int i = 0; i < 9; i++) {
		assert(data[i] == expectedData[i]);
	}

}

template <typename T>
T sum(T data[], int N) {
	T sum = 0;
	for (int i = 0; i < N; i++)
	{
		if (data[i] > 0) sum += data[i];
	}
	return sum;
}

void testSum() {
	int data[] = { -7,9,-5,6,2,-3,4,-8,1 };
	int expect = 22;
	assert(sum(data, 9) == expect);
}

int main()
{
	testMin();
	testSort();
	testSum();
}
