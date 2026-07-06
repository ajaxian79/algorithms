export class TreeNode {

    value: number;
    children: TreeNode[];

    constructor(value: number, ...children: TreeNode[]) {
        this.value = value;
        this.children = children;
    }
    
}