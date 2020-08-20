/*
   采用递归

*/
public class Demo {
    public static void main(String[] args) {
        int num = function(0, 0);
        System.out.println(num);//35
    }

    private static int function(int i, int j) {
        if(i==3||j==4) return 1;
        return function(i+1,j)+function(i,j+1);//将两种选择加起来求和
    }

}

