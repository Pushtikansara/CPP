#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    Point operator-() const {
        return Point(-x, -y);
    }

    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }

    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }

    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

class PointStack {
private:
    Point stack[30];
    int top;

public:
    PointStack() : top(-1) {}

    bool isEmpty() const {
        return top == -1;
    }

    bool isFull() const {
        return top == 29;
    }

    void push(const Point& p) {
        if (!isFull()) {
            stack[++top] = p;
        } else {
            cout << "Stack overflow!" << endl;
        }
    }

    Point pop() {
        if (!isEmpty()) {
            return stack[top--];
        } else {
            cout << "Stack underflow!" << endl;
            return Point(); 
        }
    }

    Point peek() const {
        if (!isEmpty()) {
            return stack[top];
        } else {
            cout << "Stack is empty!" << endl;
            return Point();
        }
    }
};

int main() {
    PointStack history;

    Point p1(4, 5);
    Point p2(1, 3);

    Point result = p1 + p2;
    cout << "Result of p1 + p2 is: ";
    result.display();
    history.push(result);
    result = -p1;
    cout << "Result of -p1: ";
    result.display();
    history.push(result);  
    cout << "\nUndo last operation:" << endl;
    Point undone = history.pop();
    undone.display();

    cout << "Previous state: ";
    history.peek().display();

    Point p3(3, 4);
    cout << "\nIs p1 equal to p3? ";
    if (p1 == p3) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
  cout<<"24e052_pushti kansara";
    return 0;
}