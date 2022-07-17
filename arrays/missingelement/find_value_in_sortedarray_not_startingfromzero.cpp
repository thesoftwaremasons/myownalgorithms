#include <iostream>
using namespace std;


int find_value_in_sortedarray_not_startingfromzero (int val[],int l){

    int d=val[0]-0;
        for(int i=0;i<l;i++){
            if(val[i]-i!=d){

                return i+d;
            }
        }
    return 0;
}

int main(int argc, char const *argv[])
{
    int nums []={4,5,6,7,8,9,10,11,13,15};
    int l=sizeof(nums)/sizeof(nums[0]);
   int result= find_value_in_sortedarray_not_startingfromzero(nums,l);
   printf("%d",result);
    return 0;
}
