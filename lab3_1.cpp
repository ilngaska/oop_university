#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Text {
protected:
    string* lines;
    int count;
public:
    Text() : lines(nullptr), count(0) {}

    Text(string arr[], int n) {
        count = n;
        lines = new string[n];
        for (int i = 0; i < n; i++)
            lines[i] = arr[i];
    }

    ~Text() {
        delete[] lines;
    }

    int getLength() const {
        int len = 0;
        for (int i = 0; i < count; i++)
            len += lines[i].length();
        return len;
    }

    int getLinesCount() const {
        return count;
    }

    int getSpacesCount() const {
        int spaces = 0;
        for (int i = 0; i < count; i++)
            for (char c : lines[i])
                if (c == ' ') spaces++;
        return spaces;
    }

    void removeExtraSpaces() {
        for (int i = 0; i < count; i++) {
            string result;
            bool space = false;
            for (char c : lines[i]) {
                if (c == ' ') {
                    if (!space) result += c;
                    space = true;
                } else {
                    result += c;
                    space = false;
                }
            }
            lines[i] = result;
        }
    }
};

class WordCounter : public Text {
public:
    WordCounter(string arr[], int n) : Text(arr, n) {}

    int countWords() const {
        int words = 0;
        for (int i = 0; i < count; i++) {
            istringstream iss(lines[i]);
            string word;
            while (iss >> word)
                words++;
        }
        return words;
    }
};

// тестування
int main() {
    string arr[] = {
        "Привіт   світ",
        "Hello    world"
    };
    WordCounter txt(arr, 2);

    cout << "Довжина тексту: " << txt.getLength() << endl;
    cout << "Кількість рядків: " << txt.getLinesCount() << endl;
    cout << "Кількість пробілів: " << txt.getSpacesCount() << endl;
    cout << "Кількість слів: " << txt.countWords() << endl;

    txt.removeExtraSpaces();
    cout << "\nПісля видалення зайвих пробілів:\n";
    cout << "Кількість пробілів: " << txt.getSpacesCount() << endl;
}
