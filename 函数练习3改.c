#include <stdio.h>
int zhao(int a2[],int k,int s){//注意数组的定义 ,穿的是地址而不是数 
	int left=0;
	int right=s-1;
	while(left<=right){
		int mid=(left+right)/2;
		if(a2[mid]>k){
			right=mid-1;
		}
		else if(a2[mid]<k){
			left=mid+1;
		}
		else{
			return mid;//注意return的跳过功能 
		}
	}
	return -1;
}
int main(){
	int a1[]={1,2,3,4,5,6,7,8,9,10};
	int key=1;
	int ret=0;
	int sz=sizeof(a1)/sizeof(a1[0]);//必须在外面求好字节再传 
	ret=zhao(a1,key,sz);
	if(ret==-1){
		printf("没找到");
	}
	else{
		printf("下标为%d",ret);
	}
	return 0;
}
