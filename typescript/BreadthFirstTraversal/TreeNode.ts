export class TreeNode<T> {

    value: T;
    children: TreeNode<T>[];

    constructor(value: T, ...children: TreeNode<T>[]) {
        this.value = value;
        this.children = children;
    }

}