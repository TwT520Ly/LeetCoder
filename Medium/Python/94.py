# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        temp = []
        if root:
            temp += self.inorderTraversal(root.left)
            temp.append(root.val)
            temp += self.inorderTraversal(root.right)
        return temp

class Solution2:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        stack, visit = [], []
        temp_node = root
        while len(stack) or temp_node:
            if temp_node:
                stack.append(temp_node)
                temp_node = temp_node.left
            else:
                temp_node = stack.pop()
                visit.append(temp_node.val)
                temp_node = temp_node.right
        return visit

