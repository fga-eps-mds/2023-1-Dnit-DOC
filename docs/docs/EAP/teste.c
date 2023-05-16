#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct celula
{
    unsigned k;
    char v;
} celula;

#define HT_SIZE 1572869u
#define key(a) (a.k)
#define eq(a, b) (a.k == b.k)

#ifdef STRING_HASH
#define INITIAL_HASH_VALUE 5381
#define MULT_HASH_VALUE 33
unsigned hashu(const char *x)
{
    unsigned h = INITIAL_HASH_VALUE;
    for (int i = 0; x[i] != '\0'; i++)
        h = (h * MULT_HASH_VALUE + x[i]) % HT_SIZE;
    return h;
}
#define key_t const char *
#define hash_k(k) (hashu(k))
#define eq_k(x, k) (strcmp(key(x), k) == 0)
#else
#define hash_k(k) (k % HT_SIZE)
#define key_t unsigned
#define eq_k(x, k) (key(x) == k)
#endif

#define hash(x) (hash_k(key(x)))

typedef struct CelulaEncadeada
{
    celula celula;
    struct CelulaEncadeada *next;
} CelulaEncadeada;

typedef struct HashTable
{
    unsigned size;
    CelulaEncadeada **v;
} HashTable;

HashTable inicia_hash()
{
    HashTable ht = {.size = 0};
    ht.v = (CelulaEncadeada **)malloc(HT_SIZE * sizeof(CelulaEncadeada *));
    for (unsigned i = 0; i < HT_SIZE; i++)
        ht.v[i] = NULL;
    return ht;
}

void libera_hash(HashTable ht)
{
    for (unsigned i; i < HT_SIZE; i++)
    {
        CelulaEncadeada *prev = ht.v[i], *next = NULL;
        while (prev)
        {
            next = prev->next;
            free(prev);
            prev = next;
        }
    }
    free(ht.v);
}

int insere_hash(HashTable *ht, celula x)
{
    unsigned h = hash(x);
    if (!ht->v[h])
    {
        ht->v[h] = (CelulaEncadeada *)malloc(sizeof(CelulaEncadeada));
        *ht->v[h] = (CelulaEncadeada){.next = NULL, .celula = x};
        return 1;
    }
    CelulaEncadeada *curr = ht->v[h];
    while (curr->next && !eq(curr->celula, x))
        curr = curr->next;
    if (eq(curr->celula, x))
        return 0;

    curr->next = (CelulaEncadeada *)malloc(sizeof(CelulaEncadeada));
    *curr->next = (CelulaEncadeada){.celula = x, .next = NULL};
    ht->size++;
    return 1;
}

int remove_hash(HashTable *ht, key_t k)
{
    unsigned h = hash_k(k);
    if (!ht->v[h])
        return 0;

    CelulaEncadeada *curr = ht->v[h], *to_remove = NULL;
    if (eq_k(curr->celula, k))
    {
        ht->v[h] = curr->next;
        to_remove = curr;
    }
    else
    {
        while (curr->next && !eq_k(curr->next->celula, k))
            curr = curr->next;

        if (!curr->next)
            return 0;

        to_remove = curr->next;
        curr->next = to_remove->next;
    }

    free(to_remove);
    return 1;
}

int delete_hash(HashTable *ht, celula x)
{
    unsigned h = hash(x);
    if (!ht->v[h])
        return 0;

    CelulaEncadeada *curr = ht->v[h], *to_remove = NULL;
    if (eq(curr->celula, x))
    {
        ht->v[h] = curr->next;
        to_remove = curr;
    }
    else
    {
        while (curr->next && !eq(curr->next->celula, x))
            curr = curr->next;

        if (!curr->next)
            return 0;

        to_remove = curr->next;
        curr->next = to_remove->next;
    }

    free(to_remove);
    return 1;
}

CelulaEncadeada *busca_hash(HashTable ht, key_t k)
{
    unsigned h = hash_k(k);
    CelulaEncadeada *curr = ht.v[h];
    while (curr)
    {
        if (eq_k(curr->celula, k))
            return curr;
        curr = curr->next;
    }
    return NULL;
}

int possui_hash(HashTable ht, celula x)
{
    CelulaEncadeada *curr = ht.v[hash(x)];
    while (curr)
    {
        if (eq(curr->celula, x))
            return 1;
        curr = curr->next;
    }
    return 0;
}

int main()
{
    HashTable ht = inicia_hash();
    celula celula;
    unsigned mn = 1 << 31, mx = 0;
    while (scanf(" %d %c", &celula.k, &celula.v) == 2)
    {
        insere_hash(&ht, celula);
        mn = celula.k < mn ? celula.k : mn;
        mx = celula.k > mx ? celula.k : mx;
    }

    for (unsigned i = mn; i <= mx; i++)
    {
        CelulaEncadeada *li = busca_hash(ht, i);
        if (li)
            printf("%c", li->celula.v);
    }
    printf("\n");

    return 0;
}