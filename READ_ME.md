### Central Board of Secondary Education, IN. CS Practical For Students.

<hr/>

### OOP core concepts
```sh
1. Classes, Object and Method
2. Abstraction [Access specifiers / modifiers]
3. Inheritance
4. Encapsulation [Data hiding]
5. Polumorphism [Same entity, fun. or obj. behaves differently]
6. Interface [CPP Abstract Classes]
```

<hr/>

### Some other terms which are used in OOP <small>(collected)</small>
```sh
1. Coupling
2. Cohesion
3. Association
4. Aggregation
5. Composition
```

### Coupling
```sh
Coupling refers to the knowledge or information or dependency of another class. It arises when classes are aware of each other. If a class has the details information of another class, there is strong coupling. In Java, we use private, protected, and public modifiers to display the visibility level of a class, method, and field. You can use interfaces _for the weaker coupling because there is no concrete implementation.
```

### Cohesion
```sh
Cohesion refers to the level of a component _which performs a single well-defined task. A single well-defined task is _done by a highly cohesive method. The weakly cohesive method will split the task into separate parts. The java.io package is a highly cohesive package because it has I/O related classes and interface. However, the java.util package is a weakly cohesive package because it has unrelated classes and interfaces.
```

### Association
```sh
Association represents the relationship between the objects. Here, one object can be associated with one object or many objects. There can be four types of association between the objects:

One to One
One to Many
Many to One, and
Many to Many

now understand the relationship with real-time examples. For example, One country can have one prime minister (one to one), and a prime minister can have many ministers (one to many). Also, many MPs can have one prime minister (many to one), and many ministers can have many departments (many to many).
Association can be undirectional or bidirectional.
```

### Aggregation
```sh
Aggregation is a way to achieve Association. Aggregation represents the relationship _where one object contains other objects as a part of its state. It represents the weak relationship between objects. It is also termed as a has-a relationship _in Java. Like, inheritance represents the is-a relationship. It is another way to reuse objects.
```

### Composition
```sh
The composition is also a way to achieve Association. The composition represents the relationship _where one object contains other objects as a part of its state. There is a strong relationship between the containing object and the dependent object. It is the state _where containing objects _do not have an independent existence. If you delete the parent object, all the child objects will be deleted automatically.
```

&copy; `https://isoumik.tech/` | Soumik Bhattacharya