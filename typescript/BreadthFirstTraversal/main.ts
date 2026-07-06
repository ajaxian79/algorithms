import {TreeNode} from "./TreeNode";

const numbers = new TreeNode<number>(1,
    new TreeNode<number>(1.1,
        new TreeNode<number>(1.11,
            new TreeNode<number>(1.111),
            new TreeNode<number>(1.112),
            new TreeNode<number>(1.113)),
        new TreeNode<number>(1.12,
            new TreeNode<number>(1.121),
            new TreeNode<number>(1.122),
            new TreeNode<number>(1.123)),
        new TreeNode<number>(1.13)
    )
);


const letters = new TreeNode<string>('A',
    new TreeNode<string>('B',
        new TreeNode<string>('C',
            new TreeNode<string>('F'),
            new TreeNode<string>('G'),
            new TreeNode<string>('H')),
        new TreeNode<string>('D',
            new TreeNode<string>('I'),
            new TreeNode<string>('J'),
            new TreeNode<string>('K')),
        new TreeNode<string>('E')
    )
);

const BreadthFirstTraversal = function(root: TreeNode<number|string>) {
    if (!root)
        return;

    const queue: TreeNode<number|string>[] = [root];

    while(queue.length) {
        const current = queue.shift();
        console.log(current?.value);

        current?.children.forEach((child) => {
            queue.push(child);
        });
    }

}

BreadthFirstTraversal(numbers);

BreadthFirstTraversal(letters);