// Copyright 2022 Ivan Sushin <i.suschin@yandex.ru>

#include <header.hpp>

std::vector<Student> VectorMathExcellent(const std::vector<Student>& students) {
  std::vector<Student> MathExcellent;
  for (auto i : students) {
    for (size_t j = 0; j < i.Subjects.size(); j++) {
      if (i.Subjects[j] == "Math") {
        if (i.Ratings[j] == 5) {
          MathExcellent.push_back(i);
        }
      }
    }
  }
  return MathExcellent;
}
