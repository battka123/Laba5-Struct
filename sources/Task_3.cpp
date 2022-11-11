// Copyright 2022 Ivan Sushin <i.suschin@yandex.ru>

#include <header.hpp>

size_t CountTwoness(const std::vector<Student>& students) {
  size_t k = 0;
  for (auto i : students) {
    if ((std::find(i.Ratings.begin(), i.Ratings.end(), 2)) != i.Ratings.end()) {
      k++;
    }
  }
  return k;
}
