class RmObject {}

class Parent extends RmObject {}

class Child extends Parent {}

class TheOther extends RmObject {}


public class test3{
    public static void main(String args[])
    {
        boolean rst;
        Parent parent = null;
        Child child = null;
        TheOther theOther = null;
        Class cls = null;

        try {
            System.out.println("--------------------------------------");
            System.out.println(" Java instanceOf 테스트 ");
            System.out.println("--------------------------------------");


            parent = new Parent();
            System.out.println("parent = new Parent();");
            rst = parent instanceof Parent;
            System.out.println("    parent instanceOf Parent = " + rst);
            rst = parent instanceof Child;
            System.out.println("    parent instanceOf Child = " + rst);
            cls = Class.forName("TheOther");
            rst = cls.isInstance(parent);
            System.out.println("    cls.isInstance(parent) of TheOther = " + rst);

            System.out.println("");

            parent = new Child();
            System.out.println("parent = new Child();");
            rst = parent instanceof Parent;
            System.out.println("    parent instanceOf Parent = " + rst);
            rst = parent instanceof Child;
            System.out.println("    parent instanceOf Child = " + rst);
            cls = Class.forName("TheOther");
            rst = cls.isInstance(parent);
            System.out.println("    cls.isInstance(parent) of TheOther = " + rst);

            System.out.println("");

            child = new Child();
            System.out.println("child = new Child();");
            rst = child instanceof Parent;
            System.out.println("    child instanceOf Parent = " + rst);
            rst = child instanceof Child;
            System.out.println("    child instanceOf Child = " + rst);
            cls = Class.forName("TheOther");
            rst = cls.isInstance(child);
            System.out.println("    cls.isInstance(child) of TheOther = " + rst);

            System.out.println("");

            theOther = new TheOther();
            System.out.println("theOther = new Child();");
            cls = Class.forName("Parent");
            rst = cls.isInstance(theOther);
            System.out.println("    cls.isInstance(theOther) of Parent = " + rst);
            cls = Class.forName("Child");
            rst = cls.isInstance(theOther);
            System.out.println("    cls.isInstance(theOther) of Child = " + rst);
            cls = Class.forName("TheOther");
            rst = cls.isInstance(theOther);
            System.out.println("    cls.isInstance(theOther) of TheOther = " + rst);
        }
        catch (Throwable e) {
            System.err.println(e);
        }
    }
}
