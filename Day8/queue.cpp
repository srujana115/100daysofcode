//queue-first in first out
#include <iostream>
#include <queue>

void explainQueue() {
    std::queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);
    q.back() += 5;
    std::cout << q.back() << std::endl;
    std::cout << q.front() << std::endl;
    q.pop();
    std::cout << q.front() << std::endl; // Added the missing semicolon
}

int main() {
    explainQueue();
    return 0;
}