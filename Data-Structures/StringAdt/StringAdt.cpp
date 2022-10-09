#include "StringAdt.hpp"

/****************constructor \ destructor*****************/
myString::myString(const char *in) : str{nullptr} // constructor
{
    if (in == nullptr)
    {
        myString();
    }
    else
    {
        this->str = new char[std::strlen(in) + 1];
        std::strcpy(str, in);
    }
}
myString::myString() : str{nullptr} // no arg constructor
{
    this->str = new char[1];
    this->str[0] = '\0';
}
myString::~myString() // destructor
{
    delete[] str;
}

myString::myString(const myString &og) // copy constructor
{
    this->str = new char[std::strlen(og.str) + 1];
    std::strcpy(this->str, og.str);
}

myString::myString(myString &&that) // move constructor
{
    this->str = that.str;
    that.str = nullptr;
}

/****************operator overloading*****************/
myString &myString::operator=(const myString &that) // = operator for copy
{
    if (this != &that)
    {
        delete[] str;
        str = new char[std::strlen(that.str) + 1];
        std::strcpy(this->str, that.str);
    }
    return *this;
}
myString &myString::operator=(myString &&that) // = operator for move
{
    if (this != &that)
    {
        delete[] this->str;
        str = that.str;
        that.str = nullptr;
    }
    return *this;
}

bool myString::operator==(const myString &that) const // == operator for compairing strings in OBJs
{
    return (std::strcmp(this->str, that.str) == 0);
}

myString myString::operator-() const // -operator overloaded
{
    size_t buffer_size = std::strlen(this->str) - 1;
    char *buffer = new char[buffer_size];
    std::strcpy(buffer, this->str);
    buffer[buffer_size] = '\0';
    myString temp(buffer);
    delete[] buffer;
    return temp;
}

std::ostream &operator<<(std::ostream &os, const myString &out) // << operator overloaded
{
    os << out.str;
    return os;
}
std::istream &operator>>(std::istream &is, myString &other) // >>operator overloaded
{
    char *buff;
    buff = new char[1000];
    is >> buff;

    other = buff;
    delete[] buff;
    return is;
}
myString myString::operator+(const myString &that) const //+ operator overloaded
{
    char *buffer = new char[std::strlen(this->str) + 1 + std::strlen(that.str)];
    strcpy(buffer, this->str);
    strcat(buffer, that.str);

    myString temp{buffer};

    delete[] buffer;
    return temp;
}
/****************getter \ setter*****************/

int myString::getLength()
{
    return std::strlen(this->str);
}
void myString::display()
{
    std::cout << this->str << " : " << getLength() << std::endl;
}