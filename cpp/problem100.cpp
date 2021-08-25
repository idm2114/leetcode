bool dfs(TreeNode* p, TreeNode* q) {
    if (p == nullptr || q == nullptr) {
        if (p == nullptr && q == nullptr) return true;
        else return false;
    }
    if (p->val != q->val) return false;
    if (dfs(p->left, q->left)) 
        return dfs(p->right, q->right);
    else return false;
    
}
bool isSameTree(TreeNode* p, TreeNode* q) {
    return dfs(p, q);
}
