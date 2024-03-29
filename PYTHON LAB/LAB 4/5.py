class TreeNode:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

class BinaryTree:
    def __init__(self):
        self.root = None

    def height(self, node):
        if node is None:
            return 0
        else:
            left_height = self.height(node.left)
            right_height = self.height(node.right)
            return 1 + max(left_height, right_height)

    def compute_height(self):
        return self.height(self.root)

    def count_nodes(self, node):
        if node is None:
            return 0
        else:
            return 1 + self.count_nodes(node.left) + self.count_nodes(node.right)

    def get_node_count(self):
        return self.count_nodes(self.root)

    def add_node(self, value):
        if self.root is None:
            self.root = TreeNode(value)
        else:
            self._add_node(value, self.root)

    def _add_node(self, value, current_node):
        if value < current_node.value:
            if current_node.left is None:
                current_node.left = TreeNode(value)
            else:
                self._add_node(value, current_node.left)
        elif value > current_node.value:
            if current_node.right is None:
                current_node.right = TreeNode(value)
            else:
                self._add_node(value, current_node.right)

    def remove_node(self, value):
        self.root = self._remove_node(value, self.root)

    def _remove_node(self, value, current_node):
        if current_node is None:
            return current_node

        if value < current_node.value:
            current_node.left = self._remove_node(value, current_node.left)
        elif value > current_node.value:
            current_node.right = self._remove_node(value, current_node.right)
        else:
           
            if current_node.left is None:
                return current_node.right
            elif current_node.right is None:
                return current_node.left

            # Node with two children
            current_node.value = self._get_min_value(current_node.right)
            current_node.right = self._remove_node(current_node.value, current_node.right)

        return current_node

    def _get_min_value(self, node):
        while node.left is not None:
            node = node.left
        return node.value

tree = BinaryTree()


tree.add_node(10)
tree.add_node(5)
tree.add_node(15)
tree.add_node(3)
tree.add_node(7)
tree.add_node(12)
tree.add_node(18)


print("Tree Height:", tree.compute_height())
print("Number of Nodes:", tree.get_node_count())

tree.remove_node(15)

print("Tree Height:", tree.compute_height())
print("Number of Nodes:", tree.get_node_count())
