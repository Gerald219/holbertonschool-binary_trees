# Binary trees in C

Holberton School coursework implementing binary-tree operations with pointers and recursive traversal. Nodes contain an integer value, a parent pointer, and left/right child pointers; the structure is declared in `binary_trees.h`.

## Implemented operations

- Create nodes, insert left/right children, and delete a tree.
- Test whether a node is a leaf or root.
- Traverse in preorder, inorder, and postorder.
- Calculate height, depth, size, leaves, internal nodes, and balance.
- Check full/perfect trees and find siblings or uncles.

These are general binary trees. A search-tree ordering rule is not imposed by these functions.

## Build and run a demonstration

Requirements: GCC and a Linux/POSIX terminal. From the repository root:

```bash
mkdir -p build
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 \
  9-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c \
  9-binary_tree_height.c binary_tree_print.c -o build/height
./build/height
```

The example prints a tree and then reports heights for selected nodes. Height counts edges: a leaf has height zero.

Each numbered `*-main.c` contains its own `main` function. To try another example, compile that main file with its required implementation files and `binary_tree_print.c`; do not compile all the main files together.

## Source guide

| Files | Purpose |
| --- | --- |
| `0-` through `3-binary_tree_*.c` | Node creation, insertion, and deletion |
| `4-` and `5-binary_tree_*.c` | Leaf/root predicates |
| `6-` through `8-binary_tree_*.c` | Traversals |
| `9-` through `14-binary_tree_*.c` | Tree measurements |
| `15-` through `18-binary_tree_*.c` | Structure predicates and family relationships |
| `*-main.c` | Coursework demonstration programs |
| `binary_tree_print.c` | Display helper |

The main files are examples rather than a comprehensive automated test suite. Generated executables and editor backups are excluded from version control.

[Gerald Mulero (@Gerald219)](https://github.com/Gerald219)
