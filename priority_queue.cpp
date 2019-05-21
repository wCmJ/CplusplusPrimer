typedef struct Node{
    int data;
    Node* next;
    Node(int n = 0):data(n),next(NULL){}
};
struct compare{
    bool operator()(const Node* l1, const Node* l2){
        return   (l1->data>l2->data);
    }
};

#include<queue>
#include<vector>
std::priority_queue<Node*, std::vector<Node*>, compare> pq;//max heap











