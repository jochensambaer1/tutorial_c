#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> taskList;

    while (true) {
        std::cout << "Enter a task (or 'q' to quit, 'r' to remove): ";
        std::string task;
        std::getline(std::cin, task);

        if (task == "q") {
            break;
        } else if (task == "r") {
            if (!taskList.empty()) {
                std::cout << "Removing last task...\n";
                taskList.pop_back();
            } else {
                std::cout << "Task list is empty. Cannot remove.\n";
            }
        } else {
            taskList.push_back(task);
        }

        std::cout << "Task List:\n";
        for (const auto& task : taskList) {
            std::cout << "- " << task << "\n";
        }
    }



    return 0;
}
