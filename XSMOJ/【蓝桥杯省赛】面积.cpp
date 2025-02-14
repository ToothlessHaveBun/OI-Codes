#include <iostream>
#include <vector>

using namespace std;

struct Rectangle {
    int x1, y1, x2, y2;
};

int main() {
    int n;
    cin >> n;

    vector<Rectangle> rectangles(n);

    for (int i = 0; i < n; ++i) {
        cin >> rectangles[i].x1 >> rectangles[i].y1 >> rectangles[i].x2 >> rectangles[i].y2;
    }

    int totalArea = 0;

    for (int i = 0; i < n; ++i) {
        totalArea += (rectangles[i].x2 - rectangles[i].x1) * (rectangles[i].y2 - rectangles[i].y1);

        for (int j = i + 1; j < n; ++j) {
            int x_overlap = max(0, min(rectangles[i].x2, rectangles[j].x2) - max(rectangles[i].x1, rectangles[j].x1));
            int y_overlap = max(0, min(rectangles[i].y2, rectangles[j].y2) - max(rectangles[i].y1, rectangles[j].y1));
            totalArea -= x_overlap * y_overlap;
        }
    }

    cout << totalArea << endl;

    return 0;
}
