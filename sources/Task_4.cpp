// Copyright 2022 Ivan Sushin <i.suschin@yandex.ru>

#include <header.hpp>

size_t CountExcellent(const std::vector<Student>& students) {
  size_t k = 0;
  for (auto i : students) {
    size_t t = 0;
    for (auto j : i.Ratings) {
      if (j == 5) {
        t++;
      } else
        break;
    }
    if (t == 6) k++;
  }
  return k;
}
