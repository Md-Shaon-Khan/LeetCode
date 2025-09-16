class TrieNode:
    def __init__(self):
        self.children = {}          # Dictionary to store child nodes
        self.isEndOfWord = False    # Flag to mark end of a word


class Trie(object):

    def __init__(self):
        """
        Initialize your Trie.
        """
        self.root = TrieNode()

    def insert(self, word):
        """
        Inserts a word into the trie.
        """
        node = self.root
        for char in word:
            if char not in node.children:
                node.children[char] = TrieNode()
            node = node.children[char]
        node.isEndOfWord = True

    def search(self, word):
        """
        Returns True if the word is in the trie.
        """
        node = self.root
        for char in word:
            if char not in node.children:
                return False
            node = node.children[char]
        return node.isEndOfWord

    def startsWith(self, prefix):
        """
        Returns True if there is any word in the trie that starts with the prefix.
        """
        node = self.root
        for char in prefix:
            if char not in node.children:
                return False
            node = node.children[char]
        return True


# ---------------- Example Input/Output ----------------
# This simulates the LeetCode style input
commands = ["Trie", "insert", "search", "search", "startsWith", "insert", "search"]
values = [[], ["apple"], ["apple"], ["app"], ["app"], ["app"], ["app"]]

# Instantiate Trie object
trie = None
output = []

for i, cmd in enumerate(commands):
    if cmd == "Trie":
        trie = Trie()
        output.append(None)
    elif cmd == "insert":
        trie.insert(values[i][0])
        output.append(None)
    elif cmd == "search":
        res = trie.search(values[i][0])
        output.append(res)
    elif cmd == "startsWith":
        res = trie.startsWith(values[i][0])
        output.append(res)

print(output)
