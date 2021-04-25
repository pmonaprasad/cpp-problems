//Definition for TreeNode
class TreeNode {
public:
    long val;
    TreeNode* left;
    TreeNode* right;
    TreeNode* next;
    TreeNode (long x) {
        val = x;
        left = NULL;
        right = NULL;
        next = NULL;
    }
}

//Use new TreeNode(data) to create new Node


TreeNode *binaryTreeInsertion(TreeNode *root)
{
    queue<TreeNode *> s;
    s.push(root);
    TreeNode* curr = root;

// push nodes in stack and check if the left child or right child is empty to insert a new node

     while(s.empty() == false)
     {
        if(curr->left == NULL && curr->right != NULL)
        {
            curr->left = new TreeNode(0);
            s.push(curr->right);z
        }
        else if(curr->left != NULL && curr->right == NULL)
        {
            curr->right = new TreeNode(0);
            s.push(curr->left);
        }
        else if(curr->left != NULL && curr->right != NULL)
        {
            s.push(curr->left);
            s.push(curr->right);
        }
        s.pop();
        if(s.empty() == false)
        curr = s.front();
        else
        curr = NULL;
    
    }
       return root;

};
