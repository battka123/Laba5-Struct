// Copyright 2022 Ivan Sushin <i.suschin@yandex.ru>

#ifndef INC_01_LAB_05_STRUCT_HEADER_HPP_
#define INC_01_LAB_05_STRUCT_HEADER_HPP_

#include <algorithm>
#include <string>
#include <vector>

struct Student {
  std::string Name;
  std::string GroupId;
  std::vector<unsigned> Ratings;
  std::vector<std::string> Subjects;
};

struct Group {
  std::string Id;
  std::vector<Student> Students;
};

// Task_1
void SortByName(std::vector<Student>& students);
// Task_2
void SortByRating(std::vector<Student>& students);
// Task_3
size_t CountTwoness(const std::vector<Student>& students);
// Task_4
size_t CountExcellent(const std::vector<Student>& students);
// Task_5
std::vector<Student> VectorMathExcellent(const std::vector<Student>& students);
// Task_6
std::vector<std::string> GroupsId(const std::vector<Student>& students);
// Task_7
std::vector<Group> Groups(const std::vector<Student>& students);
#endif
// INC_01_LAB_05_STRUCT_HEADER_HPP_
