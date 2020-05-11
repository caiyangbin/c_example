#include <stdio.h>
#include "include/linked_list.h"

int main() {

    node_t * p_head = init();

    insert_for_index(p_head,0,1);
    insert_for_index(p_head,1,2);
    insert_for_index(p_head,2,3);
    insert_for_index(p_head,3,4);

    traverse_list(p_head);

    printf("\n");
    delete(p_head,3,NULL);

    traverse_list(p_head);

    return 0;
}