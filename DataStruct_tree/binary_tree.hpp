
/*
前序、中序和後序遍歷都是二叉樹的深度優先搜索（DFS）算法，
它們的區別在於訪問根節點的時機不同，因此遍歷的順序和輸出結果也不同。下面將解釋這三種遍歷方式的使用區別：

前序遍歷（Preorder Traversal）
- 遍歷順序：根節點 -> 左子樹 -> 右子樹
- 特點：首先訪問根節點，然後遞歸地對左子樹和右子樹進行前序遍歷。
- 應用：常用於樹的複製、序列化和打印表達式等情況，也可用於獲取前序遍歷序列。

中序遍歷（Inorder Traversal）
- 遍歷順序：左子樹 -> 根節點 -> 右子樹
- 特點：先遞歸地對左子樹進行中序遍歷，然後訪問根節點，最後遞歸地對右子樹進行中序遍歷。
- 應用：常用於二叉搜索樹（BST）中，可以得到一個有序的序列，也可用於中序表達式的計算。

後序遍歷（Postorder Traversal）
- 遍歷順序：左子樹 -> 右子樹 -> 根節點
- 特點：先遞歸地對左子樹和右子樹進行後序遍歷，然後訪問根節點。
- 應用：常用於表達式樹的求值、釋放二叉樹的內存等情況，也可用於獲取後序遍歷序列。


使用區別

1. 遍歷順序不同：
- 前序遍歷：先根節點，再左子樹，最後右子樹。
- 中序遍歷：先左子樹，再根節點，最後右子樹。
- 後序遍歷：先左子樹，再右子樹，最後根節點。

2. 適用場景不同：
- 前序遍歷常用於需要先處理根節點的情況。
- 中序遍歷常用於需要按照節點值的大小順序處理的情況。
- 後序遍歷常用於需要先處理子節點再處理根節點的情況。

3. 序列化和反序列化：
- 前序遍歷序列化：序列化成 (根，左，右) 的形式，便於重建樹。
- 中序遍歷序列化：序列化成 (左，根，右) 的形式，便於搜索和排序。
- 後序遍歷序列化：序列化成 (左，右，根) 的形式，便於重建樹和計算表達式。
*/

#ifndef H_BINARY_TREE
#define H_BINARY_TREE

#include <iostream>
using std::cout;
using std::endl;

// 定義二叉樹的節點結構
struct BinaryTreeNode
{
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

// 定義二叉樹類
class BinaryTree
{
private:
    BinaryTreeNode *root; // 樹的根節點

public:
    // 構造函數
    BinaryTree() : root(nullptr) {}

    BinaryTreeNode *getRoot()
    {
        if (root == nullptr)
        {
            cout << __func__ << ", root is null." << endl;
            return nullptr;
        }
        else
        {
            cout << __func__ << ", root: " << root << endl;
            return root;
        }
    }

    // 插入節點
    void insert(int value)
    {
        cout << __func__ << ", start insert(" << value << ")" << endl;
        root = insertRecursive(root, value);
    }

    // 遞歸插入輔助函數
    BinaryTreeNode *insertRecursive(BinaryTreeNode *node, int value)
    {
        if (node == nullptr)
        {
            cout << __func__ << ", new node:" << value << endl;
            return new BinaryTreeNode(value);
        }

        // cout << __func__ << ", node->data: " << node->data;
        if (value < node->data)
        {
            cout << __func__ << ", insert:" << value << " to node->data:" << node->data << " 'Left'." << endl;
            node->left = insertRecursive(node->left, value);
        }
        else
        {
            cout << __func__ << ", insert:" << value << " to node->data:" << node->data << " 'Right'." << endl;
            node->right = insertRecursive(node->right, value);
        }

        return node;
    }

    // 中序遍歷二叉樹（升序）
    void inorderTraversal(BinaryTreeNode *node)
    {
        if (node == nullptr)
        {
            return;
        }

        inorderTraversal(node->left);
        cout << node->data << " ";
        inorderTraversal(node->right);
    }

    // 公開的中序遍歷函數
    void inorderTraversal()
    {
        inorderTraversal(root);
        cout << endl;
    }

    // 前序遍歷二叉樹（根左右）
    void preorderTraversal(BinaryTreeNode *node)
    {
        if (node == nullptr)
        {
            return;
        }

        // 訪問當前節點（根節點）
        cout << node->data << " ";

        // 遞歸遍歷左子樹
        preorderTraversal(node->left);

        // 遞歸遍歷右子樹
        preorderTraversal(node->right);
    }

    // 後序遍歷二叉樹（左右根）
    void postorderTraversal(BinaryTreeNode *node)
    {
        if (node == nullptr)
        {
            return;
        }

        // 遞歸遍歷左子樹
        postorderTraversal(node->left);

        // 遞歸遍歷右子樹
        postorderTraversal(node->right);

        // 訪問當前節點（根節點）
        std::cout << node->data << " ";
    }
};

#endif
