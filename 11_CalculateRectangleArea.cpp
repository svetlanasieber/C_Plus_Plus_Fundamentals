

#include <iostream>

using namespace std;

int calculateRectangleArea(int w, int h) {
    int area = w * h;
    return area;
}

int main()
{
    int width, height;
    cin >> width >> height;

    cout << calculateRectangleArea(width, height) << endl;

    return 0;
}

