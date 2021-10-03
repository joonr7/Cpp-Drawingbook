#include <iostream>

namespace Book {
namespace Title{
  std::string title;
} // namespace Title
} // namespace Book

std::string title;

int main() {
  Book::Title::title = "CANDY";
  ::title = "COOKIE";
  std::cout << ::title << " 와 " << Book::Title::title << std::endl;
  return 0;
}
