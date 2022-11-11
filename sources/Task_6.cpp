// Copyright 2022 Ivan Sushin <i.suschin@yandex.ru>

#include <header.hpp>

std::vector<std::string> GroupsId(const std::vector<Student>& students) {
  std::vector<std::string> UnicGroups;
  for (auto i : students) {
    std::string group_i = i.GroupId;
    if ((std::find(UnicGroups.begin(), UnicGroups.end(), group_i)) ==
        UnicGroups.end()) {
      UnicGroups.push_back(group_i);
    }
  }
  return UnicGroups;
}
