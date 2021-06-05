// root, left, right
class Solution {
    public ArrayList<Integer> a = new ArrayList<Integer>();
    public List<Integer> preorder(Node root) {
        if (root == null) {
            return a;
        }
        else a.add(root.val);
        for (int i = 0; i < root.children.size(); i++) {
            preorder(root.children.get(i));
        }
        return a;
    }
}
