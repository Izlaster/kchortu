#include <iostream>
#include <vector>
#include <map>


int main() {
  //��� ������ ������, �� �� ����� ���� ���� �������� �������, ������ ��� ������ �� ����� ��� ���� ��� ������� �������
  std::map<std::pair<int, int>, std::vector<int>> metro = { {{1, 2}, {1, 2, 3}}, {{2, 2}, {1, 2, 3}} };
  std::cout << metro[{1, 2}][1];
  std::cout << "Hello, World!" << std::endl;
  return 0;
}