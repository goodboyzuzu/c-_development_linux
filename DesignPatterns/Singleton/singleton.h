#pragma once
#include "tea.h"
#include <vector>

class Manager {
public:
    static Manager& Instance() {
        static Manager* instance = new Manager();
        return *instance;
    }
    void Add(Tea tea){
        teas.push_back(tea);
    }

    std::vector<Tea> GetTeaList() {
        return teas;
    }

private:
    std::vector<Tea> teas;
};