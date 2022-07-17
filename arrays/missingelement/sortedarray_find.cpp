
#include <iostream>
using namespace std;

int find_missing_element(int nums[10],int n){
  
int supposed_total_sum_of_array=(n*(n+1))/2;
int current_total_sum_of_array=0;
    for (int i = 0; i < n; i++)
    {
        current_total_sum_of_array+=nums[i];
    }

int missing_value=current_total_sum_of_array-supposed_total_sum_of_array;
return missing_value;  
}



int main(int argc, char const *argv[])
{
    int nums [10]={1,2,3,4,5,6,7,9,10,11};
    int length=sizeof(nums)/sizeof(nums[0]);
    int missingSum=find_missing_element(nums,length);
    printf("%d",missingSum);
   
    return 0;
}