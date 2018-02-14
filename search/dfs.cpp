#include <iostream>
#include <stack>

struct Node {
    int data;     // 数据
    Node *left;   // 左节点
    Node *right;  // 右节点
};

using namespace std;

const int TREE_SIZE = 9;
stack<Node *> unvisited;
Node nodes[TREE_SIZE];
Node *current;

void dfs() {
//初始化树
    for (int i = 0; i < TREE_SIZE; i++) {
        nodes[i].data = i;
        int child = i * 2 + 1;
        if (child < TREE_SIZE) // Left child
            nodes[i].left = &nodes[child];
        else
            nodes[i].left = nullptr;
        child++;
        if (child < TREE_SIZE)// Right child
            nodes[i].right = &nodes[child];
        else
            nodes[i].right = nullptr;
    }

    unvisited.push(&nodes[0]); //先把0放入UNVISITED stack

    // 只有UNVISITED不空
    while (!unvisited.empty()) {
        current = (unvisited.top()); //当前应该访问的
        unvisited.pop();
        if (current->right != nullptr)
            unvisited.push(current->right); // 把右边压入 因为右边的访问次序是在左边之后
        if (current->left != nullptr)
            unvisited.push(current->left);
        cout << current->data << endl;
    }
}

int main(int argc, char *argv[]) {
    dfs();
}
