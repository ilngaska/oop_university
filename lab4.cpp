#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

class Stack {
    int* arr;
    int top;
    int maxSize;

public:
    Stack(int size = MAX_SIZE) {
        maxSize = size;
        arr = new int[maxSize];
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void Input() {
        cout << "Введіть кількість елементів (<= " << maxSize << "): ";
        int n; cin >> n;
        if (n > maxSize) n = maxSize;
        top = -1;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            arr[++top] = x;
        }
    }

    void Print() const {
        if (top < 0) cout << "[порожній]\n";
        else {
            cout << "Стек: ";
            for (int i = 0; i <= top; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }

    // ++ 
    Stack& operator++() {
        if (top < maxSize - 1)
            arr[++top] = 0;
        else
            cout << "Стек повний!\n";
        return *this;
    }

    // --
    Stack& operator--() {
        if (top >= 0)
            top--;
        else
            cout << "Стек порожній!\n";
        return *this;
    }

    // bool()
    operator bool() const {
        return top >= 0;
    }
};

int main() {
    Stack s;
    s.Input();
    s.Print();

    --s;
    s.Print();

    //++s;
    //s.Print();
    

    if (s) cout << "Стек не порожній\n";
    else cout << "Стек порожній\n";
}