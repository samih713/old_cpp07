#include <iostream>
#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#if 0 // simple class
class whatever
{
private:

public:
	int x;

	explicit whatever (int x);
	~whatever ();
	whatever (const whatever &);
	whatever &operator= (const whatever &);
};

// print
std::ostream &operator<<(std::ostream &os, const whatever &w);

#endif // simple class

#if 1 // simple template

template<typename Char> // C++ lacks a way to limit the types that C can be
class String
{
  public:
    String();
    explicit String(const Char *);
    String(const String &);
    String operator=(const String &);
    Char& operator[](int n);
    Char& operator+=(Char c);
private:
  static const int short_max = 15; // short string optimization
  int size;
  Char *ptr;
};

// using string = String<char>; // aliases are a c11 thing
// these are often used to shorten template names 

#endif // simple template

#endif // WHATEVER_HPP
