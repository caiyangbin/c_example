//
// Created by Luuren on 2020/5/11.
//

//检查是否定义C_EXAMPLE_LINKED_LIST_H，没有就定义(只会在预处理时，执行一次)
#ifndef C_EXAMPLE_LINKED_LIST_H
#define C_EXAMPLE_LINKED_LIST_H

#endif //C_EXAMPLE_LINKED_LIST_H

/**
 * 节点
 */
typedef struct node {
    int data;
    struct node *p_next;
} node_t;

/**
 * 初始化链表
 * @return  头节点指针
 */
node_t *init();

/**
 * 链表长度
 * @param p_head 头节点指针
 * @return
 */
int size(node_t *p_head);

/**
 * 删除节点
 * @param p_head 头节点指针
 * @param index 要删除节点下标
 * @param delete_content 删除内容指针
 * @return 返回结果
 */
int delete(node_t *p_head, int index, int *delete_content);

/**
 * 插入节点（头插法）
 * @param p_head 头节点指针
 * @param index 插入下标
 * @param content 插入内容
 * @return 返回结果
 */
int insert_for_index(node_t *p_head, int index, int content);

/**
 * 在第一个节点前面插入节点（头插法）
 * @param p_head 头节点指针
 * @param content 插入内容
 * @return 返回结果
 */
int insert(node_t *p_head, int content);

/**
 * 遍历输出链表
 * @param p_head  头节点指针
 */
void traverse_list(node_t *p_head);

/**
 * 链表冒泡排序
 * @param p_head 头节点指针
 */
void pop_list(node_t *p_head);

/**
 * 链表冒泡排序(交换指针)
 * @param p_head 头节点指针
 */
void pop_list_for_point(node_t *p_head);

/**
 * 释放整个链表
 * @param p_head 头节点指针
 */
void free_list(node_t *p_head);