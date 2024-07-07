package helper;
import java.util.*;
public class sort2 {

    public int  partition(ArrayList<Integer> priorty, ArrayList<Integer> ar, int low, int high)
    {
        int j = low;
        for(int i = low; i < high; i++)
        {
            if(priorty.get(i) < priorty.get(high))
            {
                int temp = priorty.get(i);
                priorty.set(i,priorty.get(j));
                priorty.set(j,temp);

                temp = ar.get(i);
                ar.set(i,ar.get(j));
                ar.set(j,temp);
                j+=1;
            }
        }
        int temp = priorty.get(high);
        priorty.set(high,priorty.get(j));
        priorty.set(j,temp);

        temp = ar.get(high);
        ar.set(high,ar.get(j));
        ar.set(j,temp);

        return j;
    }
    public void quickSort(ArrayList<Integer> priorty, ArrayList<Integer> ar,int low,int high)
    {
        if(low < high)
        {
            int par = partition(priorty,ar,low,high);
            quickSort(priorty,ar,low,par-1);
            quickSort(priorty, ar, par+1, high);
        }
    }

    public static void main(String[] args) {
        {
            sort2 obj = new sort2();
            ArrayList<Integer> pr,ar;
            pr = new ArrayList<>();
            ar = new ArrayList<>();
            int diff[] = {68,35,52,47,86};
            int pro[] = {67,17,1,81,3};
            for(int i = 0; i < diff.length; i++)
            {
                pr.add(pro[i]);
                ar.add(diff[i]);
            }
            for(int i = 0; i < pr.size(); i++)
            {
                System.out.print(pr.get(i)+":");
            }
            System.out.println();
            for(int i = 0; i < ar.size(); i++)
            {
                System.out.print(ar.get(i)+":");
            }
            System.out.println();
            obj.quickSort(pr,ar,0,pr.size()-1);
            for(int i = 0; i < pr.size(); i++)
            {
                System.out.print(pr.get(i)+":");
            }
            System.out.println();
            for(int i = 0; i < ar.size(); i++)
            {
                System.out.print(ar.get(i)+":");
            }
            System.out.println();
        }
    }
    
}
