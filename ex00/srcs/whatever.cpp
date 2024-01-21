#include "whatever.hpp"
#include "../color.hpp"

#if 0  // simple class
whatever::whatever(int x) : x(x)
{
  DEBUG_MSG("Constructor called", Y);
}

whatever::~whatever()
{
  DEBUG_MSG("Destructor called", Y);
}

whatever::whatever(const whatever &other) : x(other.x)
{
  DEBUG_MSG("Copy constructor called", Y);
}

whatever &whatever::operator=(const whatever &other)
{
  DEBUG_MSG("Copy constructor called", Y);
  x = other.x;
  return *this;
}

// print
std::ostream &operator<<(std::ostream &os, const whatever &w)
{
  os << w.x;
  return os;
}
#endif // simple class

#if 1 // simple template

template<typename Char>
Char &String<Char>::operator[] (int n)
{
	return ptr[n];
}

#endif // simple template
