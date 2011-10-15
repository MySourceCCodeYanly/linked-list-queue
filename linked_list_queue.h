typedef struct llqnode_s llqnode_t;

struct llqnode_s
{
    llqnode_t *next;
    void *item;
};

typedef struct
{
    llqnode_t *head, *tail;
    int count;
} linked_list_queue_t;

void *llqueue_new(
);

void llqueue_free(
    linked_list_queue_t * qu
);

void *llqueue_poll(
    linked_list_queue_t * qu
);

void llqueue_offer(
    linked_list_queue_t * qu,
    void *item
);

void *llqueue_remove_item(
    linked_list_queue_t * qu,
    void *item
);

int llqueue_count(
    linked_list_queue_t * qu
);