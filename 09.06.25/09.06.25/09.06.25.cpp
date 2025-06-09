#include <iostream>
#include<string>
#include<vector>


using namespace std;

vector<string> tasks;



void addtask(const string& task) {
    tasks.push_back(task);
}


void showTasks() {
    cout << "СПИСОК: \n";
        for (size_t i = 0; i < tasks.size(); i++) {
            cout << i + 1 << "." << tasks[i] << endl;
        }
}


int main()
{
    setlocale(LC_ALL, "RU");
    addtask("сходить в школу");
    addtask("погулять с собакой");
    addtask("приготовить ужин");
    showTasks();

    return 0;
}

