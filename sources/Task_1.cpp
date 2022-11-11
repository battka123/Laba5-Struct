// Copyright 2022 Ivan Sushin <i.suschin@yandex.ru>

#include <header.hpp>

void SortByName(std::vector<Student>& students) {
  std::sort(students.begin(), students.end(),
            [](const Student& i, const Student& j) { return i.Name < j.Name; });
}
