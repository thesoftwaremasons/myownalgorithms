
#include<iostream>


void find_multiple_missing_element_in_sorted_array(int arr[],int len){

    int d=arr[0]-0;
    
    
    for(int i=0;i<len;i++){
        int diff=arr[i]-i;
        if(diff!=d){
            int count=diff-d;
            for(int v=d;v<diff;v++){
                printf("missing value is %d \n", arr[i]-count);   
                count--;
            }
       
            d=diff;          
        }
    }
}

int main(int argc, char const *argv[])
{

    int arr[]={3,4,5,6,7,9,10,12,14,16,19};
    int arr2[]={6,7,8,9,11,12,15,16,17,18,19};

    int len=sizeof(arr)/sizeof(arr[0]);
    find_multiple_missing_element_in_sorted_array(arr,len);
    /* code */
    return 0;
}


