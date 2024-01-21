#include <string>
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

// colors
#define SET_COLOR(color) (std::cout << (color))
#define RE_COLOR (std::cout << RE)

#define RE "\001\033[0;39m\002" // reset
#define L "\001\033[1;92m\002"  // green light
#define Y "\001\033[1;93m\002"  // yellow
#define M "\001\033[1;95m\002"  // magenta
#define R "\001\033[1;91m\002"  // red
#define B "\001\033[1;94m\002"  // blue
#define C "\001\033[1;96m\002"  // cyan
#define W "\001\033[1;97m\002"  // white
#define D "\001\033[1;30m\002"  // gray
#define O "\001\033[1;33m\002"  // orange

// DEBUG MACRO
#ifndef NDEBUG
#define DEBUG_MSG(message, color)                                              \
  do {                                                                         \
    std::cout << (color);                                                      \
    std::cout << (message);                                                    \
    std::cout << RE;                                                           \
  } while (0)
#else
#define DEBUG_MSG(message, color)

#endif // NDEBUG

class Animal {
private:
protected:
  std::string type;
  Animal();
  Animal(const Animal &);

public:
  virtual ~Animal();
  Animal &operator=(const Animal &);

  const std::string getType() const;
  /* -------------------------------- virtual --------------------------------
   */
  virtual void makeSound() const = 0;
};

#endif // ANIMAL_HPP
