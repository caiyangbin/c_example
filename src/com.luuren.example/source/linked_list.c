//
// Created by Luuren on 2020/5/11.
//
#include <stdlib.h>
#include <stdio.h>
#include "../include/linked_list.h"

node_t *init() {
    node_t *p_head = (node_t *) malloc(sizeof(node_t));
    if (NULL == p_head) {
        printf("动态分配内存失败，程序结束！\n");
        exit(-1);
    }
    p_head->p_next = NULL;
    return p_head;
}

int size(node_t *p_head) {
    int count = 0;
    p_head = p_head->p_next;
    while (p_head) {
        count++;
        p_head = p_head->p_next;
    }
    return count;
}

int insert_for_index(node_t *p_head, int index, int content) {
    if (NULL == p_head || index < 0) {
        return 0;
    }

    node_t *t = p_head;
    int count = 0;
    while (NULL != t && count < index) {
        count++;
        t = t->p_next;
    }

    node_t *p_new = (node_t *) malloc(sizeof(node_t));
    if (NULL == p_new) {
        printf("动态分配内存失败，程序结束！\n");
        exit(-1);
    }

    p_new->data = content;
    p_new->p_next = t->p_next;
    t->p_next = p_new;

    return 1;
}

int insert(node_t *p_head, int content) {
    node_t *p_new = (node_t *) malloc(sizeof(node_t));
    if (NULL == p_new) {
        printf("动态分配内存失败，程序结束！\n");
        exit(-1);
    }

    p_new->data = content;
    p_new->p_next = p_head->p_next;
    p_head->p_next = p_new;

    return 1;
}

int delete(node_t *p_head, int index, int *content) {
    if (p_head == NULL || index < 0) {
        return 0;
    }

    int count = 0;
    while (p_head != NULL && count < index) {
        p_head = p_head->p_next;
        count++;
    }

    if (NULL != content){
        *content = p_head->data;
    }
    node_t *tmp = p_head->p_next;
    p_head->p_next = p_head->p_next->p_next;

    free(tmp);

}


void traverse_list(node_t *p_head) {
    p_head = p_head->p_next;
    while (NULL != p_head) {
        printf("%d ", p_head->data);
        p_head = p_head->p_next;
    }
}


void free_list(node_t *p_head) {
    node_t *t = NULL;
    while (p_head) {
        t = p_head->p_next;
        free(p_head);
        p_head = t;
    }
}


