//이진삽입정렬
#include <stdio.h>
int main(void){

    struct number
    {
        int num;
        struct number *next;
    };
    
    int n = 0;
    int temp = 0;
    struct number *tail;

    scanf("%d", &n);

    scanf("%d",&temp);
    struct number *first;
    first->num = temp;
    first->next = tail;

    for (int i = 0 ; i >= n - 2 ; i++){
        scanf("%d",&temp);
        struct number *node;       
        node->num = temp;
        node->next =first -> next;
        first ->next = node;        
    }

}