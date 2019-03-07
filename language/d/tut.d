// Imports a module that contains functions
// that handle input and output
import std.stdio;
import std.conv;
import std.math;
import std.random;
import std.datetime;
import std.algorithm;
import std.array;
import std.string;
import std.format;
import std.typecons : No;
import std.typecons;
import std.range : chain;
import std.file;
import core.thread;
import std.parallelism;
import std.concurrency;
import std.range;

// Best D Book
// http://ddili.org/ders/d.en/index.html

/*
multiline comment
*/

// ---- FUNCTIONS ----
int getSum3(int x, int y){
  return x + y;
}
double getSum3(double x, double y){
  return x + y;
}

// The execution of your program begins at main
void main(){

  // ---- USER INPUT ----
  // Read input from the user as a string
  // followed by a newline
  // string name;
  // write("What's your name? ");
  // readf("%s\n", &name);
  //
  // // Outputs the string contained to the
  // // terminal
  // writeln("Hello ", name);

  // ---- VARIABLES ----
  // Variable names start with a letter and
  // can contain numbers and underscores
  int a1_B = 10;

  // ---- DATA TYPES ----
  // Also ubyte, ushort, uint, ulong,
  // Imaginary : ifloat, idouble, ireal
  // Complex : cfloat, cdouble, creal
  // wchar : UTF-16 strings
  // dchar : UTF-32 strings

  // You can have the type picked for you
  auto bool1 = true;
  writeln("Bool : ", bool1);

  // booleans are either true or false
  // Formatted with %s
  writeln("int min : ", bool.min);
  writeln("int max : ", bool.max);
  bool happy = true;
  writefln("Bool : %s", happy);

  // chars are single characters surrounded
  // with single quotes
  // Can also store \n, \t, \b, \f, \r, \",
  // \', \\
  writeln("char min : ", char.min);
  writeln("char max : ", char.max);
  char a = 'a';
  writefln("Char : %c", a);

  // Formatting for integer types uses %d
  writeln("byte min : ", byte.min);
  writeln("byte max : ", byte.max);
  writeln("short min : ", short.min);
  writeln("short max : ", short.max);
  writeln("int min : ", int.min);
  writeln("int max : ", int.max);
  writeln("long min : ", long.min);
  writeln("long max : ", long.max);
  // You can use underscores
  long lNum = 123_456_789_100;
  // Shift right depending on the output
  writefln("lNum : %15d", lNum);

  writeln("float max : ", float.max);
  float fNum = 1.1111111111111111;
  float fNum2 = 1.1111111111111111;

  // Formats output to show 16 decimals
  // Floats are accurate to 6 decimals
  writefln("Float : %1.16f", fNum + fNum2);

  // Doubles are accurate to 15
  writeln("double max : ", double.max);
  double dNum = 1.1111111111111111;
  double dNum2 = 1.1111111111111111;
  writefln("Double : %1.16f", dNum + dNum2);

  // Doubles are accurate to 19
  writeln("real max : ", real.max);
  real rNum = 1.11111111111111111111;
  real rNum2 = 1.11111111111111111111;
  writefln("Real : %1.20f", rNum + rNum2);

  // Get default values
  writeln("Default int : ", int.init);

  // ---- CASTING ----
  // You can convert from one type to another
  // Convert an int into a short
  int cInt = 15;
  short cShort = cast(short) cInt;

  // Casting causes issues if container is small
  short cShort2 = cast(short) 32768;
  writeln("Short Cast : ", cShort2);

  // Convert int to string and show type
  auto sInt = to!string(10);
  writeln("Type : ", typeof(sInt).stringof);

  // Convert string to int and show type
  auto iStr = to!int("10");
  writeln("Type : ", typeof(iStr).stringof);

  // ---- MATH ----
  writeln("5 + 4 = ", (5+4));
	writeln("5 - 4 = ", (5-4));
	writeln("5 * 4 = ", (5*4));
	writeln("5 / 4 = ", (5/4));
	writeln("5 % 4 = ", (5%4));

  // Math done on integers default to
	// integer output and doubles return doubles
  writeln("5 / 4 = ",(5.0/4.0));

  // incMe++ same as incMe = incMe + 1
	// Can also decrement with --
  int incMe = 0;
	writeln("incMe: ",(incMe++));
	writeln("incMe: ",(++incMe));

  // Another shortcut
  incMe += 10;

  // Numerous math functions
	writeln("abs(-1) = ", abs(-1));
	writeln("ceil(4.25) = ", ceil(4.25));
	writeln("floor(4.25) = ", floor(4.25));
	writeln("round(4.25) = ", round(4.25));
	writeln("exp(1.0) = ", exp(1.0));
	writeln("log(1) = ", log(1));
	writeln("log10(1) = ", log10(1));
	writeln("pow(2,2) = ", pow(2,2));
	writeln("sqrt(4) = ", sqrt(4.0));
	writeln("cbrt(4) = ", cbrt(4.0));
	writeln("hypot(5,5) = ", hypot(5,5));
	writeln("PI = ", PI);

  // Trig Functions Radians
	writeln("sin(1.5708) = ", sin(1.5708));
	writeln("cos(1.5708) = ", cos(1.5708));
	writeln("tan(1.5708) = ", tan(1.5708));
	writeln("asin(1.5708) = ", asin(1.5708));
	writeln("acos(1.5708) = ", acos(1.5708));
	writeln("atan(1.5708) = ", atan(1.5708));
	writeln("sinh(1.5708) = ", sinh(1.5708));
	writeln("cosh(1.5708) = ", cosh(1.5708));
	writeln("tanh(1.5708) = ", tanh(1.5708));

  // ---- DATE ----
  auto nowTime = Clock.currTime(UTC());
  writeln(nowTime.year);
  writeln(nowTime.month);
  writeln(nowTime.day);
  writeln(nowTime.hour);
  writeln(nowTime.minute);
  writeln(nowTime.second);

  // ---- RANDOM NUMBERS ----
  // Generate random number from 5 to 20
  // Generate random seed
  int seed = nowTime.second;
  auto rand = Random(seed);
  writeln("Rand : ", uniform(5, 20, rand));

  // ---- ARRAYS ----
  // Arrays store multiple values in boxes
  // in memory

  // Fixed size array
  int[10] a1;

  // Set values
  int[] a2 = [1,2,3,4];

  // Change using index
  a2[0] = 0;

  // Get value with index
  writeln("Index : ", a2[0]);

  // Create a resizable array (Dynamic)
  int[] a3;

  // Add values
  a3 ~= 1;
  a3 ~= 2;
  a3 ~= 3;

  // Remove an index
  a3 = a3.remove(1);
  writeln(a3);

  // Combine arrays
  a3 = a2 ~ a3;
  writeln(a3);

  // Get odds
  a3 = a3.remove!(x => (x%2) == 0);
  writeln(a3);

  // Sort and reverse
  writeln(sort(a3));
  writeln(reverse(a3));

  // Replace all matches
  writeln(a3.replace(3,2));

  // Get a range of values
  a3 = a2 ~ a3;
  writeln(a3[0 .. 3]);

  // Duplicate array
  auto a4 = a3.dup;

  // Perform operation on every value
  a4[] *= 2;
  writeln(a4);

  // Multidimensional array
  // a5[How many down][How many across][How many Groups]
  // a5[3][4][1]
  string[][][] a5 = [[["000"], ["100"], ["200"], ["300"]],
  [["010"], ["110"], ["210"], ["310"]],
  [["020"], ["120"], ["220"], ["320"]]];
  writeln(a5[2][3][0]);

  // ---- STRINGS ----
  // Strings are arrays of characters but
  // the character values can't be changed
  string s1 = "Doug";

  // Would throw an error
  // s1[0] = 'T';

  // You can get the character
  writeln(s1[0]);

  // You can change the string in whole
  s1 = "Tom";

  // Get size
  writeln("Size : ", s1.length);

  // Combine strings
  string s2 = s1 ~ " Thumb";

  // Find index
  writeln("T : ", indexOf(s2, 'T'));
  writeln("Last T : ", lastIndexOf(s2, 'T'));
  writeln("Thumb : ", indexOf(s2, "Thumb", No.caseSensitive));

  // Find and replace
  writeln(replace(s2, "Tom", "Ed"));

  // Convert string to array
  string s3 = "1 2 3";
  auto numArr = to!(int[])(split(s3));
  writeln(numArr);

  // Check equality
  string s4 = "1 2 3";
  writeln(s3 == s4);

  // Convert upper and lower
  writeln(toUpper(s2));
  writeln(toLower(s2));

  // Is it a number
  writeln(isNumeric("10"));

  // ---- ASSOCIATIVE ARRAYS ----
  // Key value pairs
  double[string] favNums =
  ["AZero" : -459,
  "Euler" : 2.7182];

  // Add a key / value
  favNums["PI"] = 3.14159;
  favNums["Golden"] = 1.61803;

  // Get values
  writeln(favNums);
  writeln(favNums["Golden"]);

  // Number of values
  writeln(favNums.length);

  // Get keys and values
  writeln(favNums.keys);
  writeln(favNums.values);

  // Check if key exists and delete
  if("AZero" in favNums){
    favNums.remove("AZero");
  }
  writeln(favNums);

  // ---- MORE USER INPUT ----
  // readln reads until the end of the line
  // and stores input in an array (Boxes in memory
  // for each character)
  // char[] arrName;
  // write("What's your name? ");
  // readln(arrName);
  // // strip deletes the newline at the end of array
  // writeln("Hello ", strip(arrName));

  // // Read in multiple values at once
  // write("Enter 1st & last name? ");
  // string fName = strip(readln());
  // string fN, lN;
  // // Define the input you expect 2 strings
  // // separated by a space
  // formattedRead(fName, " %s %s",
  //   fN, lN);
  // writeln("Hello ", fN, " ", lN);

  // ---- CONDITIONALS ----
  // Relational Operators : > < >= <= == !=
  // Logical Operators : && || !
  int age = 12;
	if ((age >= 5) && (age <= 6)){
		writeln("Go to Kindergarten");
	} else if ((age >= 7) && (age <= 13)){
		writeln("Go to Middle School");
	} else if ((age >= 14) && (age <= 18)){
		writeln("Go to High School");
	} else {
		writeln("Stay Home");
	}

	writeln("true || false = ", (true || false));
	writeln("!true = ", (!true));

  // The ternary operator returns the 1st value
	// when the condition is true and the 2nd
	// otherwise
	bool canVote = (age >= 18) ? true : false;
	writeln("Can Vote : ",canVote);

  // Switch works great with limited options
  string lang = "France";
  switch(lang){
    case "Chile": case "Cuba":
			writeln("Hola");
      break;
		case "France":
			writeln("Bonjour");
			// Use goto to check the next
      goto case;
		case "Japan":
			writeln("Konnichiwa");
			break;
		default:
			writeln("Hello");
		}

    // You can also use ranges
    int anAge = 7;
    switch(anAge){
      case 7: .. case 13:
        writeln("Go to middle school");
        break;
      default:
    		writeln("Somewhere else");
    }

    // ---- LOOPING ----
    // For loop
    for(int i = 0; i < 5; i++){
      writeln(i);
    }

    // foreach is more commonly used
    // for containers
    int[] a6 = [1,2,3,4];
    foreach(x; a6){
      writeln(x);
    }

    // Work with ranges
    foreach(x; 5..10){
      writeln(x);
    }

    // Associative Arrays
    double[string] aA =
    ["A" : 1,
    "B" : 2];
    // Keys and values
    foreach(k, v; aA){
      writeln(k, " ", v);
    }
    // Get both as a group
    foreach(x; aA.byKeyValue){
      writefln("%s : %s",
      x.key, x.value);
    }

    // You are working with copies by default
    int[] fE1 = [1,2,3,4];
    foreach(x; fE1){
      x *= 2;
    }
    writeln(fE1);

    // Using reference changes values
    foreach(ref x; fE1){
      x *= 2;
    }
    writeln(fE1);

    // While executes as long as a condition
    // is true
    int wI = 0;
		while (wI < 20) {

			// Only print even numbers
			if(wI % 2 == 0) {
				writeln(wI);
				wI++;
				// Jump back to the beginning of loop
				continue;
			}
			if(wI >= 10) {
				// Stop looping
				break;
			}
			wI++;
		}

    // Do While always executes once
    // int secretNum = 7;
		// int guess = 0;
		// do {
		// 	write("Guess : ");
		// 	readf("%d\n", &guess);
		// }while(secretNum != guess);
		// writeln("You guessed it");

    // ---- FUNCTIONS ----
    // Function definitions follow the format
    // returnType functionName(parameterType parameterName)
    int getSum(int x, int y){
      return x + y;
    }
    writeln("5 + 4 = ", getSum(5,4));

    // Variables changed in functions don't
    // effect values outside of it unless
    // you use ref
    void changeMe(ref int f1){
      f1 = 5;
    }
    int f1 = 10;
    changeMe(f1);
    writeln("f1 : ", f1);

    // Receive a variable number of arguments
    int getSum2(A...)(A args){
      int sum = 0;
      foreach(x; args){
        sum += x;
      }
      return sum;
    }
    writeln("Sum : ", getSum2(1,2,3,4));

    // Return multiple values with an array
    int[] getNext2(int x){
      int[] next2 = [x+1, x+2];
      return next2;
    }
    int[] next2 = getNext2(1);
    writeln(next2);

    // Recursion : Function calls self
    int fact(int num){
      // Must have a condition were we don't
		  // call for the function to execute
      if(num == 1){
        return 1;
      } else {
        int result = num * fact(num - 1);
        return result;
      }
    }
    writeln("Fact 4 : ", fact(4));
    // 1st : result = 4 * factorial(3) = 4 * 6 = 24
	  // 2nd : result = 3 * factorial(2) = 3 * 2 = 6
	  // 3rd : result = 2 * factorial(1) = 2 * 1 = 2

    // Arguments marked with in can't be changed
    // The same is true with const
    void randFunc(in int x, const int y){
      // Will cause error -> x = 1;
    }

    // out returns values to parameters
    void randFun2(out int f2){
      f2 = 100;
    }
    int f2 = 5;
    randFun2(f2);
    writeln("f2 : ", f2);

    // You can overload functions by
    // having different parameter types
    writeln("5.4 + 4.5 = ", getSum3(5.4,4.5));

    // ---- TUPLES ----
    // Used to store a key/value at once
    auto t1 = tuple("A",1);
    writeln(t1);

    // You can store more than 2 values
    auto t2 = tuple("B", 2, 5.6);
    writeln(t2);

    // Change values
    t2[0] = "A";

    // Get values by index
    writeln(t2[0]);

    // You can pass multiple values into
    // functions
    void printTuple(string s, int i){
      writeln(s, " ", i);
    }
    printTuple(t1.expand);

    // You can also return multiple values
    Tuple!( int, string ) returnTuple(){
      return tuple(5, "Hello");
    }

    auto t3 = returnTuple();
    writeln(t3);

    // ---- ANONYMOUS FUNCTIONS &
    // SEQUENCE PROCESSING ----
    // Allow you to define a function inside
    // an expression
    auto aF1 = (int a) => a * 2;
    writeln(aF1(5));

    // Use map to multiply all by 2
    int[] a7 = [1,2,3,4];
    auto aF2 = map!(a => a * 2)(a7);
    writeln(aF2);

    // Combine arrays and do the same
    int[] a8 = [5,6,7];
    auto aF3 = map!(a => a * 2)(chain(a7,a8));
    writeln(aF3);

    // Use filter to get evens
    auto aF4 = a7.filter!(a => (a % 2) == 0);
    writeln(aF4);

    // Use reduce to add values
    auto aF5 = reduce!((a,b) => a + b)(0,a7);
    writeln(aF5);

    // Get max
    auto aF6 = reduce!(max)(aF3);
    writeln(aF6);

    // Generate a random range
    auto now2 = Clock.currTime(UTC());
    auto seed2 = now2.second;
    auto rand2 = Random(seed2);
    auto randVals = generate!(() => uniform(1, 2000, rand2))().take(10);
    foreach(x; randVals){
      writeln(x);
    }

    // ---- ENUM ----
    // Custom type made up of named constants
    enum Suit {club, diamond, heart, spade}
    Suit card = Suit.heart;
    writeln(card);

    // ---- EXCEPTIONS ----
    // Through exception handling you can
    // block potential errors. You wouldn't
    // normally handle divide by zero errors
    // this way, but this is an easy example
    // to understand
    // Wrap problematic code with try
    try{
      int zero = 0;
      // assert can be used to test assumptions
      // during the development process
      // assert(zero != 0, "Can't be zero");
      if (zero == 0){
        // Throw error to be handled
        throw new Exception("Can't divide by zero");
      } else {
        int badInt = 10 / zero;
      }
    }
    // Will catch any exception as well as
    // yours and print a message rather than
    // crashing
    catch(Exception e){
      writeln(e.msg);
    }
    // Close files, databases, etc. here
    finally{
      writeln("Cleaning up");
    }

    // ---- FILE IO ----
    // Open a file for writing
    // w : Open for writing and/or create file
    // a : Open for appending and/or create file
    // r : Open for reading
    // r+ : Open for reading and writing
    // w+ : Reading and writing, 0 file, or create
    // a+ : Reading and append writing
    File file = File("myfile.txt", "w");
    file.writeln("Some random text");
    file.writeln("More random text");
    file.close();

    // Open for reading
    File file2 = File("myfile.txt", "r");
    // As long as their are lines print them
    while(!file2.eof()){
      writeln(chomp(file2.readln()));
    }
    file2.close();

    // ---- POINTERS ----
    // You can work with pointers like C
    // A pointer stores the address of a
    // variables data in memory
    int val = 43;
    // Store the address by placing the
    // reference operator before the variable
    int* pVal = &val;

    // Get the address
    writeln("Address : ", pVal);

    // Get the value stored there
    writeln("Value : ", *pVal);

    // Pass a pointer to a function
    void changePtrVal(int* pVal){
      *pVal = 22;
    }
    changePtrVal(&val);
    writeln("Value : ", val);

    // ---- STRUCTS ----
    // Structs are custom types that
    // combine other types of data
    struct Customer{
      string name;
      string phone;
      double bal = 0;

      // Static variables are part of the struct
      static numCusts = 0;
    }
    // Create and add data
    Customer c1;
    c1.name = "Paul Smith";
    c1.phone = "555-1212";
    c1.bal = 340.10;
    Customer.numCusts++;

    writefln("Call %s at %s about $%.2f",
    c1.name, c1.phone, c1.bal);

    // Create on one line
    Customer c2 = {"Sue Smith", "555-1213", 18.90};
    Customer.numCusts++;
    writeln("Number of custs : ",
    Customer.numCusts);

    // ---- CLASSES ----
    // Classes model real world objects / systems
    // by storing their attributes and
    // simulating their capabilities
    // Classes limit access to data (Encapsulation)
    // Allow fields and methods to be Inherited
    // Allow subclasses to be treated as super
    // classes while maintaining changes in the subclasses
    // Polymorphism
    class Animal{
      string name;
      double height;
      double weight;
      string sound;

      // static fields belong to the class
      // and their values are shared by all
      // objects
      static int numOfAnimals;

      // Function called when Animal objects
      // are created
      this(string name, double height,
        double weight, string sound){

          // this allows us to refer to the
          // object even though we don't know
          // its name
          this.name = name;
          this.height = height;
          this.weight = weight;
          this.sound = sound;
          numOfAnimals++;
        }

        // If this was final void makeSound
        // I couldn't override it
        void makeSound(){
          writeln(this.name, " says ",
          this.sound);
        }

        void getInfo(){
          writefln("%s is %.2f inches %.2f lbs and says %s",
          this.name, this.height, this.weight, this.sound);
        }

        // static methods are normally utility functions
        // that it wouldn't make sense for the object
        // to be able to perform but you need it
        static void getNumOfAnimals(){
          writeln("Num of Animals : ",
          numOfAnimals);
        }
    }

    // I can inherite everything is Animal
    // and make changes as I wish
    // You can only inherit 1 class
    class Dog : Animal{
      string owner;

      // Have the Animal constructor initialize
      // all fields in both
      this(string name, double height,
        double weight, string sound,
        string owner){
          super(name, height,
            weight, sound);
          this.owner = owner;
      }

      // Override get info
      override void getInfo(){
        super.getInfo();
        writefln("%s's owner is %s",
        this.name, this.owner);
      }

    }

    Animal jake = new Animal("Jake", 35,
    140, "Woof");
    jake.getInfo();

    Dog paul = new Dog("Paul", 20, 85,
    "Grrr", "Robert Hansen");
    paul.getInfo();

    // As long as the same methods exist
    // in the super class and the subclass
    // you can refer to the subclass as
    // if it is its super class type
    // Polymorphism
    Animal john = new Dog("John", 20, 85,
    "Grrr", "Larry Eyler");
    john.getInfo();
    john.getNumOfAnimals();

    // If you want to add functionality to
    // a class and it doesn't make sense for
    // that functionality to be made into an
    // object you may need an interface
    interface Drivable{
      // You define, but don't implement methods
      // in an interface
      void move();
      void stop();
    }

    // You can implement multiple interfaces by
    // just separating them with a comma
    class Vehicle : Drivable{
      void move(){}
      void stop(){}
    }

    // Abstract classes define functions that
    // must be implemented, but they can also
    // define implementation unlike interfaces
    class Flyable{
      abstract void fly(){
        writeln("I'm flying");
      }

      abstract void crash();
    }

    // ---- TEMPLATES ----
    // Templates allow you to define algorithms
    // that work with multiple data types
    void getSum4(T)(T x, T y){
      writeln(x, " + ", y, " = ", x + y);
    }
    getSum4(4,6);
    getSum4(4.5, 5.6);

    // You can use templates any place you define types
    // You can define a template block of code
    template tempSamp(T){
      struct Shape{
        T height;
        T width;
      }
      T getArea(Shape shape){
        return shape.height * shape.width;
      }
    }

    auto shape = tempSamp!int.Shape(4,5);
    writeln("Area : ",
    tempSamp!int.getArea(shape));

    // ---- MIXINS ----
    // Mixins allow you to generate code
    // at run time
    // Generate int var1 = 10;
    mixin MakeType!(int, 10);
    writeln(var1);

    // Generate a function
    mixin GetSum!(double);
    writeln("1.2 + 2.3 = ",
    add(1.2,2.3));

    // ---- THREADS ----
    // A thread is a block of code that is expected
		// to execute while other blocks of code execute

    // Let's run different blocks pausing as we go
    // void doStuff(int x){
    //   writeln(x, " start");
    //   Thread.sleep(1.seconds);
    //   writeln(x, " stops");
    // }
    //
    // auto now1 = Clock.currTime(UTC());
    // auto sS = now1.second;
    //
    // doStuff(1);
    // doStuff(2);
    // doStuff(3);
    //
    // auto now2 = Clock.currTime(UTC());
    // auto sS2 = now2.second;
    // writeln("Seconds : ", sS2 - sS);

    class Worker{
      int id;
      this(int id){
        this.id = id;
      }
      void work(){
        // Get thread id
        writeln(id, " : ", thisTid);
        writeln("Thread ", id, " starts");
        Thread.sleep(1.seconds);
        writeln("Thread ", id, " ends");
      }
    }

    // Total cores
    writeln("Cores : ", totalCPUs);

    auto workers = [new Worker(0), new Worker(1),
    new Worker(2)];

    // Parallel will execute the functions in parallel
    foreach(w; parallel(workers)){
      w.work();
    }
}

// ---- MIXINS ----
mixin template MakeType(T, T x){
  T var1 = x;
}

mixin template GetSum(T){
  T add(T x, T y){
    return x + y;
  }
}
