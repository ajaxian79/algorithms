import {TreeNode} from './TreeNode';

const root = new TreeNode(
    1,
    new TreeNode(2, 
        new TreeNode(2.1, 
            new TreeNode(2.11), 
        ),
        new TreeNode(2.2, 
            new TreeNode(2.21),
            new TreeNode(2.22),
            new TreeNode(2.23)
        ),
        new TreeNode(2.3, 
            new TreeNode(2.31) 
        ),
    ),
    new TreeNode(3),
    new TreeNode(4, 
        new TreeNode(4.1, 
            new TreeNode(4.11), 
        ),
        new TreeNode(4.2, 
            new TreeNode(4.21),
            new TreeNode(4.22),
            new TreeNode(4.23)
        ),
        new TreeNode(4.3, 
            new TreeNode(4.31) 
        ),
    ),
    new TreeNode(5),
    new TreeNode(6)
);

const DepthFirstTraversal = function(root: TreeNode) {
    if (!root)
        return;

    const stack: TreeNode[] = [root];

    while(stack.length) {
        const current = stack.pop();
        console.log(current?.value);
        current?.children.forEach((_, index) => {
            const reverseIndex = current.children.length - 1 - index;
            stack.push(current.children[reverseIndex]);
        });
    }
}

DepthFirstTraversal(root);