#include<stdio.h>

struct array
{
    int a[20];
    int size;
    int length;

};

void Display(struct array arr)
{
int i;
printf("\nElements are\n");
for(i=0;i<arr.length;i++)
  printf("%d   ",arr.a[i]);


}
void Append(struct array *arr,int x)
{
if(arr->length<arr->size)
arr->a[arr->length++]=x;

}
void insert(struct array *arr,int index,int x)
{
int i;
if (index>=0&&index<=arr->length)
{
    for(i=arr->length;i>index;i--)
    arr->a[i]=arr->a[i-1];
    arr->a[index]=x;
    arr->length++;
}
}
int delete(struct array *arr,int index)
{
    int x=0;
if(index>=0&&index<=arr->length)
{
   x=arr->a[index];
    for(int i=index;i<=arr->length-1;i++)

       arr->a[i]=arr->a[i+1];
       arr->length--;  
       return x;

}
return 0;

} 

int main()
{
 struct array arr={{2,3,4,5,6},20,5};
   printf("%d\n",delete(&arr,4));

 insert(&arr,4,20);
 Display(arr);





}