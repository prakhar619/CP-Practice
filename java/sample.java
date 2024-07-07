import java.util.*;

/*      Max         Min
long  9.2e18      -9.2e18
int     2.1e9    
*/

/*
 * int[] ar; or int ar[];
 * ar = new int[20];
 * ar.length;
 */

/*STL
 * ArrayList<Long> ar= new ArrayList<>();
 *      ar.add(i)
 *      ar.set(pos,i);
 *      ar.get(pos);
 * ar.size()
 * 
 * Map m = new HashMap<Integer,Integer>();       
        * Implementation/Classes:
        *          TreeMap
        *          LinkedHashMap
        *          HashMap
        * Interfaces:
        *          Map
        *          SortedMap
        * for(Map.Entry<INT,INT> entry: m.entrySet())
        * {
        *       entry.getValue();entry.getKey();
        * }
 * 
 */

 /* String
  * str.length()
  */
public class sample
{
    public int modVal = 1000000007;

    public int orangesRotting(int[][] grid) {
        int ans = 0;
        int inc = 1;
        while(inc > 0)
        {
            int new_grid[][] = new int[grid.length][grid[0].length];
            for(int i = 0; i < grid.length; i++)
            for(int j = 0; j < grid[i].length; j++)
            {
                new_grid[i][j] = grid[i][j];
            }
            inc = 0;
            for(int i = 0; i < grid.length; i++)
            {
                for(int j = 0; j < grid[i].length; j++)
                {
                    if(grid[i][j] == 2)
                    {
                            if(i + 1 < grid.length && grid[i+1][j] == 1)
                            {
                                new_grid[i+1][j] = 2;
                                inc++;
                            }
                            if(i -1 >= 0 && grid[i-1][j] == 1)
                            {
                                new_grid[i-1][j] = 2;
                                inc++;
                            }
                            if(j+1 < grid[i].length && grid[i][j+1] == 1)
                            {
                                new_grid[i][j+1] = 2;
                                inc++;
                            }
                            if(j-1 >= 0 && grid[i][j-1] == 1)
                            {
                                new_grid[i][j-1] = 2;
                                inc++;
                            }
                    }
                }
            }
            grid = new_grid;
            if(inc > 0)
            ans++;
            //System.out.println(inc);
        }
        int flg = ans;
        for(int i = 0; i < grid.length; i++)
        for(int j = 0; j < grid.length; j++)
        {
            if(grid[i][j] == 1)
            flg = -1;
        }
        return flg;
    }

    public static void main(String[] args)
    {
        Scanner inout = new Scanner(System.in);
        //int n = inout.nextInt();
        sample obj = new sample();

        int grid[][] = {{0,1}};
        int x = obj.orangesRotting(grid);
        System.out.println("Ans:"+x);

        return;
    }
}