// Copyright 2020 Golovanova Elena

#ifndef MODULES_QUICK_SORT_INCLUDE_QUICK_SORT_H_
#define MODULES_QUICK_SORT_INCLUDE_QUICK_SORT_H_

#include <iostream>
#include <vector>

class QuickSort {
 protected:
  std::vector<int> matrix;
 public:
  QuickSort();
  explicit QuickSort(int _size);
  explicit QuickSort(std::vector<int>_vector);
  std::vector<int> GetVector();
  // int GetIndex(const std::vector<int>& _matrix, int _first, int _last);
  int GetIndex(int _first, int _last);
  void  main();
  void QSort(int _first, int _last);
  int m(int i);
};

#endif  // MODULES_QUICK_SORT_INCLUDE_QUICK_SORT_H_