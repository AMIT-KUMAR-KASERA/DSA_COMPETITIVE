shifting all zero from right side

import java.util.*;
public class Main
{
	public static void main(String[] args) {
	  int arr[]={1,0,5,0,7,8,0};
	  int count=1;
	  for(int i=0;i<arr.length-count;i++){
	      if(arr[i]==0&&arr[arr.length-count]==0)
	      {
	          int temp;
	          temp=arr[i];
	          arr[i]=arr[arr.length-count-1];
	          arr[arr.length-count-1]=temp;
	          count++;
	          
	      }
	      else if(arr[i]==0)
	      {
	          int temp;
	          temp=arr[i];
	          arr[i]=arr[arr.length-count];
	          arr[arr.length-count]=temp;
	          count++;
	      }
	      
	  }
	  System.out.println(Arrays.toString(arr));
	}
}
