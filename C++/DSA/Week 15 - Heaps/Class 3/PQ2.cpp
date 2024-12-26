#include <vector>
#include <queue>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int val) : val(val), next(nullptr) {}
};

class compare {
public:
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, compare> minHeap;

        int k = lists.size();
        if (k == 0) 
            return nullptr;

        // Insert the first element of every linked list into the heap
        for (int i = 0; i < k; i++) {
            if (lists[i] != nullptr) {
                minHeap.push(lists[i]);
            }
        }

        ListNode* head = nullptr;
        ListNode* tail = nullptr;

        while (!minHeap.empty()) {
            ListNode* temp = minHeap.top();
            minHeap.pop();

            // If temp is the first element of the answer linked list
            if (head == nullptr) {
                head = temp;
                tail = temp;
            } else {
                // If temp isn't the first element of the answer linked list
                tail->next = temp;
                tail = temp;
            }

            // Push the next element of temp into the heap if it exists
            if (tail->next != nullptr) {
                minHeap.push(tail->next);
            }
        }

        return head;
    }
};

int main(){
    
}