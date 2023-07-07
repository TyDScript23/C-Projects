#pragma once
#include<iostream>

using namespace std;

template<class T>
class llist67
{
    // inner class
    template<class T>
    class lnode
    {
    public:
        T data;// field of type T called data
        lnode* next;// field of type lnode pointer called next
    };
    // end inner class

private:
    lnode<T>* hptr;// declare lnode pointer called hptr (head)
    lnode<T>*cptr;// declare lnode pointer called cptr (current)
    lnode<T>* tptr;// declare lnode pointer called tptr (tail)

public:
    llist67()
    {
        hptr = NULL;
        cptr = NULL;
        tptr = NULL; // set three pointers to NULL
    }

    template<class T>
    void addn(T newnode)// add function - argument newnode of type T, return void
    {
        lnode<T>* nptr;
        nptr = new lnode<T>;
        nptr->data = newnode;// set data field of nptr to new data
        nptr->next = NULL;// set next field of nptr to NULL (at end)

        if (tptr == NULL)// if tptr is still NULL
            tptr = nptr;// set tptr to newnode at nptr
        else
        {
            tptr->next = nptr;// otherwise have tail's pointer point to new pointer
            tptr = nptr;   // reposition tail pointer to new pointer
        }

        if (hptr == NULL)// if hptr to still NULL
            hptr = nptr;// set hptr to newnode at nptr
    }

    void display()
    {
        cptr = hptr;// set current pointer to head pointer
            cout << hptr << endl;

            while (cptr != NULL)// while current pointer is not at NULL
            {
                cout << cptr << " " << cptr->data << " " << cptr->next << endl;// print cptr, cptr's data field, and cptr's next field

                cptr = cptr->next;// move current pointer to next node
            }
        cout << tptr << endl;
    }

    template<class T>
    bool search(T d)
    {
        lnode<T>* nptr;
        nptr = new lnode<T>;
        nptr->data = d;
        nptr->next = NULL;

        cptr = hptr;// set current pointer to head pointer

        while (cptr != NULL)// while current pointer is not at NULL
        {
            if (cptr->data == d)// see if data field at current pointer is equal to d
                return true;
            cptr = cptr->next;// move current pointer to next node
        }
        return false;
    }
};
