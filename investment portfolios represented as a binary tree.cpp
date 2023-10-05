// You are using GCC
#include <stdio.h>
#define MAX_NODES 50

struct Node {
    int data;
    int leftIndex;
    int rightIndex;
};

struct Node tree[MAX_NODES];
int currentIndex = 0;

int createNode(int data) {
    tree[currentIndex].data = data;
    tree[currentIndex].leftIndex = -1;
    tree[currentIndex].rightIndex = -1;
    return currentIndex++;
}

int insertNode(int rootIndex, int data) {
    if (rootIndex == -1) {
        return createNode(data);
    }
    if (data < tree[rootIndex].data) {
        tree[rootIndex].leftIndex = insertNode(tree[rootIndex].leftIndex, data);
    } else {
        tree[rootIndex].rightIndex = insertNode(tree[rootIndex].rightIndex, data);
    }
    return rootIndex;
}

int calculateSum(int rootIndex) {
    if (rootIndex == -1) {
        return 0;
    }
    int leftSum = calculateSum(tree[rootIndex].leftIndex);
    int rightSum = calculateSum(tree[rootIndex].rightIndex);
    return leftSum + rightSum + tree[rootIndex].data;
}

int main() {
    int N;
    scanf("%d", &N);

    int i, value;
    int rootIndex = -1;

    for (i = 0; i < N; i++) {
        scanf("%d", &value);
        rootIndex = insertNode(rootIndex, value);
    }

    int totalValue = calculateSum(rootIndex);
    printf("%d\n", totalValue);

    return 0;
}

