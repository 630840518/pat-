





### 先大致了解一下理论，再进行实践，实践完成后 再次重新学习理论。

```R
1.先大致了解一下理论，再进行实践，实践完成后 再次重新学习理论。
```







### javaBean介绍：

```R
初学者的疑惑，到底什么是javaBean？https://blog.csdn.net/zhouvip666/article/details/83867401
一开始学习的java的时候，我们把上述代码称之为一个对象类，而到了后期，我们称之为一个javaBean。因为后期java为了便于操作数据，通常是使用对象为容器，把需要操作的数据赋值给对象，而为了便于赋值，那我们必须要有这种get/set方法。
总结如下：

1、所有属性为private
2、提供默认构造方法
3、提供getter和setter
4、实现serializable接口

```



### idea常用快捷键：

```R
alt+insert 快速创建类
shift+f6重写文件
crtl + f4关闭idea的一个窗口
crtl + shitft +t  查找存在的类
```



### java api文档中  ...的含义 ：

​	eg:Class<?>...

```R
 java类型后面跟三个点是代表可以接受多个实际参数,这里的多个指的是不限个数,可以是一个、两个、三个甚至更多...
可变长参数，就是这个位置可以传入任意个该类型参数,简单来说就是个数组。
1. testPoints(7);  
2.        testPoints(7,9,11);  
3.        testPoints(new Integer[]{7,9,11});  
1.  public static void testPoints(Integer... itgr){  
2.        if(itgr.length==0){  
3.            System.out.println("没有Integer参数传入！");  
4.        }else if(itgr.length==1){  
5.            System.out.println("1个Integer参数传入！");  
6.        }else{      
7.            System.out.println("the input string is-->");  
8.            for(int i=0;i<itgr.length;i++){  
9.                System.out.println("第"+(i+1)+"个Integer参数是"+itgr[i]+";");  
 
1.1个Integer参数传入！  
2.the input string is-->  
3.第1个Integer参数是7;  
4.第2个Integer参数是9;  
5.第3个Integer参数是11;    
6.the input string is-->  
7.第1个Integer参数是7;  
8.第2个Integer参数是9;  
9.第3个Integer参数是11; 
```



### this

```tex
  this, 一个官方的说法是，this首先是一个对象,它代表调用这个函数的对象。
  根据面向对象的基本语法,每当调用变量或者函数的时候,都要按照类名.变量(函数)的格式来调用,意即每个变量或函数都必须属于某一个实际的对象而不是一个类(static的除外).
       在不会产生混淆的地方, this是可以省略的,但一般都会加上,(Think in Java里面说最好不要加,因为大家都不加)
```



### 成员变量和局部变量：

```R
如果局部变量的名字和成员变量的名字相同， 要想在该方法中使用成员变量，必须使用关键字this。
https://www.cnblogs.com/cy19/p/7587002.html
```

```
var formdata ={};
formdata.id = id;
 contentType : "application/json; charset=utf-8",
                data : JSON.stringify(formdata),
```



static

```R

https://www.cnblogs.com/dolphin0520/p/3799052.html
方便在没有创建对象的情况下来进行调用（方法/变量）。

　　很显然，被static关键字修饰的方法或者变量不需要依赖于对象来进行访问，只要类被加载了，就可以通过类名去进行访问。

在C/C++中static是可以作用域局部变量的，但是在Java中切记：static是不允许用来修饰局部变量。不要问为什么，这是Java语法的规定。
```



### java 将数据存入树结构中

```R

```

### java常用关键字的作用：

```R
1.final:
		https://blog.csdn.net/m0_37695351/article/details/78201776
		 final关键字可以用于三个地方。用于修饰类、类属性和类方法。

     被final关键字修饰的类不能被继承，被final关键字修饰的类属性和类方法不能被覆盖（重写）；



     对于被final关键字修饰的类属性而言，子类就不能给他重新赋值了，如果重新赋值，会报错
```

### extends Implements 

```R
1. 在类的声明中，通过关键字extends来创建一个类的子类。一个类通过关键字implements声明自己使用一个或者多个接口。
2.extends 是继承某个类, 继承之后可以使用父类的方法, 也可以重写父类的方法; implements 是实现多个接口, 接口的方法一般为空的, 必须重写才能使用
	抽象方法与接口：
在interface中所有的方法都是public abstract的，即使你没有申明它是public abstract的。在interface中所有的数据成员都是public static final的，即使你没有申明.但不能是blank final 在编译时候确定的。在Java,interface的地位和class是一样的。实现interface的类，其interface中所有的方法必须被“实现”，否则这个类成为一个抽象类。Interface可以从多个interface得到继承，但是不能继承类。一个类可以实现多个interface。（摘自CSDN：抽象类，抽象方法和interface，作者：PeakLui）
```



### 

### java

### 数据库数据源  jndi 连接池 ：

```R
1.jndi作为一种中间代理 不用使程序员知道连接数据库的具体信息 将数据的具体信息封装入一个文件，程序员只需要知道文件名字并引用数据库的信息
	在服务器上创建JNDI数据源，这样做的原因是将开发工程师和WAS平台运维工程师的工作区分开，防止数据库连接信息的泄露，保证信息安全。开发工程师无须知道数据库的相关信息，只要在程序中使用JNDI数据源的名称即可。WAS平台工程师在WAS上配置该JNDI数据源。 

连接池 ：
 如果用jdbc 直接连接数据库 
	利用连接池框架，数据源连接后，如果不使用，可以暂时放到池中，不关闭连接，而直连是每次创建新的连接，使用完毕后，手工去关闭，下次要使用，再次创建、关闭。连接池框架实现了池的缓存能力后，就无需这样了。
2.数据库数据源  jndi 连接池 
https://zhidao.baidu.com/question/712173714257270845.html?qbl=relate_question_3&word=java%CA%FD%BE%DD%D4%B4%CA%C7%CA%B2%C3%B4


```



