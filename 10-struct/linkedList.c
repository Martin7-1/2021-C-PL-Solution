//
// Created by Zyi on 2021/12/14.
//
#include <stdio.h>
#include <malloc.h>
#include <string.h>

struct Node {
    struct Node* next;
    int val;
    struct Node* prior;
};

struct Node* createLinkedList(int len);
void freeMemory(struct Node* head, int len);
// 打印当前节点的值
void print(struct Node* node);
// 向前step步
struct Node* forward(struct Node* node, int step, int len);
// 向后step步
struct Node* backward(struct Node* node, int step, int len);
// 插入值
void insert(struct Node* node, int val);
// 删除当前值，指针指向下一个节点
struct Node* removeNode(struct Node* node);

int main() {
    int len, opLen;
    scanf("%d %d", &len, &opLen);
    char* operation = malloc(20 * sizeof(char));

    // 初始化一个linkedList
    struct Node* node = createLinkedList(len);

    for (int i = 0; i < opLen; i++) {
        scanf("%s", operation);
        if (strcmp(operation, "Forward") == 0) {
            int step;
            scanf("%d", &step);
            node = forward(node, step, len);
        } else if (strcmp(operation, "Backward") == 0) {
            int step;
            scanf("%d", &step);
            node = backward(node, step, len);
        } else if (strcmp(operation, "Print") == 0) {
            print(node);
        } else if (strcmp(operation, "Insert") == 0) {
            int val;
            scanf("%d", &val);
            insert(node, val);
            len++;
        } else if (strcmp(operation, "Remove") == 0) {
            node = removeNode(node);
            len--;
        }
    }

    free(operation);
    freeMemory(node, len);
    return 0;
}

struct Node* createLinkedList(int len) {
    struct Node* head = malloc(sizeof(struct Node));
    // 用一个res来保存头节点
    struct Node* res = head;
    for (int i = 0; i < len; i++) {
        if (i != len - 1) {
            struct Node* next = malloc(sizeof(struct Node));
            head->next = next;
            head->val = i + 1;
            next->prior = head;
            head = next;
        } else {
            head->next = res;
            head->val = i + 1;
            res->prior = head;
        }
    }

    return res;
}

void print(struct Node* node) {
    // 打印当前节点的值
    printf("%d\n", node->val);
}

struct Node* forward(struct Node* node, int step, int len) {
    // 向前走step步
    step %= len;
    for (int i = 0; i < step; i++) {
        node = node->next;
    }

    return node;
}

struct Node* backward(struct Node* node, int step, int len) {
    // 向后走step步
    step %= len;
    for (int i = 0; i < step; i++) {
        node = node->prior;
    }

    return node;
}

void insert(struct Node* node, int val) {
    // 将val插入
    struct Node* temp = node->next;
    node->next = malloc(sizeof(struct Node));
    node->next->val = val;
    node->next->prior = node;
    node->next->next = temp;
    temp->prior = node->next;
}

struct Node* removeNode(struct Node* node) {
    // 记得释放内存
    struct Node* prior = node->prior;
    struct Node* next = node->next;

    prior->next = next;
    next->prior = prior;
    free(node);

    return next;
}

void freeMemory(struct Node* node, int len) {
    for (int i = 0; i < len; i++) {
        struct Node* next = node->next;
        free(node);
        node = next;
    }
}