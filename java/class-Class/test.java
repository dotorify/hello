class A {}

class A1 extends A {}

class B {}


public class test{
    public static void main(String args[])
    {
        try {
            System.out.println("--------------------------------------");
            System.out.println(" Java Class.isInstance 테스트 ");
            System.out.println("--------------------------------------");
            System.out.println("class A {}");
            System.out.println("class A1 extends A {}");
            System.out.println("class B {}");
            System.out.println("");
            System.out.println("A1 empty = null;");
            System.out.println("");

            Class cls = Class.forName("A");
            A1 empty = null;
            System.out.println("Class cls = Class.forName(\"A\");");

            boolean b1 = cls.isInstance(new A());
            System.out.println("cls.isInstance(new A()) = "+b1);

            boolean b2 = cls.isInstance(new B());
            System.out.println("cls.isInstance(new B()) = " + b2);

            boolean b3 = cls.isInstance(new A1());
            System.out.println("cls.isInstance(new A1()) = " + b3);

            boolean b4 = cls.isInstance(empty);
            System.out.println("cls.isInstance(empty) = " + b4);
        }
        catch (Throwable e) {
            System.err.println(e);
        }
    }
}
