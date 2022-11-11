// Copyright 2022 Ivan Sushin <i.suschin@yandex.ru>

#include <header.hpp>

double ArgVec(const std::vector<unsigned>& Rating);

void SortByRating(std::vector<Student>& students) {
  std::sort(students.begin(), students.end(),
            [](const Student& i, const Student& j) {
              return ArgVec(j.Ratings) < ArgVec(i.Ratings);
            });
}

double ArgVec(const std::vector<unsigned>& Rating) {
  double k = 0;
  for (auto& i : Rating) {
    k += i;
  }
  return k /= Rating.size();
}
