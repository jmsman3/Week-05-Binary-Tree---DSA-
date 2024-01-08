#include <iostream>
#include <queue>

using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = nullptr;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;

        if (l == -1)
            myLeft = nullptr;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = nullptr;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void LeftBoundary(Node *root)
{
    if (!root)
        return;

    if (root->left != NULL)
    {
        LeftBoundary(root->left);
        cout << root->left->val << " ";
    }
    else if (root->right != NULL)
    {

        LeftBoundary(root->right);
        cout << root->right->val << " ";
    }
}

void RightBoundary(Node *root)
{
    if (!root)
        return;

    if (root->right != NULL)
    {
        cout << root->right->val << " ";
        RightBoundary(root->right);
    }
    else if (root->left != NULL)
    {
        cout << root->left->val << " ";

        RightBoundary(root->left);
    }
}

void printOuterNodes(Node *root)
{

    if (root->left != NULL)
    {
        LeftBoundary(root);
    }
    cout << root->val << " ";

    if (root->right != NULL)
    {
        RightBoundary(root);
    }
}

int main()
{
    Node *root = input_tree();
    printOuterNodes(root);

    return 0;
}