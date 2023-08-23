#include<bits/stdc++.h>

using namespace std;

template<typename T>
class mapnode{
public:

    string key;
    T value;
    mapnode* next;

    mapnode(string key , T value)
    {
        this->value = value;
        this->key = key;
        next = NULL;
    }

    ~mapnode()
    {
        delete next;
    }

};

template<typename T>
class mymap{
private:
    mymap<T>** buckets;
    int count;
    int numbuckets;

    int getbucketindex(string key)
    {
        int hashcode = 0;
        int base = 1;
        int p = 37;

        for(int i=key.size()-1;i>=0;i--)
        {
            hashcode += key[i] * base;
            base = base * p;
            hashcode = hashcode % numbuckets;
            base = base % numbuckets;
        }

        return hashcode%numbuckets;
    }
public:
    mymap()
    {
        count = 0;
        numbuckets = 5;
        buckets = new mapnode<T>* [numbuckets];
        for(int i=0;i<numbuckets;i++)
        {
            buckets[i] = NULL;
        }
    }

    ~mymap()
    {
        for(int i=0;i<numbuckets;i++)
        {
            delete buckets[i];
        }
        delete []buckets;
    }

    void insert(string key, T value)
    {
        int bucketindex = getbucketindex(key);

        mapnode<T>* head = buckets[bucketindex];

        while(head != NULL)
        {
            if(head->key == key)
            {
                head->value = key;
                return;
            }
            head = head->next;
        }

        mapnode<T>* node = new mapnode<T>*(key,value);

        node->next = buckets[bucketindex];
        buckets[bucketindex] = node;
        count++;

    }

    int size()
    {
        return count;
    }

    T remove(string key)
    {
        int bucketindex = getbucketindex(key);
        mapnode<T>* head = buckets[bucketindex];
        mapnode<T>* prev = NULL;

        while(head != NULL)
        {
            if(head->key == key)
            {
                if(prev == NULL)
                {
                    buckets[bucketindex] = head->next;
                }
                else{
                    prev->next = head->next;
                }
                T value = head->value;
                head->next = NULL;
                delete head;
                count--;

                return value;
            }
            prev = head;
            head = head->next;
        }
        return 0;
    }

    T getvalue(string key)
    {
        int bucketindex = getbucketindex(key);
        mapnode<T>* head = buckets[bucketindex];

        while(head != NULL)
        {
            if(head->key == key)
            {
                return head->value;
            }
            head->next;
        }

        return 0;
    }
};

int main()
{

}
