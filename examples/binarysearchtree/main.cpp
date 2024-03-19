#include <iostream>
#include "binarySearchTree.h"

using namespace std;

// Printing functions passed to traversals. Must return void and take a single
// pass by reference argument of the type stored in the binary search tree. 
// This is a requirement of the traversal functions.
void print_on_line(int &x)
{
    cout << x << endl;
}
void print_together(int &x)
{
    cout << x << ' ';
}

int main()
{
    bSearchTreeType<int> tree;

    int num;

    cout << "Enter numbers ending with 0." << endl;
    cin >> num;
    while (num != 0)
    {
        tree.Rinsert(num);
        cin >> num;
    }

    cout << endl;
    cout << "node count  = " << tree.treeNodeCount() << endl;
    cout << "tree height = " << tree.treeHeight() << endl;
    cout << "leaves count = " << tree.treeLeavesCount() << endl;
    cout << endl;

    cout << "------- Passing visit function to inorderTraversal -------\n";
    cout << "inorder traversal\n";
    tree.inorderTraversal(print_on_line); // pass print_on_line function to traveral
    cout << endl;

    cout << "------- Passing visit function to traversals -------\n";
    cout << "inorder traversal:   ";
    tree.inorderTraversal(print_together); // pass print_together function to traversal
    cout << endl;

    if (tree.Rsearch(77))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}
