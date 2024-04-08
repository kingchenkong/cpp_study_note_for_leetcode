
#include <iostream>
using std::cout;
using std::endl;

#include "./binary_tree.hpp"

int main()
{
    cout << __func__ << ", hello world !!" << endl;

    BinaryTree tree;

    // 插入節點
    tree.insert(5);
    tree.insert(3);
    tree.insert(8);
    tree.insert(2);
    tree.insert(4);
    cout << endl;

    // 中序遍歷二叉樹
    cout << "Inorder traversal: ";
    tree.inorderTraversal(); // 預期輸出：2 3 4 5 8
    cout << endl;

    // 執行前序遍歷
    cout << "Preorder traversal: ";
    tree.preorderTraversal(tree.getRoot()); // 假設 BinaryTree 有一個獲取根節點的方法 getRoot()
    cout << endl;

    // 執行後序遍歷
    cout << "Postorder traversal: ";
    tree.postorderTraversal(tree.getRoot()); // 假設 BinaryTree 有一個獲取根節點的方法 getRoot()
    cout << endl;

    return 0;
}
