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
  class Parent {
    void show() { System.out.println("Parent's show()"); }
}
 
// Inherited class
class Child extends Parent {
    // This method overrides show() of Parent
    @Override void show()
    {
        System.out.println("Child's show()");
    }
}
 
// Driver class
public class Main {
    public static void main(String[] args)
    {
        // If a Parent type reference refers
        // to a Parent object, then Parent's
        // show is called
        Parent obj1 = new Parent();
        obj1.show();
 
        // If a Parent type reference refers
        // to a Child object Child's show()
        // is called. This is called RUN TIME
        // POLYMORPHISM.
        Parent obj2 = new Child();
        obj2.show();
    }
}
