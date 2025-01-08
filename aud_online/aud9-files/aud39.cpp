#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;


void wtf() {
    ofstream fout("input.txt");

    string fname, lname;
    int points;
    string line;

    while (getline(std::cin, line)) {
        if (line == "----") {
            break;
        }
        fout << line << endl;
    }
}

void rff1() {
    ifstream fin("output1.txt");
    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }
}

void rff2() {
    ifstream fin("output2.txt");
    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }
}

class Book {
private:
    string title;
    string author;
    int year;

public:
    Book(const string &title = "", const string &author = "", int year = 0)
        : title(title),
          author(author),
          year(year) {
    }


};


int main() {
    wtf(); //ja kreira datotekata input.txt
    //YOUR CODE STARTS HERE


    //DO NOT MODIFY THE NEXT PART
    string author;
    getline(std::cin, author);
    //DO NOT MODIFY THE PART ABOVE, CONTINUE AFTER THIS COMMENT


    //To do PRINK BOOKS WRITTEN BY AUTHOR IN FILE output2.txt


    //YOUR CODE ENDS HERE
    rff1();
    cout << "Books written by " << author << " are: " << endl;
    rff2();

    return 0;
}
