int averageValue(int* nums, int numsSize) {
    int i,sum=0,count=0;
   for(i=0;i<numsSize;i++){
    if(nums[i]%6==0){
        sum+=nums[i];
        count++;
    }
   } 
   if(count==0){
     return 0; 
     } 
    else {
     return sum/count;
}
}
