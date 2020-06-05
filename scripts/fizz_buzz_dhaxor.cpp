#include <cstdio>
int main () {
  for (auto i = 1; i < 101; ++i) {
    if (i % 3 == 0) { std::printf("Fizz"); }
    if (i % 5 == 0) { std::printf("Buzz"); }
    std::printf(" %d\n", i);
  }
}