### new Class[]{}

```R
https://zhidao.baidu.com/question/64210480.html
```

### 基本数据类型和引用数据类型：

总结：<泛型>中只能定义应用数据类型 因为基本数据类型直接指向具体的值，而引用数据类型指向的是具体值的地址，

地址在栈空间，具体的值在堆空间

```R

```

### 抽象类：

```R
抽象类只能被继承，有抽象方法必须标记为抽象类，继承了抽象类，抽象方法必须被重写,抽象方法不能被实例化，抽象方法中可以有普通方法
```



### 

### java设计模式

```R
1.单例模式：
https://blog.csdn.net/Allen_Walker_QAQ/article/details/80765903
```



### java正则表达式

```R
1.匹配 "/" 如果要匹配"/"  首先java /表达转义字符 所以用-> //表达一个/  而正则表达式 /也是转义字符所以需要// 此时java中要用 ////表达一个/ 第一个和第三个为java转义 第二个为正则表达式的转义  
```



### 内部类 不能写有静态方法

```R
非static的内部类，在外部类加载的时候，并不会加载它，所以它里面不能有静态变量或者静态方法。
1、static类型的属性和方法，在类加载的时候就会存在于内存中。
2、要使用某个类的static属性或者方法，那么这个类必须要加载到jvm中。
基于以上两点，可以看出，如果一个非static的内部类如果具有static的属性或者方法，那么就会出现一种情况：内部类未加载，但是却试图在内存中创建static的属性和方法，这当然是错误的。原因：类还不存在，但却希望操作它的属性和方法。

 

java很多想这类不能共同存在的 一般都与他们的生命周期有关。。。
比如 静态成员和静态方法是随着类的加载而存在的，也就是说内部类的静态属性是随着类的加载的，但是内部类的实例 是创建后才存在的，也就是说其静态属性优先存在于他的类实例的存在 这显然是矛盾的，所以要把内部类设为静态的 这样他们的生命周期就是相同了；

 

如果内部类没有static的话，就需要实例化内部类才能调用，说明非static的内部类不是自动跟随主类加载的，而是被实例化的时候才会加载。
而static的语义，就是主类能直接通过内部类名来访问内部类中的static方法，而非static的内部类又是不会自动加载的，所以这时候内部类也要static，否则会前后冲突。
```



### java的报错

```R
java.lang.InstantiationException 
果此 Class 表示一个抽象类、接口、数组类、基本类型或 void； 或者该类没有 null 构造方法； 或者由于其他某种原因导致实例化失败。 可能是没有无参构造器
```

java反射

```R
java反射常用方法:https://blog.csdn.net/qq_25827845/article/details/52144892#commentBox
```

### 数据库索引 平衡树：

```latex
 平衡树分为 ll lr rr rl 不管怎么变换都要满足排序树
 //https://www.cnblogs.com/aspwebchh/p/6652855.html
```



## java源码分析：

o1 o2 

表示 o1 在 o2的前面 只用考虑大的情况 o1>o2 o1到 o2的前面

### 	1.java中string 的compareTo 的实现：

​		Interface Comparable<T>

​		Interface Comparator<T>  比较器

​		https://www.cnblogs.com/lin-jing/p/8278271.html

```R
private final char value[];//String的底层是字符数组  a.compareTo(b)
    public int compareTo(String anotherString) {
        int len1 = value.length;//获取调用该方法的字符串的长度a
        int len2 = anotherString.value.length;//获取比较字符串的长度b
        int lim = Math.min(len1, len2);//(a <= b) ? a : b;  min底层代码  这句代码是为了获取较短的字符串的长度
        char v1[] = value;  //创建两个字符数组,分别指向这两个字符串的所在
        char v2[] = anotherString.value;
        //循环比较,循环次数,是较短的字符串的长度,如果用较长的字符串的长度,那么会出现nullPointException
        int k = 0;
        while (k < lim) {
            char c1 = v1[k];
            char c2 = v2[k];
            //比较相对应索引的元素,如果元素不同则比较返回中间差距的顺序,如果相等,那么就继续循环比较
            if (c1 != c2) {
                return c1 - c2;//字符对应的Unicode码表中的数字,这也就是为什么说String是按照字典书序比较的,如a比b靠前,那么a对应的数字比b小,相减返回负数,差多少顺序,就返回多少
            }
            k++;
        }
        //如果两个字符串的长度不同,其它都相同,那么返回的就是长度的差距了
        return len1 - len2;
    }
```

```R
//Integer的compareTo方法,底层依据的是compare方法,这个方法是Comparator接口的一个方法
    public int compareTo(Integer anotherInteger) {
        //实际上Integer的比较是通过Integer中包括的整数来比较的
        return compare(this.value, anotherInteger.value);
    }
    public static int compare(int x, int y) {//a.compateTo(b)
        //如果a比b小,那么返回-1,相等就是0,否则就是1
        return (x < y) ? -1 : ((x == y) ? 0 : 1);
    }
```

