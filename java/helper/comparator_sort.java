package helper;
import java.util.*;
class comparator_sort {
    public int partition(int[][] ar,int low,int high)
     {
         int j = low;
         for(int i = low; i < high; i++)
         {
             if( (ar[i][1] - ar[i][0] > ar[high][1] - ar[high][0]) || (ar[i][1] - ar[i][0] == ar[high][1] - ar[high][0] && ar[i][1] > ar[high][1] ) )
             {
                 int t[] = ar[i];
                 ar[i] = ar[j];
                 ar[j] = t;
                 j++;
             }
 
         }
         int t[] = ar[j];
         ar[j] = ar[high];
         ar[high] = t;
         return j;
     }
 
     public void quicksort(int [][] ar, int low, int high)
     {
         if(low < high)
         {
             int par = partition(ar,low,high);
             quicksort(ar,low,par-1);
             quicksort(ar,par+1,high);
         }
     }
 
     class Sort implements Comparator<int []> {
     // Used for sorting in ascending order of
     // roll number
     public int compare(int[] a, int [] b)
     {
         if (a[1] - a[0] > b[1] - b[0])
         return -1;
         else if( (a[1] - a[0] == b[1] - b[0] && a[1] > b[1] ) )
         return -1;
         return +1;
     }
 }
 
     public int minimumEffort(int[][] tasks) {
         Arrays.sort(tasks, new Sort());
 
 
 
         int ans = 0;
         int t = 0;
         for(int i = 0; i < tasks.length ; i++)
         {
             if(tasks[i][1] > t)
             {
                 ans += (tasks[i][1] -t) ;
                 t = tasks[i][1];
             }
 
             t = t - tasks[i][0];
             // System.out.println(tasks[i][1] - tasks[i][0] + " " + tasks[i][0] + " " + tasks[i][1]);
         }
         return ans;
     }
 }

/*   ALTERNATIVE BETTER      **********************************************     */
//  Arrays.sort(tasks, (a, b) -> a[0] - b[0] - (a[1] - b[1]));
