class Animal {
    public Animal() {
        System.out.println("create animal");
    }
    void sound() {
        System.out.println("animal makes a sound");
    }
    protected void finalize() throws Throwable {
        System.out.println("delete animal");
    }
}

class Dog extends Animal {
    public Dog() {
        System.out.println("dog");
    }
    @Override
    void sound() {
        System.out.println("dog barks");
    }
    protected void finalize() throws Throwable {
        System.out.println("delete dog");
    }
}

class Cat extends Animal {
    public Cat() {
        System.out.println("cat");
    }
    @Override
    void sound() {
        System.out.println("cat meows");
    }
    protected void finalize() throws Throwable {
        System.out.println("delete cat");
    }
}

class Lab {
    public static void main(String[] args) throws Throwable {
        Animal a = new Animal();
        Dog d = new Dog();
        Cat c = new Cat();

        a.sound();
        d.sound();
        c.sound();

        a.finalize();
        d.finalize();
        c.finalize();
    }
}