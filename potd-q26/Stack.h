#ifndef _STACK_H
#define _STACK_H

#include <cstddef>
#include<vector>
class Stack {
public:
  int size() const;
  bool isEmpty() const;
  void push(int value);
  int pop();
  std::vector<int> v;
};

#endif
