// Copyright 2022 Ivan Sushin <i.suschin@yandex.ru>

#include <header.hpp>

std::vector<Group> Groups(const std::vector<Student>& students) {
  std::vector<Group> Groups;
  std::vector<Student> students1group;
  std::vector<Student> students2group;
  std::vector<Student> students3group;
  for (auto i : students) {
    if (i.GroupId == "iu8-34") students1group.push_back(i);
    if (i.GroupId == "iu9-54") students2group.push_back(i);
    if (i.GroupId == "ibm3-12") students3group.push_back(i);
  }

  if (!students1group.empty()) {
    Group group1 = {"iu8-34", students1group};
    Groups.push_back(group1);
  }

  if (!students2group.empty()) {
    Group group2 = {"iu9-54", students2group};
    Groups.push_back(group2);
  }

  if (!students3group.empty()) {
    Group group3 = {"ibm3-12", students3group};
    Groups.push_back(group3);
  }
  return Groups;
}
