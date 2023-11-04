// time complexity- push-O(log(n))   top-O(1)  pop-O(log(n))
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void explainPriorityQueue() {
    // Max Heap (default behavior)
    priority_queue<int> maxHeap;
    maxHeap.push(5);
    maxHeap.push(2);
    maxHeap.push(8);
    maxHeap.emplace(10);
    cout << "Max Heap Top: " << maxHeap.top() << endl;

    maxHeap.pop();
    cout << "Max Heap Top after pop: " << maxHeap.top() << endl;

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(5);
    minHeap.push(2);
    minHeap.push(8);
    minHeap.emplace(10);
    cout << "Min Heap Top: " << minHeap.top() << endl;
}

int main() {
    explainPriorityQueue();
    return 0;
}
