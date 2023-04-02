#include <iostream>
#include "singleton.h"

int main() {
{
    Tea tea{};
    tea.cost = 1;
    tea.strength = 2;
    tea.quality = 3;
    Manager::Instance().Add(tea);
}
auto tealist= Manager::Instance().GetTeaList();

for (const auto& tea : tealist) {
    std::cout << "cost: " << tea.cost << " strength: " << tea.strength << " quality: " << tea.quality << std::endl;
}
}