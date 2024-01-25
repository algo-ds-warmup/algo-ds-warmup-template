#include <fmt/ranges.h>

#include <vector>

int main(int argc, char** argv) {
  std::vector<int> v{1, 2, 3, 4, 5};

  for (auto it = v.begin(); it != v.end();) {
    if (*it == 5)
      v.erase(it);
    it++;
  }

  fmt::print("{}", v);

  return 0
}
