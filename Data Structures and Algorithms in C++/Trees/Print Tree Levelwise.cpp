#include <iostream>
#include <vector>
#include <queue>
using namespace std;

template <typename T>
class TreeNode
{
public:
  T data;
  vector<TreeNode<T> *> children;

  TreeNode(T data) { this->data = data; }

  ~TreeNode()
  {
    for (int i = 0; i < children.size(); i++)
    {
      delete children[i];
    }
  }
};

void printLevelWise(TreeNode<int> *root)
{

  queue<TreeNode<int> *> pendingNodes;
  pendingNodes.push(root);

  while (pendingNodes.size() != 0)
  {
    TreeNode<int> *front = pendingNodes.front();
    pendingNodes.pop();

    cout << front->data << ":";
    for (int i = 0; i < front->children.size(); i++)
    {
      if ((i + 1) == front->children.size())
      {
        cout << front->children[i]->data;
      }
      else
      {
        cout << front->children[i]->data << ",";
      }

      pendingNodes.push(front->children[i]);
    }
    cout << endl;
  }
}