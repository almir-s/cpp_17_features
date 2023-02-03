#include <iostream>
#include <optional>
#include <variant>

// Optional
std::optional<std::string> create(bool b) {
  if (b) {
    return "Godzilla";
  } else {
    return {};
  }
}

int main() {
  // Variant
  std::variant<int, float> v;
  v = 42;
  std::cout << "The variant contains an int: " << std::get<int>(v) << std::endl;
  v = 3.14f;
  std::cout << "The variant contains a float: " << std::get<float>(v)
            << std::endl;

  create(false).value_or("empty"); // == "empty"
  create(true).value_or("empty");  // == "Godzilla"
  if (auto str = create(true))
    std::cout << "Condition Met" << std::endl;
  else
    std::cout << "Condition Not Met" << std::endl;

  return 0;
}
