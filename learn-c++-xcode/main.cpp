//
//  main.cpp
//  learn-c++-xcode
//
//  Created by 周达理 on 2020/9/20.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int factorial (int val) {
    return val * val * val;
}

unsigned count () {
    static int countNumber = 0;
    countNumber ++;
    return countNumber;
}

class Window_mgr {
public:
    void clear();
};


class Screen {
friend void Window_mgr::clear();
private:
    unsigned height = 0, width = 0;
    unsigned cursor = 0;
    string contents;
public:
    Screen() = default; // 默认构造函数
    Screen(unsigned ht, unsigned wd) : height(ht), width(wd), contents(ht * wd, ' ' ) {};
    Screen(unsigned ht, unsigned wd, char c): height(ht), width(wd), contents(ht * wd, ' ') {};
public:
    Screen& move(unsigned r, unsigned c) {
        cursor = r * width + c;
        return *this;
    }
    Screen& set(char ch) {
        contents[ cursor ] = ch;
        return *this;
    }
    Screen& set(unsigned r, unsigned c, char ch) {
        contents[ r * width + c ] = ch;
        return *this;
    }
    Screen& display() {
        cout << contents;
        return *this;
    }
};
//
//Screen::pos ht = 24, wd = 80;
//
//Screen::pos Screen::size() const {
//    return height * width;
//}

void Window_mgr::clear() {
    Screen myScreen(10, 20, 'X');
    cout << "清理之前myScreen的内容是:" << endl;
    cout << myScreen.contents << endl;
    myScreen.contents = "";
    cout << "清理之后myScreen的内容是:" << endl;
    cout << myScreen.contents << endl;
};


int main() {
    Window_mgr w;
    w.clear();
    return 0;
}

class Sales_data {
    private:
        string bookNo;
        unsigned units_sold = 0;
        double sellingprice = 0.0;
        double saleprice = 0.0;
        double discount = 0.0;
    public:
        string isbin() const { return bookNo; }
        Sales_data & combine (const Sales_data & rhs) {
            units_sold += rhs.units_sold;
            return *this;
        };
};

// 编写一个Person的类
class Person {
private:
    string strName; // 姓名
    string strAddress; // 地址
public:
    Person() = default;
    Person(const string &name, const string &add) {
        strName = name;
        strAddress = add;
    }
//    Person(std::istream &is) { is >> *this; }
public:
    string getName() const { return strName; }  // 返回姓名
    string getAddress() const { return strAddress; } // 返回地址
};



// 构造一个Book类 - 大理
class Book2 {
private:
    string name;
    string NO;
    double price;
    string author;
    string address;
public:
    Book2() = default();
    Book2(string name, string NO, ) {};
}

// by Primer Book
class Book {
private:
    string Name, ISBN, Author, Publisher;
    double Price;
public:
    Book() = default;
    Book(const string &n, const string &I, double pr, const string &a, const string &p) {
        Name = n;
        ISBN = I;
        Price = pr;
        Author = a;
        Publisher = p;
    };
    Book(std::istream &is) { is >> *this };
};

