#include <cstring>
#include <iostream>
#ifndef MYSTRING_HPP
#define MYSTRING_HPP

class myString
{
private:
    char *str; // string data
public:
    myString();
    myString(const char *in);   // constructor
    myString(const myString &); // copy constructor
    myString(myString &&);      // move constructor
    ~myString();                // destructor

    myString &operator=(const myString &); // operator overloading
    myString &operator=(myString &&that);  // = operator for move
    myString operator-() const;
    myString operator+(const myString &that) const;

    bool operator==(const myString &that) const; // == operator overloaded

    int getLength(); // getter(length of string)
    void display();  // display info

    friend std::ostream &operator<<(std::ostream &os, const myString &out); // overloaded extraction operator
    friend std::istream &operator>>(std::istream &is, myString &other);     // overloaded insertion operator
};

#endif // MYSTRING_HPP