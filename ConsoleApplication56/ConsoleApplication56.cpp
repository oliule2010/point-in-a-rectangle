/*
github: point in a rectangle

Check how many rectangles cover one point.
*/
#include <iostream>
#include <vector>
using namespace std;
struct Rectangle{
	int x1;
	int y1;
	int x2;
	int y2;
};
bool check_if_in_rectangle(const Rectangle &input, int x, int y) {
	if (x > input.x1 && x < input.x2) {
		if (y > input.y1 && y < input.y2) {
			return true;
		}
	}
	return false;
}
int how_many(vector<Rectangle>& input, int x, int y) {
	int count = 0;
	for (Rectangle re : input) {
		if (check_if_in_rectangle(re, x, y)) {
			count++;
		}
	}
	return count;
}


int main()
{
	Rectangle input1{ 1, 1, 4, 4 };
	Rectangle input2{ 0, 0, 10,10};
	Rectangle input3{ 3, 2, 4, 2 };
	Rectangle input4{ 4, 2, 9, 4 };
	Rectangle input5{ 3, 8, 5, 2 };
	Rectangle input6{ 1, 9, 7, 6 };
	vector<Rectangle> input7;
	input7.push_back(input1);
	input7.push_back(input2);
	input7.push_back(input3);
	input7.push_back(input4);
	input7.push_back(input5);
	input7.push_back(input6);
	cout << check_if_in_rectangle(input1, 5, 2) << "\n" << how_many(input7,4, 2);
	return 0;
}