#include <stdio.h>
#include <stdlib.h>

struct array
{
    int total_size;
    int used_size;
    int *ptr;
};
// void insert
void create(struct array *p, int total, int use)
{
    p->total_size = total;
    p->used_size = use;
    p->ptr = (int *)malloc(total * sizeof(int));

    return *ptr;
};
void display(struct array *p)
{
    printf(" \nARRAY = ");
    for (int i = 0; i <= p->used_size; i++)
    {
        printf(" %d", (p->ptr)[i]);
    }
}

void add_val(struct array *p)
{
    for (int i = 0; i <= p->used_size; i++)
    {
        printf("\nenter element %d = ", i);
        scanf(" %d", &(p->ptr)[i]);
    }
}

void insert(struct array *p, int index)
{
    int total, used ,value;
    p->total_size = total;
    p->used_size = used;
    printf("\n Insert the value at %d index : ");
    scanf("%d",&value);
    printf(" %d, %d",total, used);

    int i=p->used_size;
    printf("%d", i);
    for(; i >= index; i--)
    {
        (p->ptr)[i+1] =(p->ptr)[i];
    }
    printf("%d",i);
    (p->ptr)[i]=value;
    // p->used_size++;
    
}

int main()
{
    struct array new, new2;
    // create(&new, 50, 5);

    // add_val(&new)1.


    create(&new, 20, 3);
    add_val(&new);

    printf("New : \n");
    display(&new);

    insert(&new);
    printf("\n update :");
    display(&new);
    // printf("New : \n");
    // display(&new2);

    return 0;
}
