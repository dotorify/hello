import java.lang.*;

class Parent
{
    public String hello()
    {
        return "Hello Parent";
    }
}

class Child extends Parent
{
    public String hello()
    {
        return "Hello Child";
    }
}

class Generic<T extends Parent>
{
    // 이 변수는 setter에 의해서만 초기화될 수 있음
    private T data;

    public void setData(T t)
    {
        //this.data = new T();  //컴파일 에러 발생
        this.data = t;
    }

    public String callHello()
    {
        return this.data.hello();
    }

    //이 함수는 Generic<String> 방식으로 Type을 명시해야만 사용할 수 있음.
    public String toString()
    {
        return this.data.toString();
    }
    public String toStringWithoutGeneric()
    {
        return "This is non-genric method.";
    }
}

public class test{
    public static void main(String args[])
    {
        System.out.println("------------------------------------");
        Generic<Child> obj = new Generic<Child>();
        obj.setData(new Child());
        System.out.println(obj.callHello());

        System.out.println("------------------------------------");

        Generic obj2 = new Generic();
        /*
            obj2.setData(new Child());
            이 경우 타입을 명시하지 않았기 때문에 T가 들어간 함수류를 호출할 수 없다.
            만약 T가 들어간 함수를 호출하게 되면 컴파일타임에 경고가 난다.
                Note: test.java uses unchecked or unsafe operations.
                Note: Recompile with -Xlint:unchecked for details.
            그리고 `-Xlint:unchecked` 옵션을 주면 컴파일 에러처리된다.
          */
        System.out.println(obj2.toStringWithoutGeneric());
        System.out.println("------------------------------------");

    }
}
