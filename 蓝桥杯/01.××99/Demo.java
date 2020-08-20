import java.util.Calendar;

//1999年12月31日星期五，问下一个xx99年12月31日正好是星期天
public class Demo {
    private int method;
    public static void main(String[] args) {
        method02();
        method01();//2299
    }


    //方法一：自己计算
    public static void method01(){
        int day = 5;
        for (int year = 2000; year < 10000; year++) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                day = day + 366;
                day = day % 7;
            } else {
                day = day + 365;
                day = day % 7;
            }
            if ((year - 1999) % 100 == 0) {
                if (day == 0) {
                    System.out.println(year);
                    break;
                }
            }
        }
    }

    //方法二：使用Calendar类
    //此方法要注意1999年12月31日是否是真的星期五，因为Calendar类是按照实际生活记录的
    public static void method02(){
        Calendar calendar = Calendar.getInstance();
        for (int year = 1999; year < 10000; year=year+100) {
            calendar.set(Calendar.YEAR,year);
            calendar.set(Calendar.MONTH,11);//这里要设置成11，因为外国是0-11月
            calendar.set(Calendar.DAY_OF_MONTH,31);
            if(calendar.get(Calendar.DAY_OF_WEEK)==Calendar.SUNDAY){
                System.out.println(year);
                break;
            }
        }

    }
}

