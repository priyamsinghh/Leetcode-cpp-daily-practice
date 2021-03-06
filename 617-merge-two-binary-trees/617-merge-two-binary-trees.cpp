class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        //add the values of t2 onto t1
        if(t1==NULL){
            return t2;
        }else if(t2==NULL){
            return t1;
        }else{ //t1!=NULL && t2!=NULL
            //use t1 as final result
            t1->val += t2->val;
            t1->left = mergeTrees(t1->left, t2->left);
            t1->right = mergeTrees(t1->right, t2->right);
            return t1;
        }
    }
};