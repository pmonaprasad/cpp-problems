//Definition of TreeNode
class TreeNode {

public:
    long val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() {}

    TreeNode (long x) {
    val = x;
    left = NULL;
    right = NULL;
  }
};

//Use new TreeNode(data) to create new Node


class BinaryTreeLevelOrderTraversal
{
public:
    vector<vector<int>> binaryTreeLevelOrderTraversal(TreeNode *root)
    {
      vector<vector<int>> vc;
      vector<int> vc1;
      queue<TreeNode *> q1;
      queue<TreeNode *> q2;
      TreeNode* curr;

      q1.push(root);
      while(q1.empty() == false || q2.empty() == false)
      {
        if(q1.empty() == false && q2.empty() == true)
        {
          while(q1.empty() == false)
        {
          curr = q1.front();
          int rval = curr->val;
          vc1.push_back(rval);
          if(curr->left != NULL)
               q2.push(curr->left);
          if(curr->right != NULL)
                q2.push(curr->right); 
          q1.pop();    

        }
        vc.push_back(vc1);
        vc1.clear();
        }

        if(q1.empty() == true && q2.empty() == false)
        {
          while(q2.empty() == false)
        {
          curr = q2.front();
          int rval = curr->val;
          vc1.push_back(rval);
          if(curr->left != NULL)
               q1.push(curr->left);
          if(curr->right != NULL)
                q1.push(curr->right); 
          q2.pop();    

        }
        vc.push_back(vc1);
        vc1.clear();
        }
      }
    return vc;
    }

};
