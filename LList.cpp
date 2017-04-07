#include<iostream>
using namespace std;
class a
{
    struct node
    {
        int info;
        node * next;
    };
    node * start=NULL;
    node * save=NULL;
    node * ptr;
    node * new_node;
public:
    void create()
    {
        int num;
        cin>>num;
        while(num!=-1)
        {
            new_node=new node;
            new_node->info=num;
            new_node->next=start;
            start=new_node;

            cin>>num;
        }
    }
    void insatany()
    {
        int num,c=0;
        int pos;
        cout<<"enter the number and position where to be inserted";
        cin>>num;
        cin>>pos;
        ptr=start;
        while(ptr!=NULL)
     {
         c++;
         new_node=new node;
         new_node->info=num;
         if(c==pos)
         {
             if(save==NULL)
          {
              new_node->next=start;
              start=new_node;
              break;
          }
          else
          {
              new_node->next=save->next;
              save->next=new_node;
              break;
          }
         }
         if(ptr->next==NULL)
         {
         new_node->next=NULL;
         ptr->next=new_node;
         break;

         }
      save=ptr;
      ptr=ptr->next;
     }
    }
    void ins_sorted()
    {
        int num;
        int f=0;
        cout<<"enter the no  to be inserted";
        cin>>num;
        ptr=start;
        while(ptr!=NULL)
        {
            if(ptr->info>=num)
            {
                break;
            }
                save=ptr;
                ptr=ptr->next;
        }
                if(save==NULL)
                {
                    new_node=new node;
                    new_node->info=num;
                    new_node->next=start;
                    start=new_node;

                }
                else
                {
                    new_node=new node;
                    new_node->info=num;
                    new_node->next=save->next;
                    save->next=new_node;

                }
    }
    void delatany()
    {
        int c=0;
        int pos;
        cout<<"enter the position ";
        cin>>pos;
        ptr=start;
        while(ptr!=NULL)
        {
            c++;
            if(c==pos)
            {
                if(save==NULL)
                {
                    ptr=start;
                    start=ptr->next;
                    delete ptr;
                    break;
                }
                else
                {

                save->next=ptr->next;
                delete ptr;
                break;
                }
            }
            save=ptr;
            ptr=ptr->next;
        }


    }
    void count_ele()
    {
        int c=0;
        int ele;
        cout<<"enter the element ";
        cin>>ele;
        ptr=start;
        while(ptr)
        {
            if(ptr->info==ele)
                c++;

            ptr=ptr->next;
        }
        cout<<"element is"<<c<<"times";

    }
    void show()
    {
        ptr=start;
        while(ptr!=NULL)
        {
            cout<<ptr->info<<endl;
            ptr=ptr->next;
        }
    }
    void delafter()
    {
        int c=0;
        int loc;
        cout<<"enter the location after which u want to delete";
        cin>>loc;
        ptr=start;
        while(ptr!=NULL)
        {
            c++;
            if(loc==c)
            {
                save=ptr->next;
                ptr->next=ptr->next->next;
                delete save;
                break;

            }

            ptr=ptr->next;
        }

    }
    void del_given_ele()
    {
        int num;
        cout<<"enter the element to be deleted";
        cin>>num;
        ptr=start;
        while(ptr!=NULL)
        {
            if(ptr->info==num)
            {
                save->next=ptr->next;
                delete ptr;
                break;
            }
            save=ptr;
            ptr=ptr->next;
        }

    }
    void sort_()
    {
        int c=0;
        ptr=start;
        {c++;
            ptr=ptr->next;
        }
        for(int i=1;i<c;i++)
        {
            ptr=start;
            k=c-i+1;
            while()
        }

    }

};
main()
{
    a ob;
  ob.create();        //creation of list
  ob.insatany();      // insertion at any node
  ob.ins_sorted();      //insertion in a sorted list
  ob.delatany();       //deletion of any given node
  ob.count_ele();     // counting elements of list
  ob.delafter();     
  ob.del_given_ele();
  ob.sort_();             //sorting of list
    ob.show();             // printing list

}
