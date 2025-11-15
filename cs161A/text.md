
# Table of Contents

1.  [Meta-meta, delete eventually](#org992819a)
2.  [Meta-commentary](#orgea161cb)
    1.  [What is this text?](#orgefcdb27)
    2.  [Roadmap](#org8f1c037)
3.  [Introduction](#org9baeadc)
    1.  [Why C++?](#org002fdb6)
    2.  [What is programming? A high-level perspective](#org1c1af3c)
    3.  [What is programming? A low-level perspective](#org4fff861)
    4.  [Why C++, redux](#org63b9bf4)
    5.  [Why learn programming in the age of LLMs](#org3ee0396)
4.  [Your First Program](#orgec01614)
    1.  [How to run examples <code>[0/3]</code>](#org7dfb1e0)
        1.  [In-browser](#org663f65b)
        2.  [In onlinegdb](#orgddd73ce)
        3.  [Locally in the terminal](#org1c58601)
    2.  [Hello World](#org7d0e15c)
        1.  [Exercises](#orgadba860)
    3.  [Why semicolons?](#org5a58e41)
5.  [More early steps <code>[10/14]</code>](#orgc2bb027)
    1.  [Echoing text and string types](#orgf46cf7c)
    2.  [Explore: What's in a name?](#orgb55f3b0)
    3.  [Exercises](#orgd2760df)
    4.  [What's in an empty variable?](#orgecd1114)
    5.  [Advanced: What *is* a container? <code>[2/2]</code>](#org72fbd06)
    6.  [All we ever were, just zeros and ones](#org838662e)
    7.  [Memory and storage](#org3182ebb)
    8.  [Comments and documentation](#orgbf23e9e)
        1.  [Exercise about documenting a program](#orgde6e67b)
    9.  [Arithmetic and such in C++](#orgea1ab8b)
        1.  [Converting numbers: a word on "casting" types](#orgf9bfb00)
        2.  [Exercises](#orge8270b1)
    10. [Booleans, logic, and quizzes](#org8d2b998)
        1.  [The if-statement](#org1b25fc1)
        2.  [if, else, else-if](#orgaa7c05e)
        3.  [An authentication quiz](#orgca982e4)
        4.  [A quiz on languages](#org08829de)
        5.  [The dirty truth about booleans in C++](#org88e943b)
        6.  [Exercises](#orgb6edda8)
    11. [Letting the compiler figure out the type](#orgbbf0d11)
    12. [Data formatting <code>[3/3]</code>](#org78412b6)
        1.  [Making a table](#orgb8c384d)
        2.  [Abstracting formatting with functions](#org06faf02)
        3.  [Formatting decimal points](#org50a2069)
        4.  [Exercises](#orge55a11c)
    13. [Your first while loop: a number guessing game](#orgf3d412a)
    14. [Exercises](#org322d4f2)
        1.  [A randomized guessing game](#orga02a9ad)
        2.  [Adding a limited number of guesses](#org5f168b3)
        3.  [Averaging numbers and while-loops](#orgb7af1af)
        4.  [Exercises](#org00a46e7)
        5.  [Exercises](#orgc5c65f5)
    15. [For-loops (and the shape of loops to come)<code>[1/2]</code>](#org6f0055e)
        1.  [The syntax of for-loops](#orgc7aa713)
        2.  [Summing a bunch of numbers](#org078365d)
        3.  [Exercises](#orgb2c043b)
    16. [(Advanced) Arrays: the reasons for `for`](#org16c391b)
        1.  [Exercises](#org5be4a5c)
    17. [Menus with while-loops](#orgbd7abb6)
    18. [Data validation, the world's most annoying idiom <code>[1/2]</code>](#org64231c5)
        1.  [Right kind of data, but wrong option](#org25c740f)
        2.  [The wrong kind of data (cin.fail() &c.) <code>[0/2]</code>](#org1fdf612)
        3.  [Exercises](#org25cdd62)
6.  [More advanced programs <code>[1/3]</code>](#org5b00bfd)
    1.  [Functions on strings](#org794e692)
        1.  [Simple operations on strings](#orge87e445)
        2.  [Exercises](#orgdd23562)
        3.  [`find` and `substr`](#orgcb13c36)
        4.  [Iterating over strings with for-loops](#org4d9ee34)
        5.  [Example: Sarcasm Case](#orgaf4c1f3)
        6.  [Exercises](#orgd1174e9)
    2.  [Switches vs. ifs](#org6542e66)
        1.  [Exercises](#orgf10501c)
    3.  [Writing your own functions](#org97df549)
        1.  [Functions, reintroduced](#org45e3210)
        2.  [Exercises](#orgf3c6302)
    4.  [Scope and Lifetime: Where Do Variables Live?](#org40d27db)
        1.  [Local Variables: The Building Blocks](#org11ddd53)
        2.  [Variables in Functions](#org2b34d8f)
        3.  [Variable Shadowing: When Names Collide](#orgaae3c3b)
        4.  [Global Variables: Use Sparingly!](#org6be6e3d)
        5.  [Lifetime vs. Scope: What's the Difference?](#orgadf9f24)
        6.  [Practical Examples: Seeing Scope in Action](#org5ff396f)
        7.  [Common Mistakes and Debugging Tips](#orged1e4f6)
        8.  [Exercises](#org6b42418)
        9.  [Summary: Key Takeaways](#orge43535a)
        10. [Passing by reference](#org947205d)
        11. [Exercises](#org9cb88f1)
    5.  [Arrays, again, and Pointers](#org6579a89)
        1.  [Pointer and a promise](#org18779be)
        2.  [Dynamic arrays](#org1211424)
    6.  [Char Arrays](#org41c3ddd)
7.  [CS161B Preview: Looking Ahead to the Second Quarter](#org6356342)
    1.  [What to Expect from These Preview Chapters](#org228449e)
    2.  [Vectors: Dynamic Arrays](#org1a1ea5b)
        1.  [Introduction to Vectors](#org301e018)
        2.  [Creating and Initializing Vectors](#org9f37fd6)
        3.  [Vector Operations](#org76daf08)
        4.  [Accessing Vector Elements](#org20f5ece)
        5.  [Iterating Through Vectors](#org2e2132b)
        6.  [Vectors and Functions](#orgda0bc5d)
        7.  [Common Vector Patterns](#org862670e)
        8.  [Two-Dimensional Vectors](#org56853cb)
        9.  [Lab Projects](#org32aad46)
    3.  [Structs: Organizing Related Data](#orgce02e5d)
        1.  [Introduction to Structs](#org8916081)
        2.  [Creating and Using Struct Variables](#org73856b8)
        3.  [Accessing Struct Members](#org846127a)
        4.  [Structs and Functions](#org514c8af)
        5.  [Vectors of Structs](#orgdb2ce8b)
        6.  [Nested Structs](#orgf444dcf)
        7.  [Lab Projects](#orga77a953)
    4.  [File I/O: Reading and Writing Files](#org2a2c7e9)
        1.  [Introduction to File Input/Output](#org6acd44c)
        2.  [Reading from Files](#orga7c4c91)
        3.  [Writing to Files](#orgb89b2db)
        4.  [File Processing Patterns](#orgf1a47db)
        5.  [Error Handling with Files](#org9c8a5c1)
        6.  [Lab Projects](#org0f0a7ca)
    5.  [Multi-File Programs](#org807243a)
        1.  [Why Split Code into Multiple Files?](#orgbb550e6)
        2.  [Header Files (.h)](#org0f24ed8)
        3.  [Implementation Files (.cpp)](#orgd3e13ae)
        4.  [Compiling Multi-File Programs](#orgda09667)
        5.  [Organizing Code by Purpose](#org216280b)
        6.  [Common Errors with Multi-File Programs](#orgb416dae)
        7.  [Lab Projects](#org3dc41a6)
    6.  [Common Algorithms & Problem Solving](#orgec16088)
        1.  [Searching Algorithms](#org7df103d)
        2.  [Sorting Algorithms](#orgb93cdf5)
        3.  [String Algorithms](#org2fc86a8)
        4.  [Numeric Algorithms](#orgad7037e)
        5.  [Problem-Solving Strategies](#org24350cd)
        6.  [Command-Line Arguments](#org3a05571)
        7.  [Lab Projects](#org8ead4f7)
8.  [Extended example: Let's play shop](#org8b6c96b)
9.  [Extended example: An Adventure Game](#orgcefb527)
10. [Project Ideas](#org563fb1c)
    1.  [Mini-Projects (After Major Sections)](#orge7c4f84)
        1.  [After Loops](#org50c149a)
        2.  [After Arrays](#orga252fb8)
        3.  [After Functions](#org387c37e)
        4.  [After Strings](#org13bed4f)
        5.  [After Data Validation](#orgc9ed528)
    2.  [Larger Projects](#org69ce10a)
        1.  [Store Management System](#org0f77ac2)
        2.  [Grade Calculator System](#orgee8fdc5)
        3.  [Game Collection](#org356ba3d)
        4.  [Data Analysis Tool](#orgac2c121)
        5.  [Encryption Tool Suite](#org153b675)
    3.  [Project Guidelines](#org723b6b7)
    4.  [Common Mistakes to Avoid](#orgd2ef056)
11. [Sample Solutions](#orge1ff4cb)
    1.  [Hello World Solutions](#org3d839da)
        1.  [Basic: Name and Joke](#orgffaef87)
        2.  [Intermediate: ASCII Art Box](#orgab6521c)
    2.  [String I/O Solutions](#orgc10b226)
        1.  [Basic: Last, First Format](#orgf9b1012)
        2.  [Challenge: Mad Libs](#org5ac8818)
    3.  [Arithmetic Solutions](#orgc76c2d0)
        1.  [Intermediate: Tip Calculator](#orgd32ecd3)
        2.  [Challenge: Compound Interest](#org3a1f798)
    4.  [Boolean/If-Statement Solutions](#org3971385)
        1.  [Intermediate: Grade Calculator](#org2dd3f81)
        2.  [Challenge: Eligibility Checker](#orgf36bbb1)
    5.  [While Loop Solutions](#org2835ae1)
        1.  [Intermediate: Password Checker](#org32158f7)
    6.  [Random Number Solutions](#orgb42cc27)
        1.  [Intermediate: Rock, Paper, Scissors](#orgd252549)
        2.  [Challenge: Coin Flip Statistics](#org8070764)
    7.  [For-Loop Solutions](#org098d5fb)
        1.  [Basic: Fibonacci Numbers](#org6798a4b)
        2.  [Intermediate: Triangle Pattern](#orgc6fae30)
        3.  [Challenge: Prime Numbers](#org1994aa8)
    8.  [Array Solutions](#org02db1f5)
        1.  [Basic: Temperature Analysis](#org9021984)
        2.  [Intermediate: Array Reversal](#org62f0999)
    9.  [String Operation Solutions](#orgf447881)
        1.  [Basic: Vowel Counter](#orgd1ae4e1)
        2.  [Intermediate: Palindrome Checker](#org851fd19)
    10. [Switch Statement Solutions](#org6b7fa95)
        1.  [Intermediate: Calculator](#orgd21aa88)
    11. [Function Solutions](#org92ebf87)
        1.  [Basic: Larger of Two Numbers](#org3a729e8)
        2.  [Intermediate: Area Calculators](#org1c44852)
    12. [Pass by Reference Solutions](#org32870f6)
        1.  [Basic: Swap Function](#orgb195c8e)
        2.  [Intermediate: Division with Quotient and Remainder](#orgf291954)
        3.  [Challenge: Array Statistics](#orgf4a8862)
    13. [Data Validation Solutions](#org5efcea6)
        1.  [Challenge: Date Validator](#org6f826e6)
    14. [Notes on Solutions](#org087bb19)


<a id="org992819a"></a>

# Meta-meta, delete eventually

Video series that this is loosely based on has the progression of:

-   basic I/O, variables, string type
-   int/float/double types and arithmetic
-   if-statements and booleans
-   table formatting
-   first functions, abstracting table formatting to make it better and less cluttered
-   first while loops
-   if-statements again with && and ||, &c.
-   guessing game
-   arrays and for-loops
-   error handling with cin
    -   how to make a better pets database
-   substr, find, and iterating through strings
-   switch/case
-   arrays again, pointer-and-a-promise
-   revisiting petDB one more time with structs
-   char arrays

Projects I give

-   Write tiny programs
-   Personality quiz
-   Rock paper scissors
-   Store-front
-   Refactoring


<a id="orgea161cb"></a>

# Meta-commentary


<a id="orgefcdb27"></a>

## What is this text?

This is a free and open source text on learning the C++ language that can be freely shared with attribution under a CC-BY license. It comes in both a basic and interactive form. If you want to borrow from it, please do! 

[instructions for the interactive version should go here]


<a id="org8f1c037"></a>

## Roadmap

Where we're headed:


<a id="org9baeadc"></a>

# Introduction


<a id="org002fdb6"></a>

## Why C++?

C++ is a fascinating old-ish language. It blends a combination of "high-level" and "low-level" features. Now those might sound like rather judgy descriptors, like "high-level" is better than "low-level", but they're just different ways of looking at programming that&#x2014;for our purposes&#x2014;serve as a segue into talking about what programming is.


<a id="org1c1af3c"></a>

## What is programming? A high-level perspective

Programming is the practice of telling a computer to do things. How the computer does things doesn't entirely matter, what you care about is describing the *logic*, the precise sequence of what steps should happen, of the program to the computer.

You describe this logic in a special kind of language that's suitable for explaining ideas to the computer. These *programming languages*<sup><a id="fnr.1" class="footref" href="#fn.1" role="doc-backlink">1</a></sup> are very different than human languages, focused on precision at the expense of ease and flexibility. Have you ever tried to explain to someone complicated instructions entirely through text without being able to point or gesture or demonstrate it yourself? It's not easy! Often our instructions are *ambiguous*, they're unclear or can be read in different&#x2014;equally plausible&#x2014;ways.

Programming isn't hard because programming languages are bad. Programming is hard because writing good instructions is hard and programming languages are designed to never let you write unclear instructions.

A good programming language is, then, a thing that lets you express instructions precisely but is still relatively easy to think-in and read.


<a id="org4fff861"></a>

## What is programming? A low-level perspective

Computers are, fundamentally, just super-calculators acting on numbers. Everything you see and deal with on a computer is, under the hood, just a number. The pixels you see lit up on your screen are just encoded as a series of numbers. Your internet traffic is a series of numbers. That emotional-support video essay you have on in the background for the 20th time<sup><a id="fnr.2" class="footref" href="#fn.2" role="doc-backlink">2</a></sup> is just a series of numbers.

These numbers aren't even represented the normal way you would think of numbers, instead each number is just a sequence of 1s and 0s that the computer's *processor*, well, *processes*.

The computer's processor takes these sequences of 1s and 0s and does simple things like adding, subtracting, and multiplying them together.

It's kind of amazing that something so simple can, at a large enough scale, do all the things we do with computers, right?

Now, thinking of how to turn "streaming a video" into "a bunch of arithmetic operations" is *really hard*. You have to be an electrical engineer or computer scientist to figure out how to do that and it will *still* take you a really long, error prone, time.

Programming languages are ways of turning concepts that make more sense to us, like "if **this** then **that**", into simple number-crunching that the processor understands. The problem, though, is that turning concepts that are easy for us into arithmetic is hard to do efficiently. If you do it badly, the resulting programming is *slow*, takes a ton of memory, and might just be completely unusable.

A good programming language is, then, a thing that lets you have control over how the logic of the program you want gets turned into number-crunching at the end: you control the resources the program uses and the way it runs.


<a id="org63b9bf4"></a>

## Why C++, redux

C++ is a programming language that tries to meet the tension of making it easy to focus on the logic while still having control over the low-level execution of the program as instructions to the processor.

That isn't to say it's perfect: no programming language is. Every single language is a series of design decisions that reflect the ideas, style, and goals of the authors of the language.

Which is something I cannot emphasize enough! Programming languages are made by people and there's no "best" language, there is&#x2014;at most&#x2014;a best language for a particular project given the people and technical goals involved.


<a id="org3ee0396"></a>

## Why learn programming in the age of LLMs

This is a *weird* topic to have to bring up in an introduction to computer science text, but I think it's necessary. There's a lot of talk these days about how programming will be obsolete, "English is the new programming language", &c.

These arguments are a little silly. Not because large language models are bad at coding&#x2014;they're not&#x2014;or because they're going to hit a ceiling soon&#x2014;they *might* not&#x2014;but rather because there will always need to be people who understand

-   what the code is doing
-   how the code does it

so that there are people who can guide the AI, override the AI, or decide that the task is outside the capabilities of the AI and get their hands dirty.

In other words, we will always need programmers. In fact, a personal prediction of the author is that the average programmer will have to be better than ever: a master of the *high* and *low* levels of programming. In a world where non-programmers can "vibe code" simple proofs of concept, there may well be even more need for competent programmers to take those simple programs and turn them into robust products.

By analogy, this is like how home CAD software and 3D printers didn't kill manufacturing but rather let people quickly prototype ideas that they then pay engineers to turn into production lines.


<a id="orgec01614"></a>

# Your First Program


<a id="org7dfb1e0"></a>

## TODO How to run examples <code>[0/3]</code>


<a id="org663f65b"></a>

### TODO In-browser


<a id="orgddd73ce"></a>

### TODO In onlinegdb


<a id="org1c58601"></a>

### TODO Locally in the terminal


<a id="org7d0e15c"></a>

## DONE Hello World

So the origins of making a program that says "Hello, World" as your first program started with Kernigan and Ritchie in their introduction to the C programming language. The basic idea was that if you can get a simple program to compile<sup><a id="fnr.3" class="footref" href="#fn.3" role="doc-backlink">3</a></sup> that prints something out to the screen then you're already over the worst hurdles of learning a programming language.

This might seem like an odd perspective, right, because you've just barely begun learning the language but it makes a lot of sense if you're a pre-internet 1970s programmer who doesn't have any obvious references for how to run this stupid compiler thing or even what a program is supposed to look like.

So that being said, here's "Hello World" in C++

    #include <iostream>
    using namespace std;
    
    int main(){
      cout << "Hello, World" << endl;
    
      return 0;
    }

Let's break down the first few lines:

    #include <iostream>
    using namespace std;

These first two lines, unfortunately, will seem like the worst kind of magic for a bit. But, basically, what's happening is that the ability to even print things out in C++ is not a part of the "core" language but a library that is always included as part of the C++ compiler, a "StandarD Library" if you will (a-ha! that must be what "std" is short for here). To understand why things that seem so critical are not "in the language" by default, it helps to know that C++ (like C before it) is a language that's used for coding things like operating systems or programming little tiny computers called microcontrollers that have a millionth of the memory on your phone.

When programming under these conditions you really need to be able to control what goes into the compiled code, because maybe you want to keep your final program as tiny as possible and you don't want allll the code that goes into the seemingly unremarkable ability to print to a screen to get included. Because that's part of what the compiler does: it takes all the supporting code that's needed and includes it (oh, hey, that word again). It's kind of like if you're writing a paper and you want to make sure that someone can understand everything you're saying and all the references you're citing without access to a library or internet. Then instead of just having citations you also need to include all the other things you cite along with the paper as appendices so that someone can read it without having to track anything else down. That's what the compiler is doing.

So the first line here is *including* the code for printing and the second line is saying "oh, hey, we're going to be using the standard library a lot, so we want to just refer to things **from** the standard library as simply as possible". If you *don't* have this line you have to take every standard library function and put `std::` in front of it. It's annoying! We don't like doing this!

Okay, with that digression aside now we get into heart of the program

    int main(){
      cout << "Hello, World" << endl;
    
      return 0;
    }

The first line here is declaring a function, a chunk of code that has a name. In this case the name is "main". Every C++ program **must** have a function called "main" so the compiler knows, when building the stand-alone program, where to even start executing the code. Now, in principle there are different ways this could be handled, but most programming languages follow this convention of having a function called "main". When I call it a convention it's a lot like how every **human** language has a convention about how it has to be read. For example, the language I'm writing these notes in, English, has the convention that you start at the top of the text and read from left to right.

    int main() {

Let's dig into this function declaration

-   `int` means that when the function *ends* it has to give back an integer, a whole number
-   `main` is the name of the function
-   `()` is where you would put the name of data you have to give the function for it to run, its *arguments*, but `main` doesn't **have any** so instead you denote that `main` "needs nothing" by just putting `()`.
-   Finally, we have an open curly-brace which is the way you tell the compiler "okay I've finished declaring the function now here's the code that runs inside the function". This is matched by a closed curly-brace at the end that denotes "okay I'm done writing the function".

Okay we're almost done! There's just two more lines. The first

    cout << "Hello, World" << endl;

as you can probably guess is what actually prints the line "Hello, World". Think of `cout` as the *target* you're sending text to to be printed out. You send things to it with the `<<` symbol. The text you're sending is in quotation marks. In C++, like most programming languages, you denote text-as-data with double-quotes.<sup><a id="fnr.2.100" class="footref" href="#fn.2" role="doc-backlink">2</a></sup> The other thing we need to explain here is the `endl`, which is just the way of saying "end this line and start a new one".

So to understand the final line of the function, `return 0;`, remember how we said that when the function ends it has to give back a whole number? Well this is the line that says that when the function ends that it's going to hand back the number 0. This is an old convention that dates back to the days of *unix*, where if everything goes well a program should return 0.


<a id="orgadba860"></a>

### Exercises

1.  **Basic**: Modify Hello World to print your name and favorite programming joke on separate lines.
2.  **Intermediate**: Create a program that prints a simple ASCII art box with "Hello" inside it. For example:
    
        *********
        * Hello *
        *********
3.  **Advanced**
    This is less of an exercise and more of a "follow the recipe" to give you a taste of something you'll need to do later.
    
    First, start with this code either in-browser or locally on your computer!
    
        #include <iostream>
        using namespace std;
        
        void sayHello(){
        }
        
        int main(){
          cout << "Hello, world!" << endl;
        
          return 0;
        }
    
    What we've done here is create a *new* function. This new function doesn't return *anything* so instead of `int` it has the word `void` in front. Now this function, this reusable bit of code, doesn't do anything yet.
    
    Your first step is to copy the line `cout << ...` from main into the `sayHello` function. It should look like this now:
    
        #include <iostream>
        using namespace std;
        
        void sayHello(){
          cout << "Hello, world!" << endl;
        }
        
        int main(){
          cout << "Hello, world!" << endl;
        
          return 0;
        }
    
    Now, go ahead and delete the line you copied from `main` and replace it with `sayHello();`, so it looks like this:
    
        #include <iostream>
        using namespace std;
        
        void sayHello(){
          cout << "Hello, world!" << endl;
        }
        
        int main(){
          sayHello();
        
          return 0;
        }

Congratulations, you've written a *function* for the first time. This is one of the core-est of core concepts in programming: separating code into pieces that can be re-used and re-combined easily.

Question: From this alone, can you write a couple of sentences about how you *think* you'll use functions in the future?


<a id="org5a58e41"></a>

## DONE Why semicolons?

Already, you've probably noticed all the semicolons (the ";" symbols) in this code and this might be one of the first times in your life you've really needed to use them! It's reasonable to be asking "why, though?" now.

The answer is that C++ is an old language, that also borrows the syntax of *even older* languages. Part of being "an old language" means that it has weird bits that come from a time we were both a lot worse at making compilers and computers were also much much much [&c.] much slower. So the semicolons are a way to note, for the compiler, "hi this is end of a line of code". This is not an essential feature of all programming languages and, indeed, more modern languages have much more elegant ways to denote the end of one line and the start of another.

But once a language, like C++, exists and starts being wildly used you can't do things like "change fundamental features of the syntax"

So, yes, **most** lines need semi-colons at the end. The lines that don't need a semicolon are

-   lines that end with `{` or `}` (with one annoying exception we'll get to)
-   lines that start with #
-   comments, which we haven't discussed yet


<a id="orgc2bb027"></a>

# TODO More early steps <code>[10/14]</code>


<a id="orgf46cf7c"></a>

## DONE Echoing text and string types

So we've already done a non-trivial amount of work because we've learned to compile a file, run it, and have it print something out the screen.

Now here's our first program that we're going to use to explain

-   variables
-   our first data type, string
-   how to read data in from the command line

Go ahead and first compile and run this code. You should get a command prompt that lets you type something, hit enter, and then get what you typed printed back onto the screen. 

    #include <iostream>
    using namespace std;
    
    int main(){
      string stuff;
      cout << "Enter a thing: " << endl;
      cin >> stuff;
    
      cout << "You said: " << stuff << endl;
    
      return 0;
    }

Now that you've tried it and seen that it works, let's explain it!

Okay, so these first lines are what we've already seen before:

    #include <iostream>
    using namespace std;

We'll reiterate that these lines let us

-   load in the code needed for us to do things like read and write information from the terminal
-   **not** have to preface all this code with `std::` because that gets really annoying to type!

From there we have

    int main(){
    ...
    }

which, again, is a way of declaring a named chunk of code. A very specific named chunk of code: `main`, the function that is needed as the "entry point" of final program. We'll make our own functions soon enough, but for now know that this is a function and represents the pattern of how they're made.

The next line `string stuff;` needs some explanation. In C++, like a lot of other programming languages, in order to store information you need to make a container and give it a name. In this case we're naming a container `stuff`. Now, what's up with the text `string` that comes before that?

Well, much like the `int` we saw before `main` this is a **type**<sup><a id="fnr.4" class="footref" href="#fn.4" role="doc-backlink">4</a></sup>, it's a signifier for the *form* of data we're talking about. `int` is the type that corresponds to whole numbers. `string` is the type that corresponds to text-as-data, like what we saw in our *Hello, World* program where the text "Hello, World" was inside the program in quotes like `"Hello, World"`.

So our container `stuff` *can* contain strings but it's currently empty. We're going to put something in it, though, by using `cin`! `cin` is the opposite of `cout` and, rather than printing something out to the screen, lets you read text **into** the program by typing and hitting enter.

After the `cin` has run,  we have something *in* our container and then we can grab the contents of the container using the container name which, in this case, is simply `stuff`.

So when we want to print out the contents of `stuff` we say `cout << "You said: " << stuff << endl;"`.

We also end with `return 0;` because we're very good programmers and **never** forget to put this in our files.<sup><a id="fnr.6" class="footref" href="#fn.6" role="doc-backlink">6</a></sup>


<a id="orgb55f3b0"></a>

## Explore: What's in a name?

Try changing the name of "stuff" in the program above. Be careful that when you *rename* the variable that you rename it consistently and change every use of the name "stuff" in the program. Come back and read on after you're done.

Did anything change? The answer is almost certainly "no!". C++ doesn't *care* what containers are named as long as you label them correctly. You could have, confusingly, named your text-holding variable to `thisIsANumberNotAString` and the program would still work just fine. There's nothing in the C++ compiler that actually "knows" what the name you gave a variable means.

That doesn't mean naming variables "hinder" or "boopsboops" is a good idea. There's an old saying that you need to write your code so it's understandable by a total stranger, because that stranger is likely to be **you** in a few months.

So be kind to your future self and user variable names that make sense!


<a id="orgd2760df"></a>

## Exercises

1.  **Basic**: Ask for first and last name separately, then print them together in the format "Last, First".
2.  **Intermediate**: Ask for three words and print them in reverse order (if user enters "cat dog bird", print "bird dog cat").
3.  **Challenge**: Create a Mad Libs program that asks for a noun, verb, adjective, and adverb, then inserts them into a story template like: "The [adjective] [noun] decided to [verb] [adverb]."


<a id="orgecd1114"></a>

## DONE What's in an empty variable?

Now, when we declare a variable we're making a container, but is there anything **in** the container at that point? Well let's see!<sup><a id="fnr.7" class="footref" href="#fn.7" role="doc-backlink">7</a></sup>

    #include <iostream>
    using namespace std;
    
    int main(){
      string stuff;
      cout << "And our string holds..." << stuff << endl;
      return 0;
    }

If I run this on my computer, I get an output of "And our string holds&#x2026;" and nothing else. In this case, `stuff` contains the empty string "" that corresponds to no text at all. That seems like a pretty reasonable thing for an empty container to hold!

What about if we instead make an empty int?

    #include <iostream>
    using namespace std;
    
    int main(){
      int stuff;
      cout << "And our int holds..." << stuff << endl;
      return 0;
    }

Well I ran this once and got "And our int holds&#x2026;779647075". Oh dear *dot dot dot* that seems like a very **not** great thing to have as a default value!

Okay, and now we get into the punchline. The reason why I'm specifying "on my computer" and "when I run this" is that the answers could actually change between computers and compilers! You really, really, really should **never** use an empty variable because you can guarantee exactly nothing about what it will do.


<a id="org72fbd06"></a>

## DONE Advanced: What *is* a container? <code>[2/2]</code>

At this point you might be wondering "what *are* these containers, these *variables*, anyway?". What does it really mean for the compiler to make space for data? To answer that we need to get into some more details about how data is stored in a computer.


<a id="org838662e"></a>

## DONE All we ever were, just zeros and ones

Computers, the modern digital computer we've all settled on, operates fundamentally on Os and 1s. Why? Because in the end you can think of the fundamental atom of the computer, the transistor, as an electrical on-off switch. If it's "on" it lets current flow, if it's "off" it does not. The brilliance of digital computers is in cleverly encoding *everything* we do into patterns of these ons and offs. First, to explain *that* we need to review how we write numbers in the normal way.

When we write a number like 42367 this is shorthand for `40000 + 2000 + 300 + 60 + 7`. You may have learned to describe this as the "ones place", "the tens place", "the hundreds place", &c. We can write this even more compactly as

`4*10^4 + 2*10^3 + 3*10^2 + 6*10^1 + 7*10^0`

using the fact that *anything* to the zeroth power is just one.

This is called the "base ten" representation of numbers because it's a sequence of powers of ten. We can do bases in other numbers though and you might see where we're going with this: computers work with "base two" numbers, also called *binary*.

A binary number like 10010 is thus a way of writing `1*2^4 + 0*2^3 +0*2^2 + 1*2^1 + 0*2^0`, which is actually the number `16 + 0 + 0 + 2 + 0` or `18`.

We're not going to go deep into how different kinds of data are represented *as* numbers, but we'll simply say that **everything** on a computer is fundamentally understood as a binary number.


<a id="org3182ebb"></a>

## DONE Memory and storage

You might have heard people refer to "memory" when it comes to computers: but what is it? How does it differ from something like the storage space on your laptop or phone?

When someone says "memory" generally what they actually mean is Random Access Memory (RAM, in the sequel), which maybe should be called "Arbitrary Access Memory" because it's not *random* like a dice roll it's that you can access any part of the memory at any time.

Think of it like a giant wall of cubbyholes like at a gym, each square is labeled so it can be found quickly and when you need something from it you just walk to the right one and grab what you want. You don't have to, say, walk down a hallway starting at the beginning every time you want to grab something.

That image is a little misleading, though, because it's less like a set of fixed cubbyholes and more like a huge wall with a bunch of movable dividers that can&#x2014;on the fly&#x2014;be reconfigured to fit different sizes of things. Tiny ones for a pair of running shoes. A huge one for a giant dufflebag.

Continuing this metaphor we can explain what happens when you make a variable:

-   the computer then finds space in the giant storage wall to put a divider,
-   notes down the label on that storage space
-   comes back and puts the value of that label into the variable name you declared

We can help explain, too, what these type signifiers are like `int` and `string`: they're there to make it easy for the computer to know what the size of the data is, "where to put the divider" if we keep going with the metaphor.<sup><a id="fnr.8" class="footref" href="#fn.8" role="doc-backlink">8</a></sup>

This memory<sup><a id="fnr.9" class="footref" href="#fn.9" role="doc-backlink">9</a></sup> gets reset every time you run the program. That's because the memory of your computer isn't for long-term storage, it's the scratch paper that programs need to run and keep track of all of their calculations.

The main takeaway to get out of this is that every program manages its own storage and, for all the programs you'll write in this class, the compiler figures out at compile time what the storage you need is and how to label it.


<a id="orgbf23e9e"></a>

## DONE Comments and documentation

There's a line from the (absolutely amazing) old computer science textbook "Structure and Interpretation of Computer Programs" that goes

> Programs must be written for people to read, and only incidentally for machines to execute.

If that pithy line sounds weird think of it this way: when we write code we're solving problems. When we solve problems, we want other people to be able to understand those solutions for two reasons.

The first is that we want other people to be able to check our work and see if we did it correctly! If there's a problem not with the *code* but with the *reasoning* then it needs to be clear the decisions that were made and *why* they were made.

To make this really concrete, imagine that you're coding a physics simulation for a game engine. It works great for one game, a retro-style 2.5D shoot-em'-up. Now, later people want to adapt this physics engine to a remake of gamer-rage classic Getting Over It, but now with a pogo-stick. Except it doesn't work! The bouncing looks and moves completely wrong!

Now, if your code is well-written, clear, and properly documented these game developers might discover the assumption that all collisions are perfectly elastic, so if something bounces once it will bounce **exactly** as high every single time. A cup of coffee's worth of coding later, they have it fixed!

If your code is obtuse, poorly refactored, and has no documentation then, well, they might have to just write something new from scratch or grab a new physics engine library.

To recall a point made earlier, one of the most common ways this story plays out is for both developers to be *you*: because the past is a foreign country and time makes us strangers to ourselves.

All of that being said, *what* does good documentation look like? This is a subjective thing but my take would be something like:

-   functions have names that tell you something
-   variables and function parameters are clear either by descriptive names or short names with useful conventions (i.e. generic arithmetic functions have parameters like `n1` and `n2` rather than `firstNumber=/=secondNumber`
-   the *ideas* behind the code and description of how it *should* work are explained well

With that last bit, you might be wondering how we can add explanations into the code? Those are *comments*.

Comments are **completely** ignored by the compiler and are text only people see in the source code, thrown away in the creation of the actual program.

There are two ways to write comments: the first is to put `//` anywhere in a line of code, which means that everything to the right of the double-slash becomes a comment; the second is to have a pair `/*` and `*/` across multiple lines, which makes the entire region commented. Here's an example:

    #include <iostream>
    using namespace std;
    
    int main(){
      int num = 0; // this program doesn't do anything interesting
    
      /* but it
         has
         plenty
         of
         comments
    
         explodeComputer();
    
         oh look this function doesn't get called, I guess
      */
      return num;
    }


<a id="orgde6e67b"></a>

### DONE Exercise about documenting a program

Here's a program that is uncommented and uses a number of constructs you haven't seen before.

See if you can take this code and add comments to it to clarify what it does and write notes about what you don't understand. This is an exercise to practice *reading* code, which is about as important a skill as writing it in the first place!

    #include <iostream>
    #include <cmath>
    using namespace std;
    
    int main() {
        int choice;
        double radius, length, width, area;
    
        cout << "Shape Area Calculator" << endl;
        cout << "1. Circle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "Enter your choice (1 or 2): ";
        cin >> choice;
    
        if (choice == 1) {
    	cout << "Enter radius: ";
    	cin >> radius;
    	area = 3.14159 * radius * radius;
    	cout << "Area of circle: " << area << endl;
        }
        else if (choice == 2) {
    	cout << "Enter length: ";
    	cin >> length;
    	cout << "Enter width: ";
    	cin >> width;
    	area = length * width;
    	cout << "Area of rectangle: " << area << endl;
        }
        else {
    	cout << "Invalid choice!" << endl;
    	return 1;
        }
    
        return 0;
    }


<a id="orgea1ab8b"></a>

## DONE Arithmetic and such in C++

Arithmetic in C++, like most programming languages, is meant to look a lot like the arithmetic operations you're used to. You can test out some basic operations with the following code. Note that this example shows us that you can use `cin` with types other than `string`.

    #include <iostream>
    using namespace std;
    
    int main(){
      int num1;
      int num2;
      int num3 = 5; // look, we're giving a variable a value at the same time as we make it
    
      cout << "Enter a number:  ";
      cin >> num1;
    
      cout << "Enter another number: ";
      cin >> num2;
    
      cout << "Adding numbers: " << num1 + num2 << endl;
      cout << "Subtracting numbers: " << num1 - num2 << endl;
      cout << "Multiplying numbers: " << num1 * num2 << endl;
      cout << "Dividing numbers .....?: " << num1 / num2 << endl;
    
      return 0;
    }

So this probably **mostly** went the way you expected but when you ran this code were you surprised by anything related to division? If you weren't, try entering 5 for `num1` and 3 for `num2`. You'll see that `5/3` is computed as 1.

Why on earth is that true? Well, because `num1` and `num2` are **whole numbers** and 3 goes into 5 only once.

Okay, but what if we want to deal with fractional numbers? That's when we introduce *floats* and *doubles*. These are both kinds of "floating point numbers". The term floating point sounds weird but the point (haha) is that these are numbers that allow for decimal points in them and don't have a fixed number of digits to the left or right of the decimal.

Okay, so why are there two different types? Well, one is smaller than the other. No, this doesn't strictly mean it's for smaller numbers. It's also for "less precise" of numbers.<sup><a id="fnr.10" class="footref" href="#fn.10" role="doc-backlink">10</a></sup> If you need more accurate representations of non-whole numbers, you should use a `double`. Most of the time, folks recommend just defaulting to `double` instead of `float`. You might see me sometimes still use `float` for things where we know the numbers are small and precision doesn't matter.

So let's try this program again with `double` s instead of `int`.

    #include <iostream>
    using namespace std;
    
    int main(){
      double num1;
      double num2;
    
      cout << "Enter a number:  ";
      cin >> num1;
    
      cout << "Enter another number: ";
      cin >> num2;
    
      cout << "Adding numbers: " << num1 + num2 << endl;
      cout << "Subtracting numbers: " << num1 - num2 << endl;
      cout << "Multiplying numbers: " << num1 * num2 << endl;
      cout << "Dividing numbers: " << num1 / num2 << endl;
    
      return 0;
    }

There, that's probably more what you would have expected from division.

Note that `cin` keeps working no matter what type of container we're trying to fill with it! There's definitely no possibility that is going to go wrong later in a really annoying way! Foreshadowing!


<a id="orgf9bfb00"></a>

### DONE Converting numbers: a word on "casting" types

Let's imagine that you start out with integers but you do need to divide them later. You could just start with doubles but that violates a basic principle of programming: you want the *type* of the variable to match what it *is*. If you wanted to, say, keep track of rock/paper/scissors wins versus the total number of games played, you wouldn't want to store that as a double because what's 0.3 games? It's has no meaningful interpretation<sup><a id="fnr.11" class="footref" href="#fn.11" role="doc-backlink">11</a></sup>, so our program shouldn't allow it even accidentally.

So what do we do? We temporarily tell the C++ compiler "here, right here, treat this data like it's a different type". In programming this is called a "type cast".

The general form of casts are `static_cast<NEWTYPE>(VARIABLENAME)`. 

With casting in hand, we can do something like this to divide two integers without losing information:

    #include <iostream>
    using namespace std;
    
    int main(){
    
      int num1 = 5;
      int num2 = 3;
    
      cout << static_cast<double>(num1)/static_cast<double>(num2) << endl;
    
      return 0;
    }

This is, at least in C++, the kind of cast you're going to want to do basically all the time. It's a casting method that is checked by the compiler, letting you know if you're doing something that doesn't make any sense.

Like, for example, what if we wanted to treat a `string` as an `int`?

    #include <iostream>
    using namespace std;
    
    int main(){
    
      string stuff = "beepity-boops";
    
      cout << static_cast<int>(stuff) << endl;
    
      return 0;
    }

If you try to compile this code, you'll find that the compiler completely rejects it. Why? Because turning a chunk of text into a number doesn't really have an obvious meaning?

You **could** do it but you need to define what it means: do you want the length? Do you want to convert each letter into a number and add them all together? It's not clear and the compiler is doing the right thing by *not* deciding for you and just rejecting the code as unclear.

We can even assign the result of a cast to a new variable and it creates a *completely separate variable*! Like this:

    #include <iostream>
    using namespace std;
    
    int main(){
    
      int num1 = 9;
    
      double dnum1 = static_cast<double>(num1);
    
      dnum1 = 11;
    
      // note that we change dnum1 but num1 stays the same
      cout << num1 << endl;
    
    
      return 0;
    }


<a id="orge8270b1"></a>

### Exercises

1.  **Basic**: Calculate the area and perimeter of a rectangle from user input (length and width).
2.  **Intermediate**: Create a tip calculator that asks for bill amount and tip percentage, then shows the tip amount and total.
3.  **Challenge**: Implement a compound interest calculator that asks for principal, annual rate, time in years, and number of times compounded per year. Use the formula: A = P(1 + r/n)<sup>(nt)</sup>


<a id="org8d2b998"></a>

## TODO Booleans, logic, and quizzes


<a id="org1b25fc1"></a>

### The if-statement

Okay, if all we could do with code was straight-line programs that just do a sequence of calculations then we'd basically just have the equivalent of a calculator but arguably more annoying.

Our first real important ability is the ability to make *choices*. "Do I do *this* or *that*?" Let's look at an example.

    #include <iostream>
    using namespace std;
    
    int main(){
    
      double num1;
      double num2;
    
      cout << "Enter a number: ";
      cin >> num1;
      cout << "Enter another number: ";
      cin >> num2;
    
      cout << "If the first number - the second number is greater than 10, it will print 'beep', otherwise 'boop'" << endl;
    
      if(num1 - num2 > 10){
        cout << "beep" << endl;
      }
      else{
        cout << "boop" << endl;
      }
    
      return 0;
    }

Let's break down the new part here:
  `if(num1 - num2 > 10){` this lets us ask the question "is num1 minus num2 greater than 10"? *If* the answer to this question is "yes", then all the code between this curly-brace and the next curly brace happens. If the answer is "no", then the code between the curly-brace after `else` and the closing curly-brace after that is run.

A way you could read this in English is provided in the text that prints out "If the first number - the second number is greater than 10, it will print 'beep', otherwise 'boop'".

We refer to this as an "if-statement".

An if-statement doesn't have to have the `else` part, though.

Consider this program that makes sure an integer entered is positive

    #include <iostream>
    using namespace std;
    
    int main(){
      int num;
      cout << "Enter a positive number (if it's not positive we'll *make* it positive): ";
      cin >> num;
    
      if(num < 0){
        num = -num;
      }
    
      cout << "Your number: " << num << endl;
      return 0;
    }

Okay, so let's talk a bit more about what kinds of "questions" you can ask. "Question" is also a kind of data and has a type. That type is called `bool`, sometimes called a "boolean", named after the mathematician "George Boole" who was extremely influential in the development of formal logic.

The type `bool` has two elements: `true` and `false`. You can use these inside your if-statements, like the following program:

    #include <iostream>
    using namespace std;
    
    int main(){
      bool isItQuestionMark = true;
    
      if(isItQuestionMark){
        cout << "It's true" << endl;
      }
      else {
        cout << "It's not" << endl;
      }
      return 0;
    }

There are all sorts of questions you can ask, such as

-   `a == b` are two things equal to each other
-   `a != b` are two things not equal
-   `a > b` is a greater-than b
-   `a < b` is a less-than b

You can also take the inverse of a question but putting `!` in front of it. So we can have

    #include <iostream>
    using namespace std;
    
    int main(){
    
      if(!true){
        cout << "This shouldn't get printed" << endl;
      }
      else{
        cout << "But this should!" << endl;
      }
      return 0;
    }

You also don't have to ask just one question at a time. You can combine questions with `&&`, pronounced "and", and `||`, pronounced "or".

If I have questions a and b then `a && b` only returns `true` if **both** `a` and `b` are true. Similarly, `a || b` returns true if `a` is true, if `b` is true, or if both of them are true.

This is really useful for when you need to check if, say, a number is *between* two values like so:

    #include <iostream>
    using namespace std;
    
    int main(){
    
      int input;
      cout << "Enter a number between 1 and 10" << endl;
      cin >> input;
      if(input > 0 && input < 10){
        cout << "Good work" << endl;
      }
      else {
        cout << "Oh c'mon!" << endl;
      }
      return 0;
    }

This is a silly example but being able to make these checks will be important as we make bigger programs.


<a id="orgaa7c05e"></a>

### if, else, else-if

If-statements can also be chained together for more complicated decision making, like in the following example:

    #include <iostream>
    using namespace std;
    
    int main(){
    
      string input;
      cout << "Name an animal: ";
      cin >> input;
    
      if(input == "dog"){
        cout << "The dog goes woof" << endl;
      }
      else if(input == "cat"){
        cout << "The cat seeks revenge" << endl;
      }
      else if(input == "possum"){
        cout << "The possum faints dramatically" << endl;
      }
      else {
        cout << "I...don't know what to say" << endl;
      }
    
      return 0;
    }

Try the code out! If you enter "dog" you'll see the text "The dog goes woof" printed out. If you enter something, like, "Parrot", then you'll get "I&#x2026;don't know what to say".

We can expand beyond a binary of choices this way, chaining as many "else-if"s before we finally get to an `else`.

The `else` has to be the last thing. Try compiling the following code:

    #include <iostream>
    using namespace std;
    
    int main(){
    
      string input;
      cout << "Name an animal: ";
      cin >> input;
    
      if(input == "dog"){
        cout << "The dog goes woof" << endl;
      }
      else if(input == "cat"){
        cout << "The cat seeks revenge" << endl;
      }
      else {
        cout << "I...don't know what to say" << endl;
      }
      else if(input == "possum"){
        cout << "The possum faints dramatically" << endl;
      }
    
      return 0;
    }

The C++ compiler just completely rejects this program as poorly defined!

That is, in fact, a good thing!


<a id="orgca982e4"></a>

### DONE An authentication quiz

Okay, let's do something silly as an example of putting some of these concepts together. A little program that runs a very special security quiz that asks you a few questions, use some variables, and then print out the results. This will determine, in a foolproof way, if the person answering the questions is definitely me.

    #include <iostream>
    using namespace std;
    
    int main(){
      string q1 = "Have you ever touched a computer before? type 1 or 0\n";
      bool a1;
      string q2 = "Do you prefer whiteboards to blackboards ? type 1 or 0\n";
      bool a2;
      string q3 = "False? type 1 or 0\n";
      bool a3;
      string q4 = "Is a proof a program? type 1 or 0\n";
      bool a4;
    
      cout << q1;
      cin >> a1;
      cout << q2;
      cin >> a2;
      cout << q3;
      cin >> a3;
      cout << q4;
      cin >> a4;
    
      if((a1 && !a2 && a3) || a4){
        cout << "Oh, hi me, it's definitely you I'm talking to because no one could crack that code" << endl;
      }
      else{
        cout << "You're not left_adjoint!" << endl;
      }
      return 0;
    }

Can you reverse engineer what to answer for each question to hack the system? Try to parse what the condition in the final if-statement is actually saying!


<a id="org08829de"></a>

### DONE A quiz on languages

This is a slightly more complicated version of the above where you accumulate a running total of how many answers they've gotten correct in order to give an appropriate response at the end.

We're going to ask five questions about programming language history and if the user gets all of them right we're going to respond with something like "Hey, no CS grad students allowed here that's cheating!". If they get two to four correct then we'll say "Hey, you know a fair bit!".  If they get one correct we'll say "Well you are the start of your journey" and if they get none correct we'll say "Okay, admit it, you threw that one".

Before you read ahead and see how I did it, see if you can do this yourself first with five questions you think of, then read my solution.

Okay here's my version:

    #include <iostream>
    using namespace std;
    
    int main(){
    
      int numberCorrect = 0;
    
      string input;
    
      cout << "Is C++ a programming language? y/n" << endl;
      cin >> input;
    
      if(input == "y"){
        cout << "Darn right it is" << endl;
        numberCorrect = numberCorrect + 1;
      }
      else {
        cout << "You're messing with me, right?" << endl;
      }
    
      cout << "Is the untyped lambda calculus a total language? y/n" << endl;
      cin >> input;
      if(input == "n"){
        cout << "Wow, you know your stuff! A little suspiciously so, actually" << endl;
        numberCorrect = numberCorrect + 1;
      }
      else{
        cout << "I didn't expect you to get that one, honestly" << endl;
      }
    
      cout << "Are JavaScript and Java related languages? y/n" << endl;
      cin >> input;
      if(input == "n"){
        cout << "You're right! It was entirely a marketing decision to give JavaScript a similar name!" << endl;
        numberCorrect = numberCorrect + 1;
      }
      else{
        cout << "That's a common misconception!" << endl;
      }
    
      cout << "Is there a fundamental difference between interpreted and compiled languages? y/n" << endl;
      cin >> input;
      if(input == "n"){
        cout << "That's right. Those are ways that a language can be implemented which is a separate concern from the definition of a language itself!" << endl;
        numberCorrect = numberCorrect + 1;
      }
      else{
        cout << "That's also a common misconception!" << endl;
      }
    
      cout << "Is C still worth learning if you know C++? y/n" << endl;
      cin >> input;
      if(input == "y"){
        cout << "Absolutely!" << endl;
        numberCorrect = numberCorrect + 1;
      }
      else{
        cout << "It still has its place!" << endl;
      }
    
      if(numberCorrect == 5){
        cout << "Hey no CS grad students allowed here, that's cheating!" << endl;
      }
      else if(numberCorrect >= 2){
        cout << "You really know your stuff!" << endl;
      }
      else if(numberCorrect > 0){
        cout << "You're at the beginning of a long, fun, journey!" << endl;
      }
      else {
        cout << "Oh, okay, you threw that one on purpose" << endl;
      }
    
      return 0;
    }

Now if you're looking at my solution, do you notice how I used a chain of `else-if` statements? What do you think would happen if, instead, I actually had them just as `if` statements with an `else` at the very end?

It won't *quite* work right, but can you see why? Hint: try getting 5 correct after turning the middle `else-if` statements into plain `if`.

Now why did that happen? Well the difference between an `else-if` and a plain `if` is that the `else-if` only checks if nothing else in the chain has fired, but a plain `if` will check no matter what.

You can change this `else-if` example to be based around `if` statements instead if you make the conditions more complicated, like the first one needs to become `numberCorrect >=2 && numberCorrect < 5`.


<a id="org88e943b"></a>

### The dirty truth about booleans in C++

Beware, absolute nastiness awaits you in this section. You'll learn about horrendous, semantics breaking, decisions in the history of programming language design.

So, you see dear reader, it turns out that 

    #include <iostream>
    using namespace std;
    
    int main(){
      if(true == 1){
        cout << "true is the same as 1" << endl;
      }
    
      if(false == 0){
        cout << "false is the same as 0" << endl;
      }
    
      int num = 1;
      if(true == num){
        cout << "true is 1 even if we insist that the 1 is an int" << endl;
      }
    }

Compile this code and run it to confirm the horrible truth, but you'll see that booleans are really just numbers. Which is honestly a terrible decision because it means there's all sorts of wrong things that can happen.

    #include <iostream>
    using namespace std;
    
    int main(){
      int num;
      cout << "Enter a number, promise I won't misuse it" << endl;
      cin >> num;
      if(num){ // whoops I meant to compare this to something but I got distracted by a dog
        cout << "This means that num is greater than 3" << endl;
        cout << "See? " << num << endl;
      }
      else{
        cout << "num is too small" << endl;
      }
      return false; // what is happening here
    }

Look at this wretched code! `return false`? `if(num)`? This is terrible! And the compiler did *nothing* to stop it!

Woe be upon us!


<a id="orgb6edda8"></a>

### Exercises

1.  **Basic**: Check if a number is positive, negative, or zero and print an appropriate message.
2.  **Intermediate**: Create a simple grade calculator that takes a numeric score and outputs a letter grade (90+=A, 80+=B, 70+=C, 60+=D, <60=F).
3.  **Challenge**: Build an eligibility checker that asks for age and tells the user what they can legally do (vote at 18, drink at 21, rent a car at 25, run for president at 35).


<a id="orgbbf0d11"></a>

## DONE Letting the compiler figure out the type

There's a fun trick you can do in C++: not even bother writing the type and, instead, just letting the compiler figure out&#x2014;in the process of compiling&#x2014;what the type is supposed to be for you! We can do that with the \`auto\` keyword.

So we can actually do things like:

    #include <iostream>
    using namespace std;
    
    int main(){
      auto x = 5;
      auto y = 10;
    
      cout << "we can add two numbers whose types we didn't name! So x + y is..." << x+y << endl;
      return 0;
    
    }

This is an example of something called *type inference*. There are entire programming languages built around the idea of type inference such as Haskell! This is very different than languages like Python that don't really *have* types that are checked by the compiler/interpreter.

I'd encourage you to use this sparingly when you're first learning to code but the more experienced you become, feel free to use this trick.


<a id="org78412b6"></a>

## DONE Data formatting <code>[3/3]</code>

Now we get to a useful, but perhaps slightly tedious, set of skills to learn: how to properly format your output.

Note that all of the following examples mean you also need to include the library `<iomanip>` as well by adding the line `#include <iomanip>` into your code.


<a id="orgb8c384d"></a>

### DONE Making a table

So if we wanted to make a table in C++ we might want to do something like use some '|' as dividers like this. For this and the rest of the examples in this table I'm going to assume that we're making a table that shows information about pets: their name, species, and how old they are. If we try this in the naive way we'll try something like this:

    #include <iostream>
    using namespace std;
    
    int main(){
      cout << "|" << "Pet name"
           << "|" << "Pet species"
           << "|" << "Pet age"
           << "|" << endl;
    
      cout << "|" << "Liese"
           << "|" << "Cat"
           << "|" << 24
           << "|" << endl;
    
      cout << "|" << "Dora"
           << "|" << "Dachshund"
           << "|" << 15
           << "|" << endl;
    
      return 0;
    }

Now if you try running this code you'll discover that it looks, well, **terrible**. Everything is badly misaligned. Okay, so what we need is the ability to control the spacing: to set a *width* to the a field and let the text comfortably inside that space. Thankfully, C++ already has a function to do that: `setw`, which stands for "set width". The `setw` function takes one argument, an `int`, and sets aside that much space for the next piece of text you pass to `cout`.

We can test it out by modifying our program like this:

    #include <iostream>
    #include <iomanip>
    using namespace std;
    
    int main(){
      cout << "|" << setw(15) << "Pet name"
           << "|" << setw(15) << "Pet species"
           << "|" << setw(15) << "Pet age"
           << "|" << endl;
    
      cout << "|" << setw(15) << "Liese"
           << "|" << setw(15) << "Cat"
           << "|" << setw(15) << 24
           << "|" << endl;
    
      cout << "|" << setw(15) << "Dora"
           << "|" << setw(15) << "Dachshund"
           << "|" << setw(15) << 15
           << "|" << endl;
    
      return 0;
    }

Exercise:

> So what we've left implicit so far is that a call to `setw` will modify the *next* thing. Try out, for yourself, what happens if you put it in front of the "|" instead.

This is *alright* but personally I think the way the data and columns are aligned like this makes it feel hard to skim. I think it looks better to have the column names aligned the *opposite* way to the data. So C++ has an easy way of doing this: `cout << left` will make data left-aligned and `cout << right` will make the data right-aligned. Once you set an alignment it stays that way until you change it again. So we need to do something like this

    #include <iostream>
    #include <iomanip>
    using namespace std;
    
    int main(){
      cout << left;
      cout << "|" << setw(15) << "Pet name"
           << "|" << setw(15) << "Pet species"
           << "|" << setw(15) << "Pet age"
           << "|" << endl;
      cout << right;
    
      cout << "|" << setw(15) << "Liese"
           << "|" << setw(15) << "Cat"
           << "|" << setw(15) << 24
           << "|" << endl;
    
      cout << "|" << setw(15) << "Dora"
           << "|" << setw(15) << "Dachshund"
           << "|" << setw(15) << 15
           << "|" << endl;
    
      return 0;
    }

That's slightly easier to read, but we still have room to fuss around with this program. Rather than playing with the alignment of the column names let's try adding a visible divider. To do that we can play with `setfill`, another function that lets us replace the spaces in the padding created by `setw` with any character we want.

    #include <iostream>
    #include <iomanip>
    using namespace std;
    
    int main(){
    
      cout << "|" << setw(15) << "Pet name"
           << "|" << setw(15) << "Pet species"
           << "|" << setw(15) << "Pet age"
           << "|" << endl;
    
      cout << setfill('-');
      cout << "|" << setw(15) << ""
           << "|" << setw(15) << ""
           << "|" << setw(15) << ""
           << "|" << endl;
      cout << setfill(' ');
    
    
      cout << "|" << setw(15) << "Liese"
           << "|" << setw(15) << "Cat"
           << "|" << setw(15) << 24
           << "|" << endl;
    
      cout << "|" << setw(15) << "Dora"
           << "|" << setw(15) << "Dachshund"
           << "|" << setw(15) << 15
           << "|" << endl;
    
      return 0;
    }

Quick Check: What happens if the longest word is longer than the space you set aside for it? Does it truncate or does it through off the formatting? Try it and find out!


<a id="org06faf02"></a>

### DONE Abstracting formatting with functions

If you've been following along and doing all the exercises, you'll have seen the concept of functions once already. Functions are ways to *encapsulate*, to package up, code for re-use later. This can let us simplify our programs by only having to implement a concept *once* and then using it again and again.

For example, let's simplify our pet tables a bit!

Before I *show* you how to change the code, take a second to look it over and note what is repetitious about it. What jumps out to you?

It's the `cout ... setw(15) ... setw(15) ...` lines, right?

So what do all these lines have in common? They all have the same pattern of `"|"` and `setw(15)`. What's different between them? The actual values passed in: the pet's name, species, and age.

Let's write a new function that takes those three items as arguments and builds up the `cout << ...` line from that!

    #include <iostream>
    #include <iomanip>
    using namespace std;
    
    void petRow(string name, string species, int age){
      cout << "|" << setw(15) << name
           << "|" << setw(15) << species
           << "|" << setw(15) << age
           << "|" << endl;
    }
    
    int main(){
    
      cout << "|" << setw(15) << "Pet name"
           << "|" << setw(15) << "Pet species"
           << "|" << setw(15) << "Pet age"
           << "|" << endl;
    
      cout << setfill('-');
      cout << "|" << setw(15) << ""
           << "|" << setw(15) << ""
           << "|" << setw(15) << ""
           << "|" << endl;
      cout << setfill(' ');
    
      petRow("Liese", "Cat", 24);
      petRow("Dora", "Dachshund", 15);
    
      return 0;
    }

Okay, so this is an improvement! Now if we want to add new rows it's going to be nice and easy: a single call to `petRow` each.

Now, there's one annoying thing, right? We can't actually use this `petRow` function in order to also print the header of the table, because "Pet age" is a string but the actual ages are numbers!

C++ does, actually, give us a way to deal with this but it's mildly annoying: we can write a second function that has the same name but different parameters, like so.

    #include <iostream>
    #include <iomanip>
    using namespace std;
    
    void petRow(string header1, string header2, string header3){
      cout << "|" << setw(15) << header1
           << "|" << setw(15) << header2
           << "|" << setw(15) << header3
           << "|" << endl;
    }
    
    
    void petRow(string name, string species, int age){
      cout << "|" << setw(15) << name
           << "|" << setw(15) << species
           << "|" << setw(15) << age
           << "|" << endl;
    }
    
    int main(){
    
      petRow("Pet name", "Pet species", "Pet age");
    
      cout << setfill('-');
      petRow("","","");
      cout << setfill(' ');
    
      petRow("Liese", "Cat", 24);
      petRow("Dora", "Dachshund", 15);
    
      return 0;
    }

This is called "overloading" and is a trick that C++ lets you use when you need to write conceptually related functions that have slightly different arguments. 

Is this a satisfying solution? That's a personal question of style, but it *is* the method that C++ gives us for handling this problem.

The *good* thing is that this lets us make row after row after row with just simple calls to functions, which will be helpful very soon.


<a id="org50a2069"></a>

### DONE Formatting decimal points

Okay the other formatting topic that we need to deal with is how to deal with decimal points. Let's look at a simple program with doubles and you can immediately see the formatting problem:

    #include <iostream>
    using namespace std;
    
    int main(){
    
      double cost = 100;
    
      cout << "Calculating tax (33%) on your bill: $" << cost / 3 << endl;
    
      return 0;
    }

it prints out that the tax is $33.3333. Well that's not how we write cents! We actually only want to include two decimal points. We can do that with `cout << setprecision(2)` so our code becomes

    #include <iostream>
    #include <iomanip>
    using namespace std;
    
    int main(){
    
      double cost = 100;
    
      cout << setprecision(2);
    
      cout << "Calculating tax (33%) on your bill: $" << cost / 3 << endl;
    
      return 0;
    }

Wait, shoot, no that's still not right. Okay so the problem here is that `setprecision(2)` is going to keep "two digits" so if your number ends up being 0.3333 it will print as 0.33. If it's 33.3333 it will print as 33. That's not *really* what we want.

So we need to *also* do `cout << fixed;` in order to make sure it *always* prints exactly two things to the right of the decimal, all the time.

    #include <iostream>
    #include <iomanip>
    using namespace std;
    
    int main(){
    
      double cost = 100;
    
      cout << setprecision(2);
      cout << fixed;
    
      cout << "Calculating tax (33%) on your bill: $" << cost / 3 << endl;
    
      return 0;
    }


<a id="orge55a11c"></a>

### Exercises

1.  **Basic**: Create a receipt with 3 items showing item name, price, and quantity in aligned columns.
2.  **Intermediate**: Display a multiplication table (1-10) with proper alignment and borders.
3.  **Challenge**: Create a formatted invoice that includes items, quantities, unit prices, line totals, subtotal, tax (8.5%), and grand total - all properly aligned and formatted.


<a id="orgf3d412a"></a>

## DONE Your first while loop: a number guessing game

In this section we'll be covering how to do your first kind of loop in C++, the `while` loop. Conceptually, a `while` loop lets you do something over and over again until the question "should I keep going" returns false.

So, let's take the smallest silliest example we can to show the syntax: a program that keeps running and asking you to enter a number until you enter `0`.

    #include <iostream>
    using namespace std;
    
    int main(){
      // so if we're going to read in a number it needs
      // a place to be stored, which means that we need to create a variable.
      // we want to be in control of what is stored in the variable before our first run of the
      // loop, so we set it to -1 to start.
      int guessed = -1; 
    
      // how do we ask the question "keep going until the variable guessed is 0"? Well, you need
      // to mentally invert this and say "while the variable is NOT 0, run the loop"
      while(guessed != 0){ // like every other part of c++ where you have a chunk of code that runs, you put it inside {}
        // now we ask for our number
        cout << "What's the magic number?" << endl;
        cin >> guessed;
      }
    
      cout << "You're right! It was 0!" << endl;
      return 0;
    }


<a id="org322d4f2"></a>

## Exercises

1.  **Basic**: Write a countdown program that asks for a starting number and counts down to 0.
2.  **Intermediate**: Create a password checker that keeps asking until the user enters "quit" or the correct password (you choose it).
3.  **Challenge**: Implement a simple calculator that keeps performing operations until the user enters 0 for both numbers.


<a id="orga02a9ad"></a>

### DONE A randomized guessing game

So a guessing game where the number is the same every time isn't very interesting. What we really want is the ability to have the program choose a new number "randomly" and then ask you to guess. Of course, it'd be a pretty unfair game if it didn't at least give you a hint so this program will also tell you whether to guess higher or lower.

So first, here's a really simple example of how to generate random numbers in C++. Note that we also have to include a thing thing at the top of the file: `#include <cstdlib>`, because that's where the functions we need for random numbers live. 

    #include <iostream>
    #include <cstdlib>
    using namespace std;
    
    int main(){
      int num = rand();
    
      cout << "Our number is: " << num << endl;
      return 0;
    }

Now, if I run this I get

    Our number is: 1804289383

Okay, that's a really huge number and not really what we want but we'll deal with that in a second. It's definitely not a number I expected so that's good! Let me try running it again and&#x2014;

    Our number is: 1804289383

Oh, huh, that's weird. Let's try again and

    Our number is: 1804289383

So what's going on here? Yes it's a "random" number but it's the same "random" number every time. It might be illuminating to try the following:

    #include <iostream>
    #include <cstdlib>
    using namespace std;
    
    int main(){
      cout << "Let's try to print out a bunch of random numbers" << endl;
      cout << rand() << endl;
      cout << rand() << endl;
      cout << rand() << endl;
      cout << rand() << endl;
      cout << rand() << endl;
      return 0;
    }

And now I get an output of

    Let's try to print out a bunch of random numbers
    1804289383
    846930886
    1681692777
    1714636915
    1957747793

So each time we use `rand()` it is giving a different number but each time we run the program it's the same sequence of random numbers. This is where we need to explain seeds.

Seeds are what makes pseudo-random number generation so different than actual randomness. Computers can't *really* do true randomness, but they can fake it well by performing a series of calculations where the output looks random unless you know the very first input that starts the calculations. This very first input is the "seed" for the random number generator.

For a given seed, `rand` will always produce the same sequence of outputs. The trick, then, is that we need to choose a different seed every time we run the program. The traditional choice is to use another function called `time`. If you write `time(0)` what you'll get back is the number of seconds since midnight January 1st 1970. Since this is a number that will be different every time you run the program, it will be a good choice of different seeds for every time we run our code.

Let's test this out quick

    #include <iostream>
    #include <cstdlib>
    using namespace std;
    
    int main(){
      srand(time(0));
    
      cout << "Let's try to print out a bunch of random numbers" << endl;
      cout << rand() << endl;
      cout << rand() << endl;
      cout << rand() << endl;
      cout << rand() << endl;
      cout << rand() << endl;
      return 0;
    }

Now we're finally ready to write our number guessing game

    #include <iostream>
    #include <cstdlib>
    
    using namespace std;
    
    int main(){
      // we make a variable for our guess
      int guess = -1;
      // we set the seed for our secret number
      srand(time(0));
      // we set our secret number, we use the % function to scale rand() to 0-99 and then add 1 to make
      // the range 1-100
      int secret = rand() % 100 + 1;
    
      while(guess != secret){
        cout << "What do you think the number is?" << endl;
        cin >> guess;
        if(guess > secret){
          cout << "lower!" << endl;
        }
        else if(guess < secret){
          cout << "higher!" << endl;
        }
      }
    
      cout << "You guessed it!" << endl;
      return 0;
    }

Try to read this code through and understand the logic of what it's doing! The only thing we haven't explained to this point is the `%` operator, which is the "modulus" operator. Basically, `a % b` returns the remainder&#x2014;in the "you're learning division as a kid" sense of remainder&#x2014;of dividing `a` by `b`. Now, in terms of why we **care** about this operator it gives us a quick way to take a big range of numbers and map it to something smaller. For example, if we do `a % 20` our outputs, no matter what `a` is, will be between 0 and 19. Similarly if we say `a % 100` this will give us an output that's between 0 and 99.


<a id="org5f168b3"></a>

### DONE Adding a limited number of guesses

The last thing we need to do with our "number guessing game" is adding a limited number of guesses. To do that we're going to have to

-   add another number container
-   add a second check to the while loop to make sure that the loop keeps going as long as the number of guesses is greater than zero

Try doing this yourself before checking my solution below.

1.  My solution

        #include <iostream>
        #include <cstdlib>
        
        using namespace std;
        
        int main(){
          // we make a variable for our guess
          int guess = -1;
          int numGuesses = 3;
          // we set the seed for our secret number
          srand(time(0));
          // we set our secret number, we use the % function to scale rand() to 0-99 and then add 1 to make
          // the range 1-100
          int secret = rand() % 100 + 1;
        
          while(guess != secret && numGuesses > 0){
            numGuesses = numGuesses-1;
            cout << "What do you think the number is?" << endl;
            cin >> guess;
            if(guess > secret){
              cout << "lower!" << endl;
            }
            else if(guess < secret){
              cout << "higher!" << endl;
            }
          }
          if(guess == secret){
            cout << "You guessed it!" << endl;
          }
          else{
            cout << "Shoot, you ran out of guesses!" << endl;
          }
          return 0;
        }
    
    The only truly tricky bit is the fact that you need to make sure that you actually check to see if *why* the while-loop broke at the end in order to decide what message to give, otherwise you'll congratulate them for winning when they lost!


<a id="orgb7af1af"></a>

### DONE Averaging numbers and while-loops

Here's another idiom that will help us get practice with while-loops: how do you average an **arbitrary** number of numbers?

So this is a fun exercise because it means we need to keep track of how many things have been entered and then divide by that at the end. So I'm going to just assume we're adding up `double` s here because it makes everything fundamentally similar. How does one quit out of this loop? Well there's two ways we could do this. One is to have a special number that means "we're done". Something like "-1". That's the approach we're going to do first. After that, we'll see how to  

Our steps are

1.  Ask for a number, if that number is `-1` then stop asking and go to the end
2.  If it's **not** `-1` then you need to increment a variable that counts how many numbers you've read in and also add the number that was read in to the total
3.  When you get to the end of the program go ahead and divide the total by the number of things added together to get the average

We're going to do the simplest version like this:

    #include <iostream>
    using namespace std;
    
    int main(){
      int numItems = 0;
      double sum = 0;
      double numEntered = 0;
    
      cout << "Enter a number greater or equal to 0: ";
      cin >> numEntered;
      while(numEntered >= 0){
        numItems = numItems + 1;
        sum = sum + numEntered;
        cout << "Enter a number greater or equal to 0: ";
        cin >> numEntered;
      }
    
      cout << "The average of the numbers you entered is: " << sum / numItems << endl;
    }

Okay, so there's still a problem with our code: do you see it? If you don't I'll give you a hint: what happens if you don't enter **any** valid numbers at all?

That's right! You're dividing by zero! So instead we want to, at the end, replace our final `cout` with an if-statement that checks to make sure you didn't enter nothing at all:

    #include <iostream>
    using namespace std;
    
    int main(){
      int numItems = 0;
      double sum = 0;
      double numEntered = 0;
    
      cout << "Enter a number greater or equal to 0: ";
      cin >> numEntered;
      while(numEntered >= 0){
        numItems = numItems + 1;
        sum = sum + numEntered;
        cout << "Enter a number greater or equal to 0: ";
        cin >> numEntered;
      }
    
      if(numItems >0){
        cout << "The average of the numbers you entered is: " << sum / numItems << endl;
      }
      else{
        cout << "Did you change your mind?" << endl;
      }
    }

Now you can see that we've safeguarded against dividing by zero!


<a id="org00a46e7"></a>

### Exercises

1.  **Basic**: Simulate rolling two six-sided dice and display their individual values and sum.
2.  **Intermediate**: Create a "Rock, Paper, Scissors" game where the computer randomly chooses and you play one round.
3.  **Challenge**: Simulate flipping a coin 1000 times and report the percentage of heads vs tails. Bonus: Allow the user to specify the number of flips.


<a id="orgc5c65f5"></a>

### Exercises

1.  **Basic**: Calculate the average of exactly 5 test scores entered by the user.
2.  **Intermediate**: Find the minimum, maximum, and average of numbers entered (stop on -1).
3.  **Challenge**: Calculate a weighted average where the user enters value-weight pairs. Stop when weight is 0. Example: test1=85, weight=0.3; test2=90, weight=0.7; weighted average = 88.5.


<a id="org6f0055e"></a>

## TODO For-loops (and the shape of loops to come)<sup><a id="fnr.10.100" class="footref" href="#fn.10" role="doc-backlink">10</a></sup> <code>[1/2]</code>


<a id="orgc7aa713"></a>

### The syntax of for-loops

So far we've seen some examples of using `while` loops and now it's time to see the other kind of loop: the `for`-loop. Unlike `while`, which is "indefinite" iteration because it could theoretically go on forever, the `for`-loop is "definite" iteration because it should (unless there's a bug) only run for a pre-determined number of times.

If `while` can be thought of us "keep going until something changes", then `for` should be thought of as "do this X times".

The simplest possible for-statement we can write looks like

    #include <iostream>
    using namespace std;
    
    int main(){
      for(int i=0; i < 20; i = i +1){
        cout << "We're on the " << i  << "th loop" << endl;
      }
    
      return 0;
    }

Okay so let's break down the syntax of this a bit because it's more complicated than the syntax of a `while` loop:
you start with `for`, then the next part declares a whole number (`int`) valued counter that you can use inside the loop. Then you after the `;` you have the condition for when the loop continues: in this case the loop should continue as long as the variable `i` is less than 20. Then the last bit is what happens to the counter at the end of the next loop, which in this case says "increase `i` by 1". In fact, there's a special operator `i++` that just means `i =i+1` so in the future we'll use that.

Another thing you might have noticed is that we're starting to count *from* 0 and *going up to* 19. How many times does that mean the loop is executing in total? The answer is 20! Count it yourself if that doesn't feel intuitive.

Let's make another loop quick but this time I want you to write out, for yourself, what it should print out before you even compile and run it.

    #include <iostream>
    using namespace std;
    
    int main(){
      for(int i=0; i < 5; i++){
        cout << "The " << i << "th number squared is: " << i*i << endl;
      }
    
      return 0;
    }

> Exercise: Change this loop so that it instead runs from 1 through 5 rather than 0 through 4. You *could* do this by changing the `cout` statement but I want you to change the for-loop setup itself.

Now you don't *just* have to count up by one, even though that's probably the most common use for reasons we'll see in a couple of sections from now.

You can count down like this:

    #include <iostream>
    using namespace std;
    
    int main(){
      for(int i=4; i >= 0; i = i - 1){
        cout << "The " << i << "th number squared is: " << i*i << endl;
      }
    
      return 0;
    }

> Exercise: Try making a for-loop that prints out only even numbers. Again, you could do this by changing the `cout` statement but I want you to change the for-loop itself.


<a id="org078365d"></a>

### DONE Summing a bunch of numbers

Here's an example of another common idiom in programming: you use a for-loop to *accumulate* results of a calculation.

So here's how to add a bunch of numbers together:

    #include <iostream>
    using namespace std;
    
    int main(){
    
      int sum = 0;
    
      for(int i=0; i < 10; i++){
        sum = sum + i;
      }
    
      cout << "The sum is: " << sum << endl;
      return 0;
    }

Note that what we've done is create a new variable, `sum`, in order to hold the sum of all the numbers from 0 through 9 and each step of the for-loop we add `i` to `sum`. The formula for this is, in general, `n*(n+1)/2` and we can see that running this code prints 45, which is exactly what we'd expect from this formula. Change the numbers a few times in the limits of the for-loop and check that it stays fitting this formula.

> Exercise: Change this so that it sums the *squares* of 0 - 9.


<a id="orgb2c043b"></a>

### Exercises

1.  **Basic**: Print the first 20 Fibonacci numbers using a for-loop.
2.  **Intermediate**: Draw a triangle pattern with asterisks. Ask the user for height. Example for height=5:
    
        *
        **
        ***
        ****
        *****
3.  **Challenge**: Print all prime numbers between 1 and 100. Hint: For each number, check if it's divisible by any number from 2 to its square root.


<a id="org16c391b"></a>

## TODO (Advanced) Arrays: the reasons for `for`

Here's a more advanced topic that you'll be needing not just for this class but for the rest of your classes where you're doing C++: arrays.

We're covering arrays here because they are, in a sense, the reason for using `for` loops. If, in the previous sections, you felt like "okay so a `for` is like a while, but more restricted?" that impression isn't *wrong* per se. `while` is the more general concept that lets us do all sorts of things but `for` is best when you're dealing with finite collections of *stuff*.

What we haven't shown you yet is what "a finite collection of stuff" looks like!

Here's an example and we'll talk it through

    #include <iostream>
    using namespace std;
    
    int main(){
    
    
      int numberArray[10]; // this is how you declare an array
      // this declares the array with ten "boxes" for ints in it
      // the boxes are all labeled from 0 - 9
    
      // now we're going to use a for-loop in order to try
      // and put things in the boxes
    
      for(int i=0; i<10; i++){
        numberArray[i] = i*i;
      }
      // we're putting i^2 in the ith slot
    
      // to use an array slot once it's filled it's, again, just
      // like a variable with a special name
      for(int i=0; i<10; i++){
        cout << numberArray[i] << endl;
      }
    
      return 0;
    }

If you run this it will first fill the array with values, putting 0 in the `numberArray[0]` slot, 1 in the `numberArray[1]` slot, 4 in the `numberArray[2]` slot, &c.

This really is like having a really special variable that has a numerical index&#x2014;a number in the name. When you declare an array of size `n` C++ sets aside the amount of memory to hold `n` things of that type. You can make arrays of any type (including other arrays, as we'll see shortly).

So arrays get really useful when trying to represent things like rows in a table. Each array is going to represent a different column and an index is going to represent a row.

An example program would be something like this:

    #include <iostream>
    using namespace std;
    
    int main(){
      int numPets = 5;
    
      string petNames[numPets];
      string petSpecies[numPets];
    
      for(int i=0; i < numPets; i++){
        cout << "Enter the name of the pet: ";
        cin >> petNames[i];
        cout << "Enter the pet species: ";
        cin >> petSpecies[i];
      }
    
      for(int i=0; i < numPets; i++){
        cout << petNames[i] << " is a " << petSpecies[i] << endl;
      }
    
      return 0;
    }

So line by line what this program does is:

1.  make a variable to hold the number of pets in the pet-information table, so that we can change it in just one place
2.  two arrays for the names of pets and the species of pet
3.  a for-loop that asks for the information for each row of the table and fills it in
4.  a for loop that prints out each row

> Quick Check: Take this program and add another column for the age of the pet
> 
> That means you'll need to add a new array of ints to hold the age, ask for the age with cin, and also print that out appropriately.


<a id="org5be4a5c"></a>

### Exercises

1.  **Basic**: Create an array of 7 daily temperatures and find the warmest and coldest days.
2.  **Intermediate**: Reverse the contents of an array in-place (without creating a new array).
3.  **Challenge**: Implement a simple grade book that stores 5 students with 3 test scores each. Calculate and display each student's average.

1.  TODO What happens if you access outside the bounds of an array?

    There's one last topic we need to address: what happens if you access outside the bounds of the array? Now in many programming languages this will end in an **error**. For example, if you run the following Python program it will crash which is **a good thing**.
    
        arr = [1,2,3,4]
        
        print(arr[10])
    
    Now let's try a similar thing in C++:
    
        #include <iostream>
        using namespace std;
        
        int main(){
          int arr[5] = {0,1,2,3,4}; // this is how we initialize an array, for the record, but it's only practical for really small arrays
        
          cout << arr[10] << endl;
        
          return 0;
        }
    
    Well when I ran this I got `1663205712` printed out to the console. If you remember from way at the beginning of this tutorial when we went over what happens when you use an uninitialized variable, you might see a similarity! Except that, in some ways, this is worse.
    
    It *feels* like I initialized everything correctly, I told C++ how big the array should be, and yet C++ didn't stop me from going off the edge of the world!
    
    We'll cover, in greater depth, *why* C++ doesn't protect you from this error but for now the way you should think of it is that when you declare an array variable you're actively setting aside a contiguous set of cubbyholes in the storage wall, but that **you** need to keep track of which ones belong to which array. This is part of the reason why, in our previous example, we had a separate variable called `numPets` that kept track of how many pets were supposed to be in the database. We reproduce the example below.
    
        #include <iostream>
        using namespace std;
        
        int main(){
          int numPets = 5;
        
          string petNames[numPets];
          string petSpecies[numPets];
        
          for(int i=0; i < numPets; i++){
            cout << "Enter the name of the pet: ";
            cin >> petNames[i];
            cout << "Enter the pet species: ";
            cin >> petSpecies[i];
          }
        
          for(int i=0; i < numPets; i++){
            cout << petNames[i] << " is a " << petSpecies[i] << endl;
          }
        
          return 0;
        }
    
    Now you might look at this and think "couldn't you accidentally change numPets?" and, yes, you could! I could write something like this:
    
        #include <iostream>
        using namespace std;
        
        int main(){
          int numPets = 5;
        
          string petNames[numPets];
          string petSpecies[numPets];
        
          numPets = 10;
        
          for(int i=0; i < numPets; i++){
            cout << "Enter the name of the pet: ";
            cin >> petNames[i];
            cout << "Enter the pet species: ";
            cin >> petSpecies[i];
          }
        
          for(int i=0; i < numPets; i++){
            cout << petNames[i] << " is a " << petSpecies[i] << endl;
          }
        
          return 0;
        }
    
    This is why we have *constants* in C++, which are like variables but once they have a value that value isn't allowed to change! It's just like any other variable but you put `const` in front of the variable declaration:
    
        #include <iostream>
        using namespace std;
        
        int main(){
          const int numPets = 5;
        
          string petNames[numPets];
          string petSpecies[numPets];
        
          for(int i=0; i < numPets; i++){
            cout << "Enter the name of the pet: ";
            cin >> petNames[i];
            cout << "Enter the pet species: ";
            cin >> petSpecies[i];
          }
        
          for(int i=0; i < numPets; i++){
            cout << petNames[i] << " is a " << petSpecies[i] << endl;
          }
        
          return 0;
        }
    
    Go ahead and try to mess it up by changing `numPets` later in the program and see what happens when you try to compile and run it?

2.  TODO Faking a variable-length array


<a id="orgbd7abb6"></a>

## TODO Menus with while-loops

Here's another idiom that we're going to use constantly: text-driven menus.

The basic principle is pretty simple:

-   create a variable to hold a number (an `int`, most likely) or a variable to hold text (a `char` or `string`)
-   print out a prompt that explains the menu
-   read in the option chosen into the variable you made
-   use if-statements to decide what to do next


<a id="org64231c5"></a>

## TODO Data validation, the world's most annoying idiom <code>[1/2]</code>

So we've been playing fast and loose for awhile about how to read in data from the user. But, in reality, you should be checking what the user has entered and asking them to re-enter their response if it's not something you expect. This is actually a really annoying topic because there's no easy way to do this in base C++, which is why I'm going to introduce this topic early. 

Here's two scenarios:

-   The user enters an option that is the right kind of data but that you didn't expect and you need to ask again
-   The user enters an option that is the **wrong** kind of data, which means that `cin` is going to have a hiccup


<a id="org25c740f"></a>

### DONE Right kind of data, but wrong option

So what we mean here is something like you asking for "yes" or "no" from the user and they, in their infinite snarkiness, enter "chicken". You will not let this chicken stand and, instead, will stop and make them answer again until they give a response that's useful. This is the easier scenario and we can solve the problem with a simple while-loop like this

    #include <iostream>
    using namespace std;
    
    int main(){
      // we need to make a space for storing the input
      string opt = "";
    
      //we have our "asking" loop
      //we're asking the questions while it is NOT "yes" and it is NOT "no" and it is NOT "y" and it is NOT "n"
      //or, in a way that's maybe closer to how we say it in English it's
      // NOT (yes or no or y or n)
      while(! (opt == "yes" || opt == "no" || opt == "y" || opt == "n")){
        cout << "Enter a valid option (yes/no/y/n): ";
        cin >> opt;
      }
    
      cout << "You chose: " << opt << endl;
    }


<a id="org1fdf612"></a>

### TODO The wrong kind of data (cin.fail() &c.) <code>[0/2]</code>

Okay so from here we have some interesting issues that come down to exactly **what** `cin` and `>>` are doing together.

1.  TODO What ever happened to baby cin?

    First off, consider the following program.
    
        #include <iostream>
        using namespace std;
        
        int main(){
          int num1;
          int num2;
        
          cout << "Enter two numbers" << endl;
          cin >> num1;
          cin >> num2;
        
          cout << "The sum of these numbers was: " << num1 + num2 << endl;
          return 0;
        }
    
    Now if I run this program and enter input like this
    
        1[hit the enter key]
        2[hit the enter key]
    
    You'll see "The sum of these numbers was: 3" printed out.
    
    If I enter
    
        1 2[hit the enter key]
    
    I'll **also** see "The sum of these numbers was: 3" printed out. Why is that? Okay, so it has to do with the way `>>` works. Think of `cin` as being like a kind of pipeline. We fill it with stuff by typing a bunch of things and then hitting the enter key. Now `>>` doesn't just empty out everything in the pipe at once. It goes until either there's an error or until it hits whitespace (like, well, a space). So in the second example you've put "1 2" in the pipeline and the first call to `>>` will grab the `1` from the pipeline then **stop**. Then the second call to `>>` will grab the `2` from the pipeline then **stop**.
    
    Now with that behavior in mind, we can start talking about what happens if you enter something that is the wrong type.
    
    Let's run the program above one more time but now with the following input
    
        1 dog[hit the enter key]
    
    What you'll get printed out is "The sum of these numbers was: 1". Why? Because it failed to read a number into `num2` and, so, just gave it a value of 0 rather than stop the program and fail.
    
    We're going to introduce a new function called `cin.fail()` that lets us ask the question "did the last time we tried to read from `cin` go wrong?"
    
    So now in the following program we'll ask for two numbers and, then, if there's a failure we'll print out "hey, buddy, that's not cool" rather than print the sum of the numbers
    
        #include <iostream>
        using namespace std;
        
        int main(){
        
          int num1;
          int num2;
        
          cout << "Enter two numbers" << endl;
          cin >> num1;
          cin >> num2;
        
          if(cin.fail()){
            cout << "Hey, buddy, that's not cool" << endl;
          }
          else{
            cout << "The sum of these numbers was: " << num1 + num2 << endl;
          }
        
          return 0;
        }
    
    Run this and test it out and you'll find that if you write something that can't be read as a number then it'll print out "Hey, buddy, that's not cool" rather than print out a badly formed sum. 
    
    Okay so we can *avoid* running our program if something has gone wrong but we also want to potentially ask for new input over and over until correct data is entered.

2.  TODO Recovering from an error

    So this next part is another application of our old friend the *while* loop.
    
    We'll start with the obvious thing to do from the pieces we've seen so far (and spoiler this code isn't going to work)
    
        #include <iostream>
        using namespace std;
        
        int main(){
          int num1;
        
          cout << "Enter a number" << endl;
          cin >> num1;
        
          while(cin.fail()){
            cout << "No, buddy, enter a *number*: " << endl;
            cin >> num1;
          }
        
          return 0;
        }
    
    So *why* doesn't this work? You'll see that it leads to an infinite loop of printing "No, buddy, enter a **number**" after just one bad input. So the behavior of `cin` is that once it sees a single error it gets into a state of not accepting any more input until it gets fixed. You can do that by calling a function `cin.clear()`. We're not done yet, though, because if you remember the "pipeline" analogy for how `cin` works we haven't actually gotten rid of what's in the pipeline that was causing the error. In order to throw it away we need to write `cin.ignore(256,'\n')`. So putting this all together we've got
    
        #include <iostream>
        using namespace std;
        
        int main(){
          int num1;
        
          cout << "Enter a number" << endl;
          cin >> num1;
        
          while(cin.fail()){
            cout << "No, buddy, enter a *number*: " << endl;
            cin.clear();
            cin.ignore(256,'\n');
            cin >> num1;
          }
        
          return 0;
        }


<a id="org25cdd62"></a>

### Exercises

1.  **Basic**: Create a menu system that only accepts options 1-5, rejecting anything else.
2.  **Intermediate**: Validate email format - must contain exactly one @ and at least one . after the @.
3.  **Challenge**: Create a date validator that checks valid month (1-12) and appropriate days for each month (including leap years for February).


<a id="org5b00bfd"></a>

# TODO More advanced programs <code>[1/3]</code>


<a id="org794e692"></a>

## TODO Functions on strings


<a id="orge87e445"></a>

### DONE Simple operations on strings

So there's a few things you can do with strings. The first, is the ability to glue strings together, also called "concatentation". So far we've been implicitly gluing strings together using the syntax of `cout` and `<<`, but you can **actually** stick two strings to each other with `+`, just like adding two numbers.

Like this program:

    #include <iostream>
    using namespace std;
    
    int main(){
    
      string str1;
      string str2;
    
      cout << "Enter some things: ";
      cin >> str1;
      cin >> str2;
    
      cout << "Okay gluing those together you said: " << str1 + str2 << endl;
    
      return 0;
    }

This is an example of something kinda neat in C++, called "operator overloading". Basically, you can reuse things like  `<<` and `+` in all sorts of different contexts at different **types**. That's the key part. The different uses have to be for different types or else there will be confusion. `+` can mean something for two ints, for an int and a string (check that one out yourself, by the way), for two strings, for two doubles, &c. But it can't mean two different things if you're just writing `1 + 2` where 1 and 2 are both ints.

Okay, also we should talk about how to turn data into strings because this is going to be useful! Basically, there's just a function in the `<string>` library that you can use called `to_string` that will convert any other data to being a string. This works with basically everything, like in this program:

    #include <iostream>
    #include <string>
    using namespace std;
    
    int main(){
      int num1 = 1;
      bool b = true;
      char c = 'd';
      double d = 1.23456;
    
      cout << to_string(num1) + to_string(b) + to_string(c) + to_string(d) << endl;
      return 0;
    }


<a id="orgdd23562"></a>

### Exercises

1.  **Basic**: Count the number of vowels (a, e, i, o, u) in a string entered by the user.
2.  **Intermediate**: Check if a string is a palindrome (reads the same forwards and backwards).
3.  **Challenge**: Create a word censoring program that replaces specified "bad words" with asterisks of the same length.


<a id="orgcb13c36"></a>

### TODO `find` and `substr`

Okay, so now let's talk about some convenience functions that help us take apart and manipulate strings. The first is the ability to *find* an occurence of one string inside another:

    #include <iostream>
    #include <string>
    using namespace std;
    
    int main(){
    
      string str1 = "this is a rock";
      string str2 = "rock";
    
      // let's see what find does
      cout << str1.find(str2) << endl;
      return 0;
    }

It should have returned the number `10` when you ran it. Can you guess what that number represents?

    t h i s _ i s _ a _  r  o  c  k
    0 1 2 3 4 5 6 7 8 9 10 11 12 13

It's the position in the string where the *substring* rock starts! Here, let's test this theory by also checking for `"is"` . What should `find` return when we run `str1.find("is")`?

    #include <iostream>
    #include <string>
    using namespace std;
    
    int main(){
    
      string str1 = "this is a rock";
    
      // let's see what find does
      cout << str1.find("is") << endl;
      return 0;
    }

Hopefully you also saw `2`. Why `2`? Because it's not looking for *words*-per-se, it's looking for the literal characters "is", which first show up as the third and fourth letters in "this".


<a id="org4d9ee34"></a>

### TODO Iterating over strings with for-loops

Now remember how I showed you a bit about how arrays work and the fact that for-loops were made to work with them? Okay, so part of why I needed to show you that is while **technically** you're not using arrays in this class it's useful to understand the idea behind them because you can treat strings "like" arrays for operating on them.

The general idiom is that you can get the length of the string like this `s.length()` for a string `s`, then you can put that as the bounds of the for-loop and you can use array syntax (e.g. the square brackets) in order access the characters inside the string one by one.

Okay so here's a wholeLower function that turns an entire string to lower case using the per-character function `tolower()`:

    #include <iostream>
    #include <string>
    using namespace std;
    
    string wholeLower(string s){
    
      for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
      }
    
      return s;
    }
    
    int main(){
      string str = "YELLING";
    
      cout << wholeLower(str) << endl;
    }


<a id="orgaf4c1f3"></a>

### TODO Example: Sarcasm Case

Alright, here's a nice silly example for how we use for-loops with strings:

    #include <iostream>
    #include <string>
    #include <cstdlib>
    using namespace std;
    
    string sarcasmCase(string s){
      string s2 = s;
      for(int i = 0; i < s2.length(); i++){
        if(rand() % 2 == 0){
          s2[i] = tolower(s[i]);
        }
        else{
          s2[i] = toupper(s[i]);
        }
      }
      return s2;
    }
    
    int main(){
      srand(time(0));
      string str = "you can't do that!";
    
      cout << sarcasmCase(str) << endl;
    }


<a id="orgd1174e9"></a>

### Exercises

1.  **Basic**: Convert a string to alternating caps (LiKe ThIs) for every character.
2.  **Intermediate**: Count the frequency of each word in a sentence (case-insensitive).
3.  **Challenge**: Implement a Caesar cipher that shifts letters by a user-specified amount. Handle wrapping (z+1 = a) and preserve case.


<a id="org6542e66"></a>

## DONE Switches vs. ifs

Switch statements are actually pretty simple and can, essentially, be thought of as "compiling" down to a more verbose if-elseif-else statement, except that rather than being able to ask **any** question you're just asking the question is *this* equal to *this*.

Okay, concrete example time:

    #include <iostream>
    #include <string>
    using namespace std;
    
    int main(){
    
      char letter;
      cout << "Enter a letter and I'll tell you the name of a dog that starts with that: ";
      cin >> letter;
    
      switch(tolower(letter)){
        case 'b':
          cout << "Bertie" << endl;
          break;
        case 'c':
          cout << "Charles" << endl;
          break;
        case 'd':
          cout << "Dora" << endl;
          break;
        case 'e':
          cout << "Edie" << endl;
          break;
        case 'f':
          cout << "Francine" << endl;
          break;
        case 't':
          cout << "Taffy" << endl;
          break;
        case 'p':
          cout << "Pisces" << endl;
          break;
        default:
          cout << "Sorry, I don't know any dog names that start with that" << endl;
      }
    
      return 0;
    }

So what this code is doing is equivalent to the following program

    #include <iostream>
    #include <string>
    using namespace std;
    
    int main(){
      char letter;
      cout << "Enter a letter and I'll tell you the name of a dog that starts with that: ";
      cin >> letter;
    
      if(tolower(letter) == 'b'){
        cout << "Bertie" << endl;
      }
      else if(tolower(letter) == 'c'){
        cout << "Charles" << endl;
      }
      else if(tolower(letter) == 'd'){
        cout << "Dora" << endl;
      }
      else if(tolower(letter) == 'e'){
        cout << "Edie" << endl;
      }
      else if(tolower(letter) == 'f'){
        cout << "Francine" << endl;
      }
      else if(tolower(letter) == 't'){
        cout << "Taffy" << endl;
      }
      else if(tolower(letter) == 'p'){
        cout << "Pisces" << endl;
      }
      else {
        cout << "Sorry, I don't know any dog names that start with that" << endl;
      }
    
      return 0;
    }

So you can see some of the differences between if and switch. First, note that you only have to provide the expression you're comparing **once** to the switch statement. Meanwhile the direct equivalent would involve having to run `tolower` on the letter every time.

Now that just seems inconvenient here but there are times that it's actually a big deal! Let's consider this example with random numbers

    #include <iostream>
    #include <cstdlib>
    using namespace std;
    
    int main(){
      // here we set the starting seed for the random number generator
      srand(time(0));
    
      // here we're playing a game where on a 1 you super win
      // on a 2 or 6 you lose
      // on a 3,4,5 you win a little bit
      // we're going to use a neat property of switch which is that if you don't use break you can have multiple things
      // all fall into the same case
      switch(rand() % 6 + 1){
    
      case 1 :
        cout << "You super duper win" << endl;
        break;
      case 3:
      case 4:
      case 5:
        cout << "You win a little!" << endl;
        break;
      default:
        cout << "You lose, you so lose" << endl;
      }
    
      return 0;
    }

If you were to naively convert this to if-statements you might do something like this!

    #include <iostream>
    #include <cstdlib>
    using namespace std;
    
    // this is a translation of the dice roll program from switches to ifs but
    
    int main(){
      srand(time(0));
    
      if((rand() % 6 + 1) == 1){
        // ...
      }
      else if(rand() % 6 + 1 == 3 || rand() % 6 + 1 == 4 || rand() % 6 + 1 == 5){
        // ...
      }
      else {
        // ...
      }
      return 0;
    }

Given what we've talked about, can you see the problem here? See the problem is that you're going to get a **different** random number every time you call `rand()`. So that middle condition isn't testing whether the number you rolled is 3, 4, or 5 it's doing a separate dice roll for each condition. That's very much not what you want when dealing with random number generation!

No, instead, you need to do something more like

    #include <iostream>
    #include <cstdlib>
    using namespace std;
    
    // this is a translation of the dice roll program from switches to ifs, problems fixed
    
    int main(){
      srand(time(0));
      int rolledDie = rand() % 6 + 1;
      if(rolledDie == 1){
        // ...
      }
      else if(rolledDie == 3 || rolledDie == 4 || rolledDie == 5){
        // ...
      }
      else {
        // ...
      }
      return 0;
    }


<a id="orgf10501c"></a>

### Exercises

1.  **Basic**: Create a days-of-week printer using switch (1=Monday, 2=Tuesday, etc.).
2.  **Intermediate**: Build a simple calculator using switch for operations (+, -, \*, /). Handle division by zero.
3.  **Challenge**: Create a text-based restaurant ordering system with switch for menu categories (appetizers, mains, desserts) and nested switches for items.


<a id="org97df549"></a>

## TODO Writing your own functions


<a id="org45e3210"></a>

### TODO Functions, reintroduced

So we've seen a couple of ways to define our own functions so far in this course, but we haven't **formally** talked about it.

Our very first function we've defined was in our "hello world" program! `main` is a function and we're defining it. It's kind of a weird function because it has to be the same every time:

    int main(){
      //...
    }

Again, this says our function is going to return a type `int`, so at some point in our function we're going to need a `return` followed by something of type `int`. Now, in the case of `main` that should almost always just be `return 0` but let's step back and recognize that it could, in theory, but anything as long as it has the right type.

The `()` after main are because the `main` function doesn't actually take any arguments! Other functions can and will!

Like, for example, consider our function for the sarcasm case up above. This function has the declaration

    string sarcasmCase(string s){

And this tells us that we're defining a function called `sarcasmCase`, it takes a `string` as an argument that we will bind to the variable `s` for the duration of the function body, and we can see that it returns a string. That means we need to make sure that we have a `return __` where the `__` needs to be something of type string.

We haven't really seen examples of it so far but you can have a bunch of function arguments. Here's a variant of our functions for building tables. 

    #include <iostream>
    #include <iomanip>
    using namespace std;
    
    void divider(int width){
      cout << setfill('-');
      cout << "|" << setw(width) << "";
      cout << "|" << endl;
    }
    
    void makeRow(int fieldWidth, string studentname, string classname, double grade){
      //we're assuming that all fields are the same width and are right aligned
      cout << setfill(' ');
      cout << right;
      cout << fixed << setprecision(2);
    
      cout << "|" << setw(fieldWidth) << studentname;
      cout << "|" << setw(fieldWidth) << classname;
      cout << "|" << setw(fieldWidth) << grade;
      cout << "|" << endl;
    }
    
    void makeTitleRow(int fieldWidth, string col1, string col2, string col3){
      cout << setfill(' ');
      cout << right;
      cout << "|" << setw(fieldWidth) << col1;
      cout << "|" << setw(fieldWidth) << col2;
      cout << "|" << setw(fieldWidth) << col3;
      cout << "|" << endl;
    }
    
    int main(){
      divider(47); // why is this 47? because 15*3 + one for each of the |
      makeTitleRow(15, "student", "class", "gpa");
      divider(47);
      makeRow(15, "Chicken B.", "CS 720", 2.3);
      makeRow(15, "Brad Default", "CS 250", 3.1);
    
      return 0;
    }


<a id="orgf3c6302"></a>

### Exercises

1.  **Basic**: Write a function that returns the larger of two numbers.
2.  **Intermediate**: Create functions for calculating area of different shapes (circle, rectangle, triangle). Each should take appropriate parameters.
3.  **Challenge**: Implement a function that checks if a number is prime. Then use it to find all twin primes (primes that differ by 2) up to 100.


<a id="org40d27db"></a>

## Scope and Lifetime: Where Do Variables Live?

Now that you're writing functions, you've probably noticed something: variables you declare inside a function don't seem to exist outside of it. And variables you declare in `main` aren't accessible inside your functions. What's going on?

This is all about **scope** and \*lifetime\*—two related but distinct concepts that control where variables can be used and how long they exist.

Think of scope as "where can I see this variable?" and lifetime as "when does this variable exist?" Understanding these concepts will help you avoid confusing bugs and write cleaner, more organized code.


<a id="org11ddd53"></a>

### Local Variables: The Building Blocks

Whenever you declare a variable inside a block of code (anything between `{ }`), that variable is **local** to that block. It only exists within those curly braces, and it disappears when the block ends.

Let's start with a simple example:

    #include <iostream>
    using namespace std;
    
    int main(){
      int x = 10;
    
      if(x > 5){
        int y = 20;
        cout << "Inside if: x = " << x << ", y = " << y << endl;
      }
    
      cout << "Outside if: x = " << x << endl;
      // cout << y << endl;  // ERROR! y doesn't exist here
    
      return 0;
    }

In this code, `x` is declared in `main`, so it's accessible anywhere inside `main`. But `y` is declared inside the `if` block, so it only exists there. Once we exit the `if` block, `y` is gone—it's been destroyed and its memory has been freed.

If you tried to uncomment that last `cout` statement, you'd get a compiler error saying `y` was not declared in this scope.

1.  Variables in Loops

    This same principle applies to loops. Variables declared inside a loop only exist for that iteration of the loop:
    
        #include <iostream>
        using namespace std;
        
        int main(){
          for(int i = 0; i < 3; i++){
            int loopVar = i * 10;
            cout << "Iteration " << i << ": loopVar = " << loopVar << endl;
          }
        
          // cout << loopVar << endl;  // ERROR! loopVar doesn't exist here
          // cout << i << endl;         // ERROR! i doesn't exist here either
        
          return 0;
        }
    
    Both `i` (the loop counter) and `loopVar` only exist inside the loop. Once the loop finishes, they're gone.
    
    Actually, there's something even more interesting happening here: `loopVar` is created and destroyed on **every iteration** of the loop. Each time through the loop, a fresh `loopVar` is created, used, and then destroyed. It's not the same variable being reused—it's a new one each time!


<a id="org2b34d8f"></a>

### Variables in Functions

When you declare a variable inside a function, it's local to that function. Other functions can't see it, and it disappears when the function returns.

    #include <iostream>
    using namespace std;
    
    void calculateSomething(){
      int result = 42;
      cout << "Inside function: result = " << result << endl;
    }
    
    int main(){
      calculateSomething();
    
      // cout << result << endl;  // ERROR! result doesn't exist in main
    
      return 0;
    }

The variable `result` only exists inside `calculateSomething`. It's created when the function is called, and it's destroyed when the function returns. `main` has no idea that `result` even exists.

1.  Function Parameters Are Local Too

    Here's something that might surprise you: the parameters to a function are treated like local variables declared at the start of the function.
    
        #include <iostream>
        using namespace std;
        
        void greet(string name){
          // 'name' is a local variable that was initialized with the argument
          cout << "Hello, " << name << "!" << endl;
          name = "stranger";  // We can modify it, but...
          cout << "Modified: " << name << endl;
        }
        
        int main(){
          string myName = "Alice";
          greet(myName);
        
          cout << "Back in main: " << myName << endl;  // Still "Alice"!
        
          return 0;
        }
    
    When we call `greet(myName)`, what happens is that a **new** local variable called `name` is created inside `greet`, and it's initialized with a **copy** of the value from `myName`. So `name` and `myName` are completely separate variables! That's why modifying `name` inside the function doesn't affect `myName` in `main`.
    
    This is called \*pass by value\*—we're passing the value, not the variable itself. We'll see later how to change this behavior with pass-by-reference, but first you need to understand that by default, function parameters are just local variables with initial values.


<a id="orgaae3c3b"></a>

### Variable Shadowing: When Names Collide

What happens if you declare a variable with the same name in different scopes? This is called **shadowing**, and it can be confusing:

    #include <iostream>
    using namespace std;
    
    int main(){
      int x = 10;
      cout << "Outer x: " << x << endl;
    
      {
        int x = 20;  // This is a DIFFERENT variable named x
        cout << "Inner x: " << x << endl;
      }
    
      cout << "Outer x again: " << x << endl;  // Back to 10
    
      return 0;
    }

Output:

    Outer x: 10
    Inner x: 20
    Outer x again: 10

The inner `x` "shadows" (hides) the outer `x` while the inner block is executing. Once we exit that block, the inner `x` is destroyed, and the outer `x` is visible again.

This works, but it's generally considered bad practice because it's confusing. Try to give your variables distinct names to avoid shadowing.


<a id="org6be6e3d"></a>

### Global Variables: Use Sparingly!

So far we've only looked at local variables. But you can also declare variables **outside** of any function, at the top level of your program. These are called **global variables**:

    #include <iostream>
    using namespace std;
    
    int globalCounter = 0;  // Global variable
    
    void incrementCounter(){
      globalCounter++;
    }
    
    void showCounter(){
      cout << "Counter: " << globalCounter << endl;
    }
    
    int main(){
      showCounter();        // Counter: 0
      incrementCounter();
      incrementCounter();
      showCounter();        // Counter: 2
    
      return 0;
    }

Global variables are accessible from anywhere in your program—any function can read and modify them. That might sound convenient, but it's actually a problem!

1.  Why Global Variables Are Dangerous

    1.  **Hard to track changes**: When any function can modify a global variable, it's hard to figure out where a bug is coming from. Which function changed the value? When?
    
    2.  **Hidden dependencies**: Functions that use global variables have hidden dependencies that aren't visible in their parameter lists. This makes code harder to understand and reuse.
    
    3.  **Naming conflicts**: As your program grows, you might accidentally use the same name for different things.
    
    4.  **Testing nightmare**: Functions that depend on global variables are hard to test because you have to set up the global state correctly before each test.

2.  When Global Variables Are Okay

    That said, there are a few legitimate uses:
    
    -   **Global constants**: If you use `const`, the variable can't be modified, so it's safe:
        
            const double PI = 3.14159265359;  // This is fine
            const int MAX_STUDENTS = 100;     // This is fine too
    
    -   **Configuration that truly needs to be global**: Sometimes you have settings that really do need to be accessible everywhere (but even then, there are often better solutions you'll learn later).
    
    As a general rule: **prefer local variables and function parameters over global variables**. If you need to share data between functions, pass it as parameters or return it as a result.


<a id="orgadf9f24"></a>

### Lifetime vs. Scope: What's the Difference?

We've been using these terms somewhat interchangeably, but they're actually different:

-   **Scope**: Where in your code you can use a variable name to access the variable
-   **Lifetime**: When the variable actually exists in memory

For local variables, scope and lifetime are usually the same: the variable is created when you enter the block, and it's destroyed when you leave the block.

    {
      int x = 10;  // x is created here
      // x's scope and lifetime both start here
    
      // ... do stuff with x ...
    
    }  // x is destroyed here (lifetime ends, scope ends)

But for global variables, they're different:

-   **Lifetime**: The entire execution of the program (created at startup, destroyed at shutdown)
-   **Scope**: Anywhere in the file after the declaration (or in other files if you use certain keywords)

1.  A Quick Note on Static Variables (Preview)

    There's also a keyword `static` that lets you create variables with special properties, but we won't go into that in CS161A. Just know that it exists and lets you create variables with local scope but global lifetime. You'll learn more about this in CS161B when you need it.


<a id="org5ff396f"></a>

### Practical Examples: Seeing Scope in Action

Let's look at a more realistic example that combines everything we've learned:

    #include <iostream>
    using namespace std;
    
    // Global constant (good use of global)
    const double TAX_RATE = 0.08;
    
    double calculateTotal(double subtotal){
      double tax = subtotal * TAX_RATE;  // local to this function
      double total = subtotal + tax;     // local to this function
      return total;
    }
    
    void printReceipt(double subtotal){
      double total = calculateTotal(subtotal);  // different 'total' than above!
    
      cout << "Subtotal: $" << subtotal << endl;
      cout << "Tax:      $" << (total - subtotal) << endl;
      cout << "Total:    $" << total << endl;
    }
    
    int main(){
      double price = 19.99;  // local to main
    
      printReceipt(price);
    
      // tax, subtotal, and total from the functions don't exist here!
    
      return 0;
    }

Notice how:

-   `TAX_RATE` is a global constant (accessible everywhere)
-   Each function has its own local variables
-   `total` appears in both `calculateTotal` and `printReceipt`, but they're different variables
-   Variables from one function don't leak into other functions


<a id="orged1e4f6"></a>

### Common Mistakes and Debugging Tips

1.  Mistake 1: Assuming variables persist across function calls

        void badCounter(){
          int count = 0;  // Created fresh each time!
          count++;
          cout << count << endl;  // Always prints 1
        }
    
    Each time you call `badCounter`, `count` is created fresh and initialized to 0. It doesn't remember its value from previous calls.

2.  Mistake 2: Trying to use a variable outside its scope

        if(temperature > 80){
          string message = "It's hot!";
        }
        
        cout << message << endl;  // ERROR! message doesn't exist here
    
    Solution: Declare `message` before the `if` statement:
    
        string message;
        
        if(temperature > 80){
          message = "It's hot!";
        }
        else{
          message = "It's nice!";
        }
        
        cout << message << endl;  // Now it works!

3.  Mistake 3: Accidental shadowing

        int score = 100;
        
        for(int i = 0; i < 5; i++){
          int score = i * 10;  // Oops! Shadows the outer score
          cout << score << endl;  // Prints 0, 10, 20, 30, 40
        }
        
        cout << score << endl;  // Still 100 (never modified)
    
    This compiles fine but probably isn't what you meant! Use different variable names to avoid confusion.


<a id="org6b42418"></a>

### Exercises

1.  **Basic**: What will this program print? Try to figure it out without running it, then check your answer:
    
        #include <iostream>
        using namespace std;
        
        int main(){
          int a = 5;
        
          {
            int b = 10;
            cout << a + b << endl;
          }
        
          {
            int b = 20;
            cout << a + b << endl;
          }
        
          return 0;
        }

2.  **Basic**: Fix this code so it compiles:
    
        #include <iostream>
        using namespace std;
        
        int main(){
          for(int i = 0; i < 5; i++){
            int sum = i + i;
          }
        
          cout << "Sum: " << sum << endl;
        
          return 0;
        }

3.  **Intermediate**: Write a function `calculateAverage` that takes three test scores as parameters and returns the average. Make sure all variables are appropriately scoped and don't use any global variables (except maybe a constant).

4.  **Intermediate**: Explain in your own words: Why does this function always return the same value no matter how many times you call it?
    
        int getNumber(){
          int num = 7;
          num = num + 1;
          return num;
        }

5.  **Challenge**: Write a program that demonstrates the difference between:
    
    -   A variable declared in `main` and passed to a function
    -   A variable declared inside a function
    -   A global variable accessed by multiple functions
    
    Your program should clearly show which variables are accessible where, and what happens when functions try to modify them.

6.  **Discussion**: Why is it generally better to pass data to functions via parameters rather than using global variables? Can you think of a situation where a global variable might be the right choice?


<a id="orge43535a"></a>

### Summary: Key Takeaways

-   **Local variables** exist only within the block `{ }` where they're declared
-   **Scope** is where you can access a variable; **lifetime** is when it exists in memory
-   Function parameters are local variables initialized with argument values
-   **Shadowing** happens when an inner scope declares a variable with the same name as an outer scope (avoid this!)
-   **Global variables** are accessible everywhere but should be used sparingly (constants are okay)
-   Variables are destroyed when their scope ends, freeing up memory

Understanding scope and lifetime will save you from many confusing bugs and help you write cleaner, more maintainable code. Next, we'll see how to bend these rules slightly with pass-by-reference!


<a id="org947205d"></a>

### TODO Passing by reference

Now here's a weird little feature of C++. So let's look at how arguments to functions differ from normal variables with a simple example:

    #include <iostream>
    using namespace std;
    
    int sillyFun(int num){
      num = 10;
      return num;
    }
    
    int main(){
    
      int ourNum = 30;
    
      cout << "Now we're going to call our function and it'll return " << sillyFun(ourNum) << endl;
      cout << "But now what value does our variable have?: " << ourNum << endl;
    
      return 0;
    }

Now if you run this code you'll see that the function returns `10` but that the value of `ourNum` at the end is `30`. How is this possible? Afterall, we set `num = 10` inside the function and return `num` and that's 10! Why doesn't the assignment stick? Well, because the variable `num` inside the function `sillyFun` is not *actually* the same as `ourNum` it's just a variable that lives inside a function and it is initialized with the same *value* as the ourNum when it's passed in.

Okay, why am I telling you this? Because there is a different way to write functions in C++ where you don't take in the value of the argument, you are giving the function the variable itself!

For example, consider this

    #include <iostream>
    using namespace std;
    
    int sillyFun(int &num){
      num = 10;
      return num;
    }
    
    int main(){
      int ourNum = 30;
    
      cout << "Now we're going to call our function and it'll return " << sillyFun(ourNum) << endl;
      cout << "But now what value does our variable have?: " << ourNum << endl;
    
      return 0;  
    }

The only difference between these programs is the little `&` symbol in front of the name of the variable. This signifies that it's an argument that is "passed by reference", or in other words it's literally passing in the variable as a thing that can be manipulated, assigned, &c. instead of just handing the function the value inside the variable.

Why use this? That's probably the obvious question to ask. So there are a few reasons. The first is that it lets you do something that C++ can't normally do: return multiple arguments!

What does that mean? So if you've ever used Python at all you might be familiar with the ability to do something like this

    def askAndSum():
        num = int(input("Enter a number: "))
        total = 0
        entries = 0
        while num >= 0:
    	entries = entries + 1
    	total = total + num
    	num = int(input("Enter a number: "))
        return (total, entries)
    
    print(askAndSum())

This program mimics things we've seen in this class: you run a loop that keeps asking for numbers until it gets a negative entry and then it returns the sum of all the numbers **and** how many numbers got added together!

You **cannot** do this in C++. Instead, you have to write this program with a pass-by-reference argument like this:

    #include <iostream>
    using namespace std;
    
    int askAndSum(int &entries){
      int sum = 0;
      int num = 0;
    
      cout << "Enter a number: ";
      cin >> num;
    
      while(num >= 0){
        entries = entries + 1;
        sum = sum + num;
    
        cout << "Enter a number: ";
        cin >> num;
      }
    
      return sum;
    }
    
    int main(){
    
      int entries = 0;
      int sum = askAndSum(entries);
    
      cout << sum << " " << entries << endl;
      return 0;
    }


<a id="org9cb88f1"></a>

### Exercises

1.  **Basic**: Write a swap function that exchanges the values of two variables using pass by reference.
2.  **Intermediate**: Create a function that returns both quotient and remainder of division (use reference parameters for one of them).
3.  **Challenge**: Build a function that finds minimum, maximum, and average of an array in a single pass. Use reference parameters for min and max.


<a id="org6579a89"></a>

## TODO Arrays, again, and Pointers

So we've covered the concept of arrays once already, to show you the basics of how they're used in C++. Now we're circling back around to cover the topic *again*. Remember how we could print all the items in an array? We did it like this:

    #include <iostream>
    using namespace std;
    
    int main(){
      int arr[10] = {10,11,12,13,14,15,16,17,18,19};
      for(int i =0; i<10;i++){
        cout << "The " << i << "th element is: " << arr[i] << endl;
      }
      return 0;
    }

Now what will happen if we print just the array like this?

    #include <iostream>
    using namespace std;
    
    int main(){
      int arr[10] = {10,11,12,13,14,15,16,17,18,19};
      cout << "The array is " << arr << endl;
      return 0;
    }

What do you think it will do? Will it print all the elements of the array? Will it print nothing? This is a slightly unfair question because unless you already *know* about pointers you would have no way of knowing that it will produce something that looks like this:

    The array is 0x7ffc2ee1fa50

What's *that*, exactly? A number, and yes this is a number despite the letters mixed in there, that starts with `0x` is a hexadecimal number. Remember how we talked about binary being a sum of powers of two and our normal base ten is a sum of powers of ten? Hexadecimal is powers of **16**, where the "digits" used in a hex number range from 0-f rather than 0-9. Hex is a little weird to read but it's really convenient for talking about computers because each hex digit is the same as 4 bits of information.

Have you ever seen hex-codes for colors? They're usually a series of 6-hex digits because an rgb color is 24 bits,  *or 3 bytes*, i.e. 6 groups of 4 bits each.

However, when you see a big hex number in programming it's usually a memory *address*. An address is what it sounds like, it tells you where the information is stored in the computer's memory, completely analogous to a street address.

Do you remember earlier in this text when we talked about the storage wall with the labeled dividers? Well these addresses are what those labels **really** are.

And this means that when you use the name of the array by itself, without the `[]`, you're getting the address of where the array starts! An array isn't one big storage chunk, but a contiguous region of dividers on the wall-of-storage. So this address is the label on the *first* cubbyhole that makes up the array.

Now you might wonder if there's a way to get the label, the address, of any variable. There is! It's the "&" operator.

So I can do a fun trick like the following

    #include <iostream>
    using namespace std;
    
    int main() {
      int test = 0;
    
      cout << &test << endl;
    
      return 0;
    }

Which, if you run this code, you'll see something along the lines of

    0x7ffec7bdf804

which, as we now know, is an *address*.

But how do we know that this is the *right* address, and what do we do *with* an address once we have it? We can answer both of those questions by introducing the dual to the `&` operator: the `*` operator. Yes, it's the same `*` you also use for multiplication but generally that's fine and doesn't cause problems.

Here we're going to write a program that

1.  declares a variable and puts a number in it
2.  pulls the address out of the variable with `&`
3.  follows the address with `*` to get at the number stored in the variable
4.  prints it out

    #include <iostream>
    using namespace std;
    
    int main(){
      int test = 1234; // since 0 can sometimes be a default let's put a specific number here
    
      cout << *(&test) << endl; // the * operator will "follow" the address and grab what's stored there
      // should print 1234 and then end
    
      return 0;
    }

If we can pull an address out, can we also store the *address* as data? Yes! That involves introducing a new family of types called pointers! Generally, you take the type of the thing being *stored* and then add the `*` at the end to make it the pointer version of the type. Let's get really concrete:

    #include <iostream>
    using namespace std;
    
    int main(){
      int test = 1234;
      int* pointy = &test;
    
      double dubTest = 3.14;
      double* dubPoint = &dubTest;
    
      cout << "The address of test is: " << pointy << endl;
      cout << "Following the address gives us: " << *pointy << endl;
    
      cout << "The address of dubTest is: " << dubPoint << endl;
      cout << "Following the address gives us: " << *dubPoint << endl;
    
      return 0;
    }

Now we can get back to arrays! So I often tell people that in C/C++ an array is "a pointer and a promise", let's see why. First, we're going to try to follow the address of an array.

    #include <iostream>
    using namespace std;
    
    int main(){
      int test[5] = {10,11,12,13,14};
    
      cout << "And *test is...: " << *test << endl; 
    
      return 0;
    }

Well look at that, it's 10! Because the address stored in `test` is the address of the first "cubby". How do we get to the rest of the storage in the array? This is where the fact that an array is *contiguous* will save us: we can just go to the next address by *adding* to it.

This is called *pointer arithmetic* and is actually what the `[]` syntax for arrays really was all along!

Let's write a little program to test this out:

    #include <iostream>
    using namespace std;
    
    int main(){
    
      int test[] = {10,11,12,13,14};
    
      //let's prove that the [] brackets were really just playing with pointers all along!
      for(int i=0; i < 5; i++){
        cout << "Accessing elements with []: "<< test[i] << endl;
        cout << "Accessing elements with pointer arithmetic: "<< *(test+i) << endl;
      }
    
      return 0;
    }

If you run this you should see that both methods print identical items in the array!


<a id="org18779be"></a>

### Pointer and a promise

Let's take a step back now and talk about what the implications of all this actually is: arrays are "really" just pointers. Pointers have no sense of how many contiguous addresses after the pointer are valid as they're merely *addresses* for memory locations. That's why you have so many of these awkward coding idioms where you have to separately keep track of, for example, how many items you read in rather than being able to access the length of an array. That's why we can have these strange error states where we can go *beyond* the array and access random gibberish data.

In modern programming, you don't use basic C/C++ style arrays that often. Even in C++ most of the time you're going to use a data structure we call a *vector*. These vectors are what most programming languages call arrays, like Python, and they're capable of doing things like

-   changing in size
-   adding and deleting elements
-   telling you how many elements are currently in them
-   throw an error if you access beyond the bounds of the container

Very convenient!

We won't really use vectors in this class and that's because we're trying to install <del>fear of</del> healthy respect for the problems that can happen if you aren't careful using arrays.


<a id="org1211424"></a>

### Dynamic arrays

If we wanted to *try* and have arrays that were a little more flexible, without using the `vector` type, what might we do?

One idea is that we could make an array that's a lot bigger than we really need and then only use *part* of it, marking the "effective" end with some kind of special piece of data.

Let's assume that the arrays we're going to make are going to be arrays of natural numbers, so 0 and above. That means we could treat -1 as the special "this is the end of the array value".

Let's try writing some functions that will let you actually use these arrays a little more conveniently. The basic trick we're going to be using is the idea of a `while` loop that keeps going until you reach a `-1` value.

So if we want to calculate the "effective" length of the array that's being used we can just write a loop like the following `dynLength` function, complete with a small program to test it out.

    #include <iostream>
    using namespace std;
    
    int dynLength(int arr[]){
      int i=0;
      while(arr[i] != -1){
        i++;
      }
      return i;
    }
    
    int main(){
    
      int arr[] = {1,2,3,4,-1};
    
      cout << dynLength(arr) << endl;
    
      return 0;
    }

If you run this code you should find that it prints `4`. Go ahead and test it out by adding elements *after* the `-1` and check that the answer doesn't change! It should always stop when it hits the *first* `-1` in the array.

So now we have a length function that means we can write functions that do things like "multiply every element in the array by 2" without actually needing to pass the length explicitly, like this:

    #include <iostream>
    using namespace std;
    
    int dynLength(int arr[]){
      int i=0;
      while(arr[i] != -1){
        i++;
      }
      return i;
    }
    
    void doubleArray(int arr[]){
      for(int i=0;i<dynLength(arr);i++){
        arr[i] = 2*arr[i];
      }
    }
    
    void printArray(int arr[]){
      cout << "[";
      for(int i=0; i<dynLength(arr); i++){
        if( i > 0){
          cout << ", ";
        }
        cout << arr[i];
      }
      cout << "]";
      cout << endl;
    }
    
    int main(){
    
      int arr[] = {1,2,3,4,-1};
    
      doubleArray(arr);
      printArray(arr);
    
      return 0;
    }

> Exercise: here's a quick check for yourself. Why is the `printArray` function written like this? Can you puzzle it out?


<a id="org41c3ddd"></a>

## TODO Char Arrays

So far we've used strings this entire time but there's another way that strings are used in older code, especially older *C* code, and you need to get some experience with how "strings-as-character-arrays" actually work.

We haven't really done a lot with the `char` type so far other than some menuing, but you might remember earlier where we were able to treat the `string` type almost like an array of characters. As a reminder, we were able to do things like this

    #include <iostream>
    using namespace std;
    
    void changeChar(string& s){
      for(int i=0; i < s.length(); i++){
        s[i] = s[i]+1;
      }
    }
    
    int main(){
    
      string text = "hal";
      changeChar(text);
      cout << text << endl;
    
      return 0;
    }

Well at first all that's going to change is that we're going to make our code use an array of `char`, so we might expect that we need to pass the length in like so:

    #include <iostream>
    using namespace std;
    
    void changeChar(char c[], int length){
      for(int i=0; i < length; i++){
        c[i] = c[i] + 1;
      }
    }
    
    int main(){
    
      char text[] = "hal";
      changeChar(text,3);
      cout << text << endl;
    
      return 0;
    }

But what if I told you, though, that character arrays in C were a kind of *dynamic array* like we made above? But instead of the number `-1` being the terminator it's actually going to be a special character `'\0'`. This special character is the "null" character, that means literally don't print anything. That makes it really useful for signifying the "end" of a string-as-character-array.

Let's go ahead and adapt some of our code from above to this new kind of dynamic array:

    #include <iostream>
    using namespace std;
    
    int dynLength(char arr[]){
      int i=0;
      while(arr[i] != '\0'){
        i++;
      }
      return i;
    }
    
    void changeChar(char c[]){
      for(int i=0; i < dynLength(c); i++){
        c[i] = c[i]+1;
      }
    }
    
    int main(){
    
      char text[] = "hal";
      changeChar(text);
      cout << text << endl;
    
      return 0;
    }

Notice that we no longer need the length in the `changeChar` function, so it's kind of like normal strings again!

We'll do one more function with character arrays before we leave the rest of the topic to CS161B: concatenating two strings.

This is going to involve a bit of work but we'll go line-by-line

    #include <iostream>
    using namespace std;
    
    int dynLength(char arr[]){
      int i=0;
      while(arr[i] != '\0'){
        i++;
      }
      return i;
    }
    
    void concat(char c1[], char c2[]){
      // this function is going to attach c2 to the end of c1
      int i = 0;
      // first we need to make our index point to the end of string one, which means we need to find
      // the first \0 in the string
      while(c1[i] != '\0'){
        i++;
      }
      // now i is pointing to the end
      // alternatively, we could have just used a call to dynLength
      // can you see why that works??
      // so the next thing we need is the length of the second string
      int length2 = dynLength(c2);
      // now we need to write a for loop that goes from 0 to length2 and copies characters over from c2 to c1
      for(int j=0; j<length2; j++){
        c1[j+i] = c2[j];
      }
      // now we're *not* done because we also need to make sure we put a \0 at the new end of the string
      c1[length2+i] = '\0';
    }
    
    int main(){
      char hello[] = "Hello";
      char world[] = ", World!";
    
      concat(hello,world);
    
      cout << hello << endl;
    
      return 0;
    }

If you run this we'll see that what gets printed out is "Hello, World!", which is exactly what we'd hoped.

Now, note that this means we *modified* the first string to do this concatenation. That's very different than how the `+` operator worked on the `string` type, which didn't change the arguments passed into it.

This is an example of what's called a "destructive" operation, because it doesn't leave operands passed into it unscathed! This isn't inherently bad, you just have to be careful with it!

There are a lot more operations on C-style character array strings that you'll see in CS 161B, so this is functioning just as a brief preview of how that kind of programming works. The good news is that you don't have to write them from scratch every time, instead you can use a library full of them. I do think, though, it's good to see how they work *at least* once.


<a id="org6356342"></a>

# CS161B Preview: Looking Ahead to the Second Quarter

You've made it through the core material for CS161A—congratulations! Before we wrap up, I want to give you a preview of some topics that you'll encounter in CS161B, the second quarter of this programming sequence.

Why include preview material in the CS161A textbook? A few reasons:

1.  **To give you a head start**: If you have extra time or curiosity, you can start exploring these concepts early. Getting familiar with them now will make CS161B feel more manageable.

2.  **To show you where we're headed**: Programming is a journey, and it helps to see the road ahead. These topics build naturally on what you've learned so far.

3.  **To provide context**: Some of the things we've learned in CS161A (like arrays and pointers) will make more sense when you see the "better" alternatives that C++ provides (like vectors).

4.  **To support bridge students**: If you're taking CS161A to prepare for CS161B, this material gives you a taste of what's coming and helps you assess your readiness.


<a id="org228449e"></a>

## What to Expect from These Preview Chapters

The following topics will all be covered in much greater depth during CS161B:

-   **Vectors**: Dynamic arrays that grow and shrink as needed
-   **Structs**: Organizing related data into custom types
-   **File I/O**: Reading from and writing to files
-   **Multi-file Programs**: Breaking your code into organized modules
-   **Algorithms**: Sorting and searching techniques

****Important****: Don't feel pressured to master these topics right now. They're here as a preview, not as required CS161A material. In CS161B, you'll have much more time to practice and understand these concepts thoroughly. Think of these chapters as "coming attractions" rather than homework.

That said, if you're feeling confident with the CS161A material and want to challenge yourself, by all means dive in! These are all practical, useful topics that will make you a better programmer.

All right, let's take a peek at what's coming next quarter!


<a id="org1a1ea5b"></a>

## TODO Vectors: Dynamic Arrays

Remember how we had to declare arrays with a fixed size, and couldn't easily change that size later? Remember how we had to manually track the size of arrays and pass it as a separate parameter to functions? Remember how going out of bounds on an array just&#x2026; caused mysterious crashes without any helpful error messages?

Yeah, vectors solve all of those problems.

Vectors are one of the most useful tools in C++, and you'll use them constantly in CS161B. They're like arrays, but better in almost every way. Think of them as "arrays that actually make sense."


<a id="org301e018"></a>

### TODO Introduction to Vectors

1.  Why Use Vectors Over Arrays?

    Vectors are part of the C++ Standard Library and provide:
    
    -   **Dynamic sizing**: They can grow and shrink as needed—no more guessing how big to make your array!
    -   **Bounds checking**: With the `.at()` method, you get helpful error messages instead of mysterious crashes
    -   **Built-in size tracking**: The vector knows how big it is, so you don't have to keep track separately
    -   **Easier to use with functions**: You can pass vectors around without worrying about losing size information

2.  Including the Vector Library

        #include <iostream>
        #include <vector>
        using namespace std;


<a id="org9f37fd6"></a>

### TODO Creating and Initializing Vectors

    // Empty vector of integers
    vector<int> numbers;
    
    // Vector with initial size
    vector<int> grades(5); // 5 elements, all initialized to 0
    
    // Vector with initial values
    vector<int> temps = {65, 68, 72, 75, 73};
    
    // Vector of strings
    vector<string> names = {"Alice", "Bob", "Charlie"};


<a id="org76daf08"></a>

### TODO Vector Operations

1.  Adding and Removing Elements

        vector<int> nums;
        
        // Add to end
        nums.push_back(10);
        nums.push_back(20);
        nums.push_back(30);
        // Now nums = {10, 20, 30}
        
        // Remove from end
        nums.pop_back();
        // Now nums = {10, 20}

2.  Size and Empty

        vector<int> values = {1, 2, 3, 4, 5};
        
        cout << "Size: " << values.size() << endl; // Prints 5
        
        if(values.empty()){
          cout << "Vector is empty" << endl;
        }
        else{
          cout << "Vector has " << values.size() << " elements" << endl;
        }

3.  Clear and Resize

        vector<int> nums = {1, 2, 3, 4, 5};
        
        // Remove all elements
        nums.clear();
        cout << nums.size() << endl; // Prints 0
        
        // Resize to specific size
        nums.resize(10); // Now has 10 elements (all 0)

4.  Exercises

    1.  **Basic**: Create a vector, add 5 numbers to it using push<sub>back</sub>, then print all elements.
    2.  **Intermediate**: Create a program that reads numbers from the user until they enter -1, stores them in a vector, then displays them.


<a id="org20f5ece"></a>

### TODO Accessing Vector Elements

1.  Using [] vs at()

        vector<int> nums = {10, 20, 30, 40, 50};
        
        // Both access the same element
        cout << nums[0] << endl;   // No bounds checking
        cout << nums.at(0) << endl; // With bounds checking
        
        // Out of bounds
        nums[10] = 99;   // Undefined behavior (dangerous!)
        nums.at(10) = 99; // Throws exception (safer!)

2.  Exercises

    1.  **Basic**: Write a program that safely accesses vector elements using .at() with error handling.
    2.  **Discussion**: When would you use [] vs .at()?


<a id="org2e2132b"></a>

### TODO Iterating Through Vectors

1.  Index-Based Loops

        vector<int> numbers = {5, 10, 15, 20, 25};
        
        for(int i = 0; i < numbers.size(); i++){
          cout << numbers[i] << " ";
        }
        cout << endl;

2.  Range-Based For Loops

        vector<string> names = {"Alice", "Bob", "Charlie"};
        
        // Read-only access
        for(string name : names){
          cout << name << " ";
        }
        cout << endl;
        
        // Modify elements (use reference)
        vector<int> values = {1, 2, 3, 4, 5};
        for(int& val : values){
          val = val * 2; // Double each value
        }

3.  Exercises

    1.  **Basic**: Use a range-based for loop to sum all elements in a vector.
    2.  **Intermediate**: Use a range-based for loop to convert all strings in a vector to uppercase.


<a id="orgda0bc5d"></a>

### TODO Vectors and Functions

1.  Passing Vectors by Reference

        // Pass by reference to avoid copying
        void printVector(const vector<int>& v){
          for(int num : v){
            cout << num << " ";
          }
          cout << endl;
        }
        
        // Modify the vector
        void doubleValues(vector<int>& v){
          for(int& val : v){
            val *= 2;
          }
        }

2.  Returning Vectors from Functions

        vector<int> generateSequence(int n){
          vector<int> result;
          for(int i = 1; i <= n; i++){
            result.push_back(i);
          }
          return result;
        }
        
        int main(){
          vector<int> nums = generateSequence(10);
          // nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
          return 0;
        }

3.  Exercises

    1.  **Basic**: Write a function that returns a vector of even numbers from 0 to n.
    2.  **Intermediate**: Write a function that filters a vector, keeping only positive numbers.


<a id="org862670e"></a>

### TODO Common Vector Patterns

1.  Building Lists from User Input

        vector<int> readNumbers(){
          vector<int> numbers;
          int num;
        
          cout << "Enter numbers (enter -1 to stop):" << endl;
          while(cin >> num && num != -1){
            numbers.push_back(num);
          }
        
          return numbers;
        }

2.  Filtering and Transforming Data

        vector<int> filterPositive(const vector<int>& nums){
          vector<int> result;
          for(int num : nums){
            if(num > 0){
              result.push_back(num);
            }
          }
          return result;
        }

3.  Exercises

    1.  **Basic**: Write a function that returns only the even numbers from a vector.
    2.  **Intermediate**: Write a function that removes duplicates from a vector.
    3.  **Challenge**: Write a function that merges two sorted vectors into one sorted vector.


<a id="org56853cb"></a>

### TODO Two-Dimensional Vectors

    // Vector of vectors (2D vector)
    vector<vector<int>> matrix;
    
    // Initialize 3x4 matrix
    matrix = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12}
    };
    
    // Access elements
    cout << matrix[0][0] << endl; // Prints 1
    
    // Iterate
    for(int row = 0; row < matrix.size(); row++){
      for(int col = 0; col < matrix[row].size(); col++){
        cout << matrix[row][col] << " ";
      }
      cout << endl;
    }

1.  Exercises

    1.  **Intermediate**: Create a 2D vector to store a multiplication table.
    2.  **Challenge**: Create a jagged 2D vector where each row has a different length.


<a id="org32aad46"></a>

### TODO Lab Projects

1.  LAB: Dynamic Grade Book

    Create a program that:
    
    -   Allows adding student grades dynamically
    -   Calculates statistics (average, min, max)
    -   Can remove the lowest grade
    -   Displays all grades sorted

2.  LAB: Shopping List Manager

    Create a program with a menu that can:
    
    -   Add items to shopping list
    -   Remove items
    -   Display all items
    -   Clear the list
    -   Show number of items

3.  LAB: High Score Tracker

    Create a game score tracker that:
    
    -   Stores player names and scores in separate vectors
    -   Adds new scores
    -   Displays top 5 scores
    -   Allows searching for a player's score


<a id="orgce02e5d"></a>

## TODO Structs: Organizing Related Data

Imagine you're writing a program to manage student records. You need to store each student's name, ID number, GPA, and maybe their major. You could create separate arrays or vectors for each piece of information:

    vector<string> studentNames;
    vector<int> studentIDs;
    vector<double> studentGPAs;
    vector<string> studentMajors;

But now you have a nightmare: you have to keep all four vectors synchronized. If you want to add a new student, you need to remember to add to all four vectors. If you want to delete a student, you need to delete from all four at the same index. If you accidentally get the indices mixed up, you'll have students with the wrong GPAs or majors. This is fragile and error-prone.

Structs solve this problem by letting you bundle related data together into a single custom type. Instead of four separate vectors, you can have one vector of "Student" objects, where each student carries all their own information. It's cleaner, safer, and much more intuitive.


<a id="org8916081"></a>

### TODO Introduction to Structs

1.  Why Group Related Data?

    When you have related pieces of information (like a student's name, ID, and GPA), keeping them in separate variables or arrays becomes unwieldy and error-prone. Structs let you bundle related data together into a single unit, making your code more organized and easier to maintain.

2.  Declaring a Struct

        struct Student {
          string name;
          int id;
          double gpa;
        };


<a id="org73856b8"></a>

### TODO Creating and Using Struct Variables

    struct Book {
      string title;
      string author;
      int pages;
      double price;
    };
    
    int main(){
      // Create a book
      Book myBook;
      myBook.title = "1984";
      myBook.author = "George Orwell";
      myBook.pages = 328;
      myBook.price = 12.99;
    
      // Create and initialize
      Book anotherBook = {"Dune", "Frank Herbert", 688, 18.99};
    
      // Access members
      cout << myBook.title << " by " << myBook.author << endl;
      cout << "Pages: " << myBook.pages << endl;
    
      return 0;
    }

1.  Exercises

    1.  **Basic**: Create a struct for a Person with name, age, and height. Create a Person variable and display it.
    2.  **Intermediate**: Create a struct for a Rectangle with width and height. Add variables to store the calculated area and perimeter.


<a id="org846127a"></a>

### TODO Accessing Struct Members

Use the dot operator (`.`) to access struct members.

    struct Point {
      double x;
      double y;
    };
    
    int main(){
      Point p1;
      p1.x = 3.5;
      p1.y = 7.2;
    
      cout << "Point: (" << p1.x << ", " << p1.y << ")" << endl;
    
      return 0;
    }


<a id="org514c8af"></a>

### TODO Structs and Functions

1.  Passing Structs to Functions

        struct Rectangle {
          double width;
          double height;
        };
        
        double calculateArea(Rectangle rect){
          return rect.width * rect.height;
        }
        
        void displayRectangle(const Rectangle& rect){
          cout << "Width: " << rect.width << endl;
          cout << "Height: " << rect.height << endl;
          cout << "Area: " << calculateArea(rect) << endl;
        }
        
        int main(){
          Rectangle r = {5.0, 3.0};
          displayRectangle(r);
          return 0;
        }

2.  Returning Structs from Functions

        struct Point {
          double x;
          double y;
        };
        
        Point createPoint(double x, double y){
          Point p;
          p.x = x;
          p.y = y;
          return p;
        }
        
        int main(){
          Point p1 = createPoint(3.5, 7.2);
          cout << "Point: (" << p1.x << ", " << p1.y << ")" << endl;
          return 0;
        }

3.  Exercises

    1.  **Basic**: Write a function that takes two Point structs and calculates the distance between them.
    2.  **Intermediate**: Write a function that takes a Rectangle and returns true if it's a square.


<a id="orgdb2ce8b"></a>

### TODO Vectors of Structs

This is where structs become really powerful - creating databases of records.

    struct Student {
      string name;
      int id;
      double gpa;
    };
    
    int main(){
      vector<Student> students;
    
      // Add students
      Student s1 = {"Alice", 1001, 3.8};
      Student s2 = {"Bob", 1002, 3.5};
      Student s3 = {"Charlie", 1003, 3.9};
    
      students.push_back(s1);
      students.push_back(s2);
      students.push_back(s3);
    
      // Display all students
      for(const Student& s : students){
        cout << s.name << " (ID: " << s.id << "): "
    	 << s.gpa << endl;
      }
    
      return 0;
    }

1.  Example: Student Records System

        struct Student {
          string name;
          int id;
          double gpa;
        };
        
        void displayStudent(const Student& s){
          cout << s.name << " (ID: " << s.id << "): GPA " << s.gpa << endl;
        }
        
        Student findTopStudent(const vector<Student>& students){
          Student top = students[0];
          for(const Student& s : students){
            if(s.gpa > top.gpa){
              top = s;
            }
          }
          return top;
        }
        
        int main(){
          vector<Student> students = {
            {"Alice", 1001, 3.8},
            {"Bob", 1002, 3.5},
            {"Charlie", 1003, 3.9}
          };
        
          cout << "All students:" << endl;
          for(const Student& s : students){
            displayStudent(s);
          }
        
          cout << "\nTop student:" << endl;
          displayStudent(findTopStudent(students));
        
          return 0;
        }

2.  Exercises

    1.  **Basic**: Create a vector of Book structs and display them all.
    2.  **Intermediate**: Write a function to find the most expensive book in a vector of Books.
    3.  **Challenge**: Create a simple contact management system with add, search, and display functions.


<a id="orgf444dcf"></a>

### TODO Nested Structs

Structs can contain other structs as members.

    struct Date {
      int month;
      int day;
      int year;
    };
    
    struct Person {
      string name;
      Date birthday;
      string email;
    };
    
    int main(){
      Person p;
      p.name = "Alice";
      p.birthday.month = 5;
      p.birthday.day = 15;
      p.birthday.year = 1995;
      p.email = "alice@example.com";
    
      cout << p.name << " was born on "
           << p.birthday.month << "/"
           << p.birthday.day << "/"
           << p.birthday.year << endl;
    
      return 0;
    }

1.  Exercises

    1.  **Intermediate**: Create an Address struct and a Person struct that contains an Address.
    2.  **Challenge**: Create a School struct that contains a vector of Student structs.


<a id="orga77a953"></a>

### TODO Lab Projects

1.  LAB: Student Record System

    Create a complete student management system:
    
    -   Add new students
    -   Display all students
    -   Find student by ID
    -   Calculate class average GPA
    -   Find honor roll students (GPA >= 3.5)

2.  LAB: Product Inventory

    Create an inventory system with Product structs:
    
    -   Track name, SKU, quantity, price
    -   Add new products
    -   Update quantities
    -   Display all products
    -   Calculate total inventory value

3.  LAB: Contact Management System

    Create a contact manager:
    
    -   Store name, phone, email, birthday
    -   Add/remove contacts
    -   Search contacts by name
    -   Display all contacts sorted by name
    -   Show upcoming birthdays


<a id="org2a2c7e9"></a>

## TODO File I/O: Reading and Writing Files

So far, all of our programs have been ephemeral—when they end, any data they worked with disappears. If you run a program that asks for user input, processes it, and displays results, that's great&#x2026; but as soon as the program ends, everything is gone. If you want to use that data again, you have to re-enter it all over again.

This is where files come in.

Files let your programs save data permanently to disk, read data that was saved earlier, and share information between different programs. Want to save high scores in a game? Files. Want to process a spreadsheet of student grades? Files. Want to create a log of what your program did? Files.

File I/O (Input/Output) is one of the most practical programming skills you'll learn. Nearly every real-world program needs to read from or write to files at some point. The good news is that once you understand `cin` and `cout`, file I/O will feel very familiar—it uses almost the same syntax!


<a id="org6acd44c"></a>

### TODO Introduction to File Input/Output

1.  Why Use Files?

    Files give your programs the ability to:
    
    -   **Permanent storage**: Data persists after the program ends—no more re-entering the same information!
    -   **Process large amounts of data**: Work with thousands of records that would be impractical to type in manually
    -   **Share data between programs**: One program writes a file, another program reads it
    -   **Create logs and reports**: Track what your program does over time or generate output for users

2.  Text Files vs Binary Files

    In this course, we focus on text files (human-readable). Binary files are more efficient but harder to work with.


<a id="orga7c4c91"></a>

### TODO Reading from Files

1.  Opening Files with ifstream

        #include <iostream>
        #include <fstream>
        #include <string>
        using namespace std;
        
        int main(){
          ifstream inFile;
          inFile.open("data.txt");
        
          // Always check if file opened successfully
          if(!inFile.is_open()){
            cout << "Error opening file!" << endl;
            return 1;
          }
        
          // Read and process file here...
        
          inFile.close();
          return 0;
        }

2.  Reading Line by Line

        #include <iostream>
        #include <fstream>
        #include <string>
        using namespace std;
        
        int main(){
          ifstream inFile("data.txt");
        
          if(!inFile.is_open()){
            cout << "Error opening file!" << endl;
            return 1;
          }
        
          string line;
          while(getline(inFile, line)){
            cout << line << endl;
          }
        
          inFile.close();
          return 0;
        }

3.  Reading Word by Word

        ifstream inFile("words.txt");
        string word;
        
        while(inFile >> word){
          cout << word << endl;
        }
        
        inFile.close();

4.  Checking for File Open Errors

        ifstream inFile("data.txt");
        
        if(inFile.fail()){
          cout << "Could not open file!" << endl;
          return 1;
        }
        
        // Alternative: check with is_open()
        if(!inFile.is_open()){
          cout << "Could not open file!" << endl;
          return 1;
        }

5.  Exercises

    1.  **Basic**: Write a program that reads and displays the contents of a text file.
    2.  **Intermediate**: Write a program that counts the number of lines in a file.
    3.  **Challenge**: Write a program that counts the number of words in a file.


<a id="orgb89b2db"></a>

### TODO Writing to Files

1.  Opening Files with ofstream

        #include <iostream>
        #include <fstream>
        using namespace std;
        
        int main(){
          ofstream outFile("output.txt");
        
          if(!outFile.is_open()){
            cout << "Error creating file!" << endl;
            return 1;
          }
        
          outFile << "Hello, file!" << endl;
          outFile << "This is line 2" << endl;
        
          outFile.close();
          return 0;
        }

2.  Writing Formatted Output

        ofstream outFile("grades.txt");
        
        outFile << "Name\tGrade" << endl;
        outFile << "Alice\t95" << endl;
        outFile << "Bob\t87" << endl;
        outFile << "Charlie\t92" << endl;
        
        outFile.close();

3.  Append Mode vs Overwrite Mode

        // Overwrite mode (default)
        ofstream outFile1("file.txt");
        outFile1 << "This replaces file contents" << endl;
        outFile1.close();
        
        // Append mode
        ofstream outFile2("file.txt", ios::app);
        outFile2 << "This is added to the end" << endl;
        outFile2.close();

4.  Exercises

    1.  **Basic**: Write a program that asks for user's name and age, then saves it to a file.
    2.  **Intermediate**: Create a simple diary program that appends entries to a file with timestamps.


<a id="orgf1a47db"></a>

### TODO File Processing Patterns

1.  Processing Until End of File

        #include <iostream>
        #include <fstream>
        using namespace std;
        
        int main(){
          ifstream inFile("numbers.txt");
          int num;
          int sum = 0;
          int count = 0;
        
          while(inFile >> num){
            sum += num;
            count++;
          }
        
          if(count > 0){
            cout << "Average: " << (double)sum / count << endl;
          }
        
          inFile.close();
          return 0;
        }

2.  Counting Lines, Words, Characters

        ifstream inFile("document.txt");
        string line;
        int lineCount = 0;
        int wordCount = 0;
        int charCount = 0;
        
        while(getline(inFile, line)){
          lineCount++;
          charCount += line.length();
        
          // Count words (simple approach)
          string word;
          for(char c : line){
            if(c == ' '){
              if(!word.empty()){
        	wordCount++;
        	word = "";
              }
            }
            else{
              word += c;
            }
          }
          if(!word.empty()) wordCount++;
        }
        
        cout << "Lines: " << lineCount << endl;
        cout << "Words: " << wordCount << endl;
        cout << "Characters: " << charCount << endl;
        
        inFile.close();

3.  Processing CSV Files

        #include <iostream>
        #include <fstream>
        #include <sstream>
        #include <vector>
        using namespace std;
        
        struct Student {
          string name;
          int id;
          double gpa;
        };
        
        int main(){
          ifstream inFile("students.csv");
          string line;
          vector<Student> students;
        
          // Skip header line
          getline(inFile, line);
        
          while(getline(inFile, line)){
            Student s;
            stringstream ss(line);
            string token;
        
            getline(ss, s.name, ',');
            getline(ss, token, ',');
            s.id = stoi(token);
            getline(ss, token, ',');
            s.gpa = stod(token);
        
            students.push_back(s);
          }
        
          // Process students...
          for(const Student& s : students){
            cout << s.name << ": " << s.gpa << endl;
          }
        
          inFile.close();
          return 0;
        }

4.  Exercises

    1.  **Basic**: Read a file of numbers and find the maximum value.
    2.  **Intermediate**: Read a CSV file of names and ages, then display those over 18.
    3.  **Challenge**: Create a program that reads student records from a file and generates a report file with statistics.


<a id="org9c8a5c1"></a>

### TODO Error Handling with Files

1.  Checking if File Exists

        #include <iostream>
        #include <fstream>
        using namespace std;
        
        bool fileExists(const string& filename){
          ifstream file(filename);
          return file.good();
        }
        
        int main(){
          string filename;
          cout << "Enter filename: ";
          cin >> filename;
        
          if(fileExists(filename)){
            cout << "File exists!" << endl;
          }
          else{
            cout << "File not found!" << endl;
          }
        
          return 0;
        }

2.  Handling Read/Write Errors

        ifstream inFile("data.txt");
        
        if(!inFile){
          cerr << "ERROR: Cannot open file for reading" << endl;
          return 1;
        }
        
        // Check for errors during reading
        while(inFile >> data){
          // Process data
        }
        
        if(inFile.bad()){
          cerr << "ERROR: Problem reading file" << endl;
        }
        else if(inFile.fail() && !inFile.eof()){
          cerr << "ERROR: Data format error" << endl;
        }
        
        inFile.close();


<a id="org0f0a7ca"></a>

### TODO Lab Projects

1.  LAB: Grade File Processor

    Create a program that:
    
    -   Reads student names and grades from a file
    -   Calculates class average
    -   Writes a report file with:
        -   All students and grades
        -   Class average
        -   Highest/lowest grades
        -   List of students who passed/failed

2.  LAB: Log File Analyzer

    Create a program that:
    
    -   Reads a log file with timestamps and messages
    -   Counts total entries
    -   Counts entries by type (ERROR, WARNING, INFO)
    -   Generates a summary report

3.  LAB: Simple Database (Save/Load Data)

    Create a contact management system that:
    
    -   Stores contacts in memory (vector of structs)
    -   Saves all contacts to a file
    -   Loads contacts from file on startup
    -   Allows add/edit/delete/search operations
    -   Preserves data between program runs


<a id="org807243a"></a>

## TODO Multi-File Programs

Up until now, you've probably been writing all your code in a single file—maybe `main.cpp` or something similar. For small programs, that's perfectly fine. But as your programs grow larger and more complex, putting everything in one file becomes a problem.

Imagine trying to find one specific function among 2,000 lines of code in a single file. Or imagine wanting to reuse your grade-calculation functions in three different programs—are you going to copy-paste the same code into three different files? What happens when you find a bug in that code? Do you have to fix it in three places?

This is where multi-file programs come in. Breaking your code into multiple files makes it more organized, reusable, and maintainable. It's like organizing your closet: instead of throwing everything in one big pile, you sort things into drawers and sections so you can actually find what you need.

In CS161B, you'll work on projects that are too large to fit comfortably in one file, so learning how to organize code across multiple files is essential. The key concepts are header files (`.h`) and implementation files (`.cpp`), and they work together to keep your code modular and clean.


<a id="orgbb550e6"></a>

### TODO Why Split Code into Multiple Files?

Breaking code into multiple files provides several important benefits:

-   **Organization**: Group related functions together (all math functions in one file, all file I/O functions in another)
-   **Reusability**: Write a function once, use it in multiple programs without copy-pasting
-   **Maintainability**: Find and fix bugs more easily when code is organized logically
-   **Collaboration**: Multiple people can work on different files without conflicts
-   **Compilation speed**: Only recompile the files that changed, not your entire program


<a id="org0f24ed8"></a>

### TODO Header Files (.h)

1.  Creating Header Files

    Header files contain declarations (what exists) but not usually implementations (how it works).
    
    `math_utils.h`:
    
        #ifndef MATH_UTILS_H
        #define MATH_UTILS_H
        
        // Function declarations
        double calculateArea(double width, double height);
        double calculateCircleArea(double radius);
        int factorial(int n);
        
        #endif

2.  Include Guards

    The `#ifndef`, `#define`, `#endif` pattern prevents the header from being included multiple times, which would cause errors.

3.  Function Declarations vs Definitions

    -   ****Declaration****: Tells the compiler a function exists (in .h file)
    -   ****Definition****: The actual implementation (in .cpp file)


<a id="orgd3e13ae"></a>

### TODO Implementation Files (.cpp)

`math_utils.cpp`:

    #include "math_utils.h"
    #include <cmath>
    
    double calculateArea(double width, double height){
      return width * height;
    }
    
    double calculateCircleArea(double radius){
      return 3.14159 * radius * radius;
    }
    
    int factorial(int n){
      if(n <= 1) return 1;
      return n * factorial(n - 1);
    }

`main.cpp`:

    #include <iostream>
    #include "math_utils.h"
    using namespace std;
    
    int main(){
      double area = calculateArea(5.0, 3.0);
      cout << "Area: " << area << endl;
    
      double circleArea = calculateCircleArea(2.5);
      cout << "Circle area: " << circleArea << endl;
    
      return 0;
    }


<a id="orgda09667"></a>

### TODO Compiling Multi-File Programs

1.  Command-Line Compilation

        # Compile all files together
        g++ main.cpp math_utils.cpp -o program
        
        # Or compile separately (faster for large projects)
        g++ -c math_utils.cpp   # Creates math_utils.o
        g++ -c main.cpp         # Creates main.o
        g++ math_utils.o main.o -o program  # Links them together

2.  Makefiles (Basic Introduction)

    A Makefile automates the compilation process.
    
    `Makefile`:
    
        program: main.o math_utils.o
        	g++ main.o math_utils.o -o program
        
        main.o: main.cpp math_utils.h
        	g++ -c main.cpp
        
        math_utils.o: math_utils.cpp math_utils.h
        	g++ -c math_utils.cpp
        
        clean:
        	rm -f *.o program
    
    Usage:
    
        make          # Builds the program
        make clean    # Removes compiled files


<a id="org216280b"></a>

### TODO Organizing Code by Purpose

1.  Utility Functions

    `string_utils.h` / `string_utils.cpp`: Common string operations

2.  Input/Output Functions

    `io.h` / `io.cpp`: User input validation, file operations

3.  Business Logic Functions

    `calculator.h` / `calculator.cpp`: Core application logic
    
    Example project structure:
    
        project/
          ├── main.cpp
          ├── string_utils.h
          ├── string_utils.cpp
          ├── io.h
          ├── io.cpp
          ├── calculator.h
          ├── calculator.cpp
          └── Makefile


<a id="orgb416dae"></a>

### TODO Common Errors with Multi-File Programs

1.  Multiple Definition Errors

    ****\*Problem****: Including a .cpp file instead of .h, or defining functions in .h files
    
    ****\*Solution****: Only put declarations in .h files, definitions in .cpp files

2.  Undefined Reference Errors

    ****\*Problem****: Forgot to compile a .cpp file, or misspelled function name
    
    ****\*Solution****: Make sure all .cpp files are compiled and linked

3.  Exercises

    1.  **Discussion**: What's the difference between `#include <iostream>` and `#include "myfile.h"`?
    2.  **Basic**: Create a header file with function declarations and an implementation file with definitions.


<a id="org3dc41a6"></a>

### TODO Lab Projects

1.  LAB: Refactor Single-File Program

    Take a previous lab (like the student record system) and split it into:
    
    -   `student.h` / `student.cpp` (struct and related functions)
    -   `io.h` / `io.cpp` (input/output functions)
    -   `main.cpp` (menu and main program logic)

2.  LAB: Build a Calculator Library

    Create a multi-file calculator:
    
    -   `basic_ops.h/.cpp` (add, subtract, multiply, divide)
    -   `advanced_ops.h/.cpp` (power, factorial, square root)
    -   `calculator.h/.cpp` (menu-driven calculator)
    -   `main.cpp` (program entry point)


<a id="orgec16088"></a>

## TODO Common Algorithms & Problem Solving

So you know how to write programs that do specific things: calculate grades, play guessing games, manage a list of names. But what about solving more general problems that come up over and over again in programming?

For example: "How do I find a specific item in a list?" or "How do I sort a list of items in order?" These are such common problems that computer scientists have developed standard solutions for them, called **algorithms**.

An algorithm is just a step-by-step procedure for solving a problem. The algorithms we'll look at here—searching and sorting—are fundamental to computer science. You'll use them constantly in real programs, and understanding how they work will help you become a better problem solver.

In CS161B, you'll study algorithms in much more depth, learning about their efficiency (how fast they run) and when to use one algorithm versus another. For now, we'll introduce a few classic algorithms to give you a taste of algorithmic thinking.

Don't worry if these seem abstract at first—that's normal! The key is to understand the logic of each algorithm, trace through how it works step-by-step, and recognize when you might need to use one in your own programs.


<a id="org7df103d"></a>

### TODO Searching Algorithms

1.  Linear Search

    This is the simplest search algorithm: just look through an array one element at a time until you find what you're looking for (or reach the end without finding it).
    
        int linearSearch(int arr[], int size, int target){
          for(int i = 0; i < size; i++){
            if(arr[i] == target){
              return i; // Found at index i
            }
          }
          return -1; // Not found
        }
    
    Time complexity: O(n) - might need to check every element

2.  Binary Search (On Sorted Data)

    Much faster than linear search, but only works on sorted arrays.
    
        int binarySearch(int arr[], int size, int target){
          int left = 0;
          int right = size - 1;
        
          while(left <= right){
            int mid = left + (right - left) / 2;
        
            if(arr[mid] == target){
              return mid; // Found!
            }
            else if(arr[mid] < target){
              left = mid + 1; // Search right half
            }
            else{
              right = mid - 1; // Search left half
            }
          }
        
          return -1; // Not found
        }
    
    Time complexity: O(log n) - much faster for large arrays

3.  Exercises

    1.  **Basic**: Implement linear search for a vector of strings.
    2.  **Intermediate**: Modify binary search to return the index where an element should be inserted if not found.
    3.  **Challenge**: Implement a search function that works on a vector of structs, searching by a specific field.


<a id="orgb93cdf5"></a>

### TODO Sorting Algorithms

1.  Selection Sort

    Find the minimum element and move it to the front, repeat for the rest.
    
        void selectionSort(int arr[], int size){
          for(int i = 0; i < size - 1; i++){
            int minIndex = i;
        
            // Find minimum in remaining array
            for(int j = i + 1; j < size; j++){
              if(arr[j] < arr[minIndex]){
        	minIndex = j;
              }
            }
        
            // Swap minimum to position i
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
          }
        }

2.  Bubble Sort

    Repeatedly swap adjacent elements if they're in the wrong order.
    
        void bubbleSort(int arr[], int size){
          for(int i = 0; i < size - 1; i++){
            for(int j = 0; j < size - i - 1; j++){
              if(arr[j] > arr[j + 1]){
        	// Swap
        	int temp = arr[j];
        	arr[j] = arr[j + 1];
        	arr[j + 1] = temp;
              }
            }
          }
        }

3.  Using Built-in Sort (Preview)

    C++ provides a highly optimized sort function.
    
        #include <algorithm>
        #include <vector>
        using namespace std;
        
        int main(){
          vector<int> nums = {5, 2, 8, 1, 9};
        
          sort(nums.begin(), nums.end());
          // nums is now {1, 2, 5, 8, 9}
        
          return 0;
        }

4.  Exercises

    1.  **Basic**: Implement selection sort for a vector.
    2.  **Intermediate**: Modify bubble sort to stop early if the array becomes sorted.
    3.  **Challenge**: Sort a vector of structs by a specific field (e.g., sort students by GPA).


<a id="org2fc86a8"></a>

### TODO String Algorithms

1.  Reversing Strings

        string reverseString(string s){
          string result = "";
          for(int i = s.length() - 1; i >= 0; i--){
            result += s[i];
          }
          return result;
        }
        
        // In-place reversal
        void reverseInPlace(string& s){
          int left = 0;
          int right = s.length() - 1;
        
          while(left < right){
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
          }
        }

2.  Checking for Palindromes

        bool isPalindrome(const string& s){
          int left = 0;
          int right = s.length() - 1;
        
          while(left < right){
            if(s[left] != s[right]){
              return false;
            }
            left++;
            right--;
          }
        
          return true;
        }

3.  Finding Patterns in Text

        int countOccurrences(const string& text, const string& pattern){
          int count = 0;
          size_t pos = 0;
        
          while((pos = text.find(pattern, pos)) != string::npos){
            count++;
            pos += pattern.length();
          }
        
          return count;
        }

4.  Exercises

    1.  **Basic**: Write a function that removes all spaces from a string.
    2.  **Intermediate**: Write a function that checks if two strings are anagrams.
    3.  **Challenge**: Implement a simple spell checker that finds the closest matching word.


<a id="orgad7037e"></a>

### TODO Numeric Algorithms

1.  Finding GCD (Greatest Common Divisor)

        int gcd(int a, int b){
          while(b != 0){
            int temp = b;
            b = a % b;
            a = temp;
          }
          return a;
        }

2.  Finding LCM (Least Common Multiple)

        int lcm(int a, int b){
          return (a * b) / gcd(a, b);
        }

3.  Prime Number Testing

        bool isPrime(int n){
          if(n <= 1) return false;
          if(n <= 3) return true;
          if(n % 2 == 0 || n % 3 == 0) return false;
        
          for(int i = 5; i * i <= n; i += 6){
            if(n % i == 0 || n % (i + 2) == 0){
              return false;
            }
          }
        
          return true;
        }

4.  Fibonacci Sequences

        // Iterative approach (efficient)
        int fibonacci(int n){
          if(n <= 1) return n;
        
          int a = 0, b = 1;
          for(int i = 2; i <= n; i++){
            int temp = a + b;
            a = b;
            b = temp;
          }
        
          return b;
        }

5.  Exercises

    1.  **Basic**: Write a function that generates the first n prime numbers.
    2.  **Intermediate**: Write a function that finds the prime factorization of a number.
    3.  **Challenge**: Implement the Sieve of Eratosthenes to find all primes up to n.


<a id="org24350cd"></a>

### TODO Problem-Solving Strategies

1.  Breaking Down Complex Problems

    1.  ****Understand the problem****: Read carefully, identify inputs/outputs
    2.  ****Plan****: Break into smaller steps, consider edge cases
    3.  ****Implement****: Write code for each step
    4.  ****Test****: Try different inputs, including edge cases
    5.  ****Refine****: Optimize, improve readability

2.  Test-Driven Development Basics

    Write tests before writing the actual function.
    
        // Test function
        void testFactorial(){
          assert(factorial(0) == 1);
          assert(factorial(1) == 1);
          assert(factorial(5) == 120);
          cout << "All tests passed!" << endl;
        }
        
        // Then implement factorial to pass the tests
        int factorial(int n){
          if(n <= 1) return 1;
          return n * factorial(n - 1);
        }

3.  Debugging Systematic Approaches

    1.  ****Read error messages carefully****
    2.  ****Use print statements**** to track variable values
    3.  ****Test small pieces**** of code separately
    4.  ****Check assumptions**** (array sizes, input format, etc.)
    5.  ****Use a debugger**** (gdb, IDE debugger)
    6.  ****Rubber duck debugging****: Explain the code out loud


<a id="org3a05571"></a>

### TODO Command-Line Arguments

1.  argc and argv

    Programs can accept arguments from the command line.
    
        #include <iostream>
        using namespace std;
        
        int main(int argc, char* argv[]){
          cout << "Number of arguments: " << argc << endl;
        
          for(int i = 0; i < argc; i++){
            cout << "Argument " << i << ": " << argv[i] << endl;
          }
        
          return 0;
        }
    
    Running: `./program hello world` would output:
    
        Number of arguments: 3
        Argument 0: ./program
        Argument 1: hello
        Argument 2: world

2.  Processing Command-Line Parameters

        #include <iostream>
        #include <cstdlib>
        using namespace std;
        
        int main(int argc, char* argv[]){
          if(argc != 3){
            cout << "Usage: " << argv[0] << " <num1> <num2>" << endl;
            return 1;
          }
        
          int num1 = atoi(argv[1]);
          int num2 = atoi(argv[2]);
        
          cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
        
          return 0;
        }

3.  Exercises

    1.  **Basic**: Write a program that takes a name as a command-line argument and prints a greeting.
    2.  **Intermediate**: Create a program that takes a filename as an argument and displays its contents.
    3.  **Challenge**: Create a command-line calculator that takes an operation (+, -, \*, /) and two numbers.


<a id="org8ead4f7"></a>

### TODO Lab Projects

1.  LAB: Implement Search and Sort

    Create a program that:
    
    -   Reads numbers from a file into a vector
    -   Implements both linear and binary search
    -   Implements selection sort
    -   Allows user to search for values
    -   Displays sorted results

2.  LAB: String Analysis Tool

    Create a comprehensive string analyzer that:
    
    -   Reads a text file
    -   Counts words, lines, characters
    -   Finds most common words
    -   Checks for palindromes
    -   Generates statistics report

3.  LAB: Command-Line Calculator

    Create a calculator that works from command line:
    
        ./calc add 5 3      # Outputs: 8
        ./calc multiply 4 7 # Outputs: 28
        ./calc power 2 8    # Outputs: 256
        ./calc factorial 5  # Outputs: 120


<a id="org8b6c96b"></a>

# TODO Extended example: Let's play shop

In this example we'll be writing a small program that prints out a menu, let's you select items and quantities to purchase, and prints out your total at the end.

We'll do this program "the hard way" at first, which isn't very flexible, but we'll end up showing some more features of C++ that will let us simplify and refactor this code.


<a id="orgcefb527"></a>

# TODO Extended example: An Adventure Game

In this example we're going to look at how to make an old-school text-adventure game in C++. 


<a id="org563fb1c"></a>

# Project Ideas


<a id="orge7c4f84"></a>

## Mini-Projects (After Major Sections)

These projects are designed to be completed after finishing specific sections of the course. Each should take 1-3 hours to complete.


<a id="org50c149a"></a>

### After Loops

-   **Multiplication Quiz Game**: Create a timed quiz that asks multiplication problems, keeps score, and gives feedback. Include difficulty levels.
-   **Password Strength Checker**: Check passwords for length, uppercase, lowercase, numbers, and special characters. Give a strength score.


<a id="orga252fb8"></a>

### After Arrays

-   **Class Attendance Tracker**: Track attendance for a class of students over multiple days. Calculate attendance percentages.
-   **Simple Statistics Calculator**: Input a dataset and calculate mean, median, mode, and standard deviation.


<a id="org387c37e"></a>

### After Functions

-   **Temperature Converter Suite**: Convert between Celsius, Fahrenheit, and Kelvin with a menu-driven interface.
-   **Geometry Calculator**: Calculate areas, perimeters, and volumes for various shapes using dedicated functions.


<a id="org13bed4f"></a>

### After Strings

-   **Text-based Wordle Clone**: Implement the popular word guessing game with colored hints (use symbols for colors).
-   **Simple Text Editor Commands**: Implement find/replace, word count, and case conversion operations.


<a id="orgc9ed528"></a>

### After Data Validation

-   **Robust ATM Simulator**: Handle deposits, withdrawals, balance checks with proper validation and error handling.
-   **Date Calculator**: Calculate days between dates, add days to dates, handle leap years properly.


<a id="org69ce10a"></a>

## Larger Projects

These are comprehensive projects that integrate multiple concepts. Each should take 5-10 hours to complete.


<a id="org0f77ac2"></a>

### Store Management System

Create an inventory management system with the following features:

-   Add/remove products with prices and quantities
-   Search products by name or category
-   Generate sales reports
-   Track low inventory and suggest reorders
-   Apply discounts and calculate totals

Skills practiced: Arrays, functions, data validation, formatting


<a id="orgee8fdc5"></a>

### Grade Calculator System

Build a complete gradebook application:

-   Support multiple students and multiple assignments
-   Weight different assignment categories (homework, tests, projects)
-   Drop lowest scores option
-   Calculate letter grades with +/- modifiers
-   Generate grade reports with statistics

Skills practiced: 2D arrays, functions with references, data formatting


<a id="org356ba3d"></a>

### Game Collection

Implement 2-3 classic games in a single program:

-   **Tic-Tac-Toe**: Two-player game with win detection
-   **Hangman**: Word guessing with ASCII art
-   **Number Baseball**: Guess a 4-digit number with hints

Include a main menu, score tracking, and play-again options
Skills practiced: Arrays, string manipulation, game logic, input validation


<a id="orgac2c121"></a>

### Data Analysis Tool

Create a program that reads survey or experimental data:

-   Import data from user input or predefined datasets
-   Calculate statistical summaries (mean, median, mode, range)
-   Find correlations between variables
-   Generate formatted reports with findings
-   Handle missing or invalid data gracefully

Skills practiced: File I/O concepts, arrays, mathematical functions, error handling


<a id="org153b675"></a>

### Encryption Tool Suite

Build a collection of encryption/decryption methods:

-   Caesar cipher with custom shifts
-   Substitution cipher with custom keys
-   Vigenère cipher
-   ROT13
-   Include encode/decode modes and file support

Skills practiced: String manipulation, algorithms, modular programming


<a id="org723b6b7"></a>

## Project Guidelines

For each project, students should:

1.  Plan the program structure before coding
2.  Break the problem into smaller functions
3.  Include input validation and error handling
4.  Provide clear user instructions
5.  Test with various inputs including edge cases
6.  Comment code appropriately
7.  Consider adding extra features for bonus points


<a id="orgd2ef056"></a>

## Common Mistakes to Avoid

-   Not validating user input
-   Forgetting to initialize variables
-   Array index out of bounds
-   Integer division when float division is needed
-   Not handling the fail state of cin
-   Memory issues with C-style strings
-   Forgetting break statements in switch cases


<a id="orge1ff4cb"></a>

# Sample Solutions

This chapter provides sample solutions for selected exercises from each section. Remember that there are often multiple correct ways to solve a problem in programming!


<a id="org3d839da"></a>

## Hello World Solutions


<a id="orgffaef87"></a>

### Basic: Name and Joke

    #include <iostream>
    using namespace std;
    
    int main(){
      cout << "My name is Alex" << endl;
      cout << "Why do programmers prefer dark mode?" << endl;
      cout << "Because light attracts bugs!" << endl;
      return 0;
    }


<a id="orgab6521c"></a>

### Intermediate: ASCII Art Box

    #include <iostream>
    using namespace std;
    
    int main(){
      cout << "***********" << endl;
      cout << "* Hello   *" << endl;
      cout << "***********" << endl;
      return 0;
    }


<a id="orgc10b226"></a>

## String I/O Solutions


<a id="orgf9b1012"></a>

### Basic: Last, First Format

    #include <iostream>
    using namespace std;
    
    int main(){
      string firstName, lastName;
    
      cout << "Enter your first name: ";
      cin >> firstName;
      cout << "Enter your last name: ";
      cin >> lastName;
    
      cout << lastName << ", " << firstName << endl;
      return 0;
    }


<a id="org5ac8818"></a>

### Challenge: Mad Libs

    #include <iostream>
    using namespace std;
    
    int main(){
      string noun, verb, adjective, adverb;
    
      cout << "Enter a noun: ";
      cin >> noun;
      cout << "Enter a verb: ";
      cin >> verb;
      cout << "Enter an adjective: ";
      cin >> adjective;
      cout << "Enter an adverb: ";
      cin >> adverb;
    
      cout << "The " << adjective << " " << noun 
           << " decided to " << verb << " " << adverb << "." << endl;
      cout << "Everyone was shocked when the " << noun 
           << " began to " << verb << " so " << adverb << "!" << endl;
    
      return 0;
    }


<a id="orgc76c2d0"></a>

## Arithmetic Solutions


<a id="orgd32ecd3"></a>

### Intermediate: Tip Calculator

    #include <iostream>
    #include <iomanip>
    using namespace std;
    
    int main(){
      double billAmount, tipPercent;
    
      cout << "Enter the bill amount: $";
      cin >> billAmount;
      cout << "Enter tip percentage (e.g., 15 for 15%): ";
      cin >> tipPercent;
    
      double tipAmount = billAmount * (tipPercent / 100);
      double total = billAmount + tipAmount;
    
      cout << fixed << setprecision(2);
      cout << "Bill: $" << billAmount << endl;
      cout << "Tip:  $" << tipAmount << endl;
      cout << "Total: $" << total << endl;
    
      return 0;
    }


<a id="org3a1f798"></a>

### Challenge: Compound Interest

    #include <iostream>
    #include <iomanip>
    #include <cmath>
    using namespace std;
    
    int main(){
      double principal, rate, time, n;
    
      cout << "Enter principal amount: $";
      cin >> principal;
      cout << "Enter annual interest rate (as percentage): ";
      cin >> rate;
      cout << "Enter time in years: ";
      cin >> time;
      cout << "Enter number of times compounded per year: ";
      cin >> n;
    
      // Convert percentage to decimal
      rate = rate / 100;
    
      // Formula: A = P(1 + r/n)^(nt)
      double amount = principal * pow(1 + rate/n, n*time);
    
      cout << fixed << setprecision(2);
      cout << "Final amount: $" << amount << endl;
      cout << "Interest earned: $" << amount - principal << endl;
    
      return 0;
    }


<a id="org3971385"></a>

## Boolean/If-Statement Solutions


<a id="org2dd3f81"></a>

### Intermediate: Grade Calculator

    #include <iostream>
    using namespace std;
    
    int main(){
      double score;
    
      cout << "Enter your numeric score (0-100): ";
      cin >> score;
    
      if(score >= 90){
        cout << "Grade: A" << endl;
      }
      else if(score >= 80){
        cout << "Grade: B" << endl;
      }
      else if(score >= 70){
        cout << "Grade: C" << endl;
      }
      else if(score >= 60){
        cout << "Grade: D" << endl;
      }
      else{
        cout << "Grade: F" << endl;
      }
    
      return 0;
    }


<a id="orgf36bbb1"></a>

### Challenge: Eligibility Checker

    #include <iostream>
    using namespace std;
    
    int main(){
      int age;
    
      cout << "Enter your age: ";
      cin >> age;
    
      cout << "\nBased on your age, you can legally:" << endl;
    
      if(age >= 16){
        cout << "✓ Drive (in most states)" << endl;
      }
      if(age >= 18){
        cout << "✓ Vote" << endl;
        cout << "✓ Join the military" << endl;
      }
      if(age >= 21){
        cout << "✓ Purchase alcohol" << endl;
      }
      if(age >= 25){
        cout << "✓ Rent a car (without extra fees)" << endl;
      }
      if(age >= 35){
        cout << "✓ Run for President" << endl;
      }
    
      if(age < 16){
        cout << "Sorry, you'll need to wait " << 16 - age 
    	 << " years before you can drive!" << endl;
      }
    
      return 0;
    }


<a id="org2835ae1"></a>

## While Loop Solutions


<a id="org32158f7"></a>

### Intermediate: Password Checker

    #include <iostream>
    using namespace std;
    
    int main(){
      string password = "secret123";  // The correct password
      string userInput;
      int attempts = 0;
    
      while(userInput != password && userInput != "quit"){
        cout << "Enter password (or 'quit' to exit): ";
        cin >> userInput;
        attempts++;
    
        if(userInput == password){
          cout << "Access granted! It took you " << attempts << " attempts." << endl;
        }
        else if(userInput != "quit"){
          cout << "Incorrect password. Try again." << endl;
        }
      }
    
      if(userInput == "quit"){
        cout << "Goodbye!" << endl;
      }
    
      return 0;
    }


<a id="orgb42cc27"></a>

## Random Number Solutions


<a id="orgd252549"></a>

### Intermediate: Rock, Paper, Scissors

    #include <iostream>
    #include <cstdlib>
    using namespace std;
    
    int main(){
      srand(time(0));
    
      string choices[3] = {"rock", "paper", "scissors"};
      string userChoice;
    
      cout << "Enter your choice (rock/paper/scissors): ";
      cin >> userChoice;
    
      int computerIndex = rand() % 3;
      string computerChoice = choices[computerIndex];
    
      cout << "You chose: " << userChoice << endl;
      cout << "Computer chose: " << computerChoice << endl;
    
      if(userChoice == computerChoice){
        cout << "It's a tie!" << endl;
      }
      else if((userChoice == "rock" && computerChoice == "scissors") ||
    	  (userChoice == "paper" && computerChoice == "rock") ||
    	  (userChoice == "scissors" && computerChoice == "paper")){
        cout << "You win!" << endl;
      }
      else{
        cout << "Computer wins!" << endl;
      }
    
      return 0;
    }


<a id="org8070764"></a>

### Challenge: Coin Flip Statistics

    #include <iostream>
    #include <cstdlib>
    #include <iomanip>
    using namespace std;
    
    int main(){
      srand(time(0));
    
      int flips;
      cout << "How many times should I flip the coin? ";
      cin >> flips;
    
      int heads = 0;
      int tails = 0;
    
      for(int i = 0; i < flips; i++){
        if(rand() % 2 == 0){
          heads++;
        }
        else{
          tails++;
        }
      }
    
      double headsPercent = (heads * 100.0) / flips;
      double tailsPercent = (tails * 100.0) / flips;
    
      cout << fixed << setprecision(2);
      cout << "\nResults after " << flips << " flips:" << endl;
      cout << "Heads: " << heads << " (" << headsPercent << "%)" << endl;
      cout << "Tails: " << tails << " (" << tailsPercent << "%)" << endl;
    
      return 0;
    }


<a id="org098d5fb"></a>

## For-Loop Solutions


<a id="org6798a4b"></a>

### Basic: Fibonacci Numbers

    #include <iostream>
    using namespace std;
    
    int main(){
      int prev1 = 0, prev2 = 1;
    
      cout << "First 20 Fibonacci numbers:" << endl;
      cout << prev1 << " " << prev2 << " ";
    
      for(int i = 2; i < 20; i++){
        int current = prev1 + prev2;
        cout << current << " ";
        prev1 = prev2;
        prev2 = current;
      }
      cout << endl;
    
      return 0;
    }


<a id="orgc6fae30"></a>

### Intermediate: Triangle Pattern

    #include <iostream>
    using namespace std;
    
    int main(){
      int height;
    
      cout << "Enter triangle height: ";
      cin >> height;
    
      for(int i = 1; i <= height; i++){
        for(int j = 0; j < i; j++){
          cout << "*";
        }
        cout << endl;
      }
    
      return 0;
    }


<a id="org1994aa8"></a>

### Challenge: Prime Numbers

    #include <iostream>
    #include <cmath>
    using namespace std;
    
    bool isPrime(int n){
      if(n <= 1) return false;
      if(n == 2) return true;
      if(n % 2 == 0) return false;
    
      for(int i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0) return false;
      }
      return true;
    }
    
    int main(){
      cout << "Prime numbers between 1 and 100:" << endl;
    
      for(int i = 2; i <= 100; i++){
        if(isPrime(i)){
          cout << i << " ";
        }
      }
      cout << endl;
    
      return 0;
    }


<a id="org02db1f5"></a>

## Array Solutions


<a id="org9021984"></a>

### Basic: Temperature Analysis

    #include <iostream>
    using namespace std;
    
    int main(){
      double temps[7];
    
      cout << "Enter temperatures for 7 days:" << endl;
      for(int i = 0; i < 7; i++){
        cout << "Day " << i+1 << ": ";
        cin >> temps[i];
      }
    
      int warmestDay = 0;
      int coldestDay = 0;
    
      for(int i = 1; i < 7; i++){
        if(temps[i] > temps[warmestDay]){
          warmestDay = i;
        }
        if(temps[i] < temps[coldestDay]){
          coldestDay = i;
        }
      }
    
      cout << "Warmest day was Day " << warmestDay + 1 
           << " with " << temps[warmestDay] << " degrees" << endl;
      cout << "Coldest day was Day " << coldestDay + 1 
           << " with " << temps[coldestDay] << " degrees" << endl;
    
      return 0;
    }


<a id="org62f0999"></a>

### Intermediate: Array Reversal

    #include <iostream>
    using namespace std;
    
    int main(){
      int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
      cout << "Original array: ";
      for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
      }
      cout << endl;
    
      // Reverse in-place
      for(int i = 0; i < 5; i++){
        int temp = arr[i];
        arr[i] = arr[9-i];
        arr[9-i] = temp;
      }
    
      cout << "Reversed array: ";
      for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
      }
      cout << endl;
    
      return 0;
    }


<a id="orgf447881"></a>

## String Operation Solutions


<a id="orgd1ae4e1"></a>

### Basic: Vowel Counter

    #include <iostream>
    #include <string>
    using namespace std;
    
    int main(){
      string text;
      int vowelCount = 0;
    
      cout << "Enter some text: ";
      getline(cin, text);  // Use getline to get entire line including spaces
    
      for(int i = 0; i < text.length(); i++){
        char c = tolower(text[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
          vowelCount++;
        }
      }
    
      cout << "Number of vowels: " << vowelCount << endl;
    
      return 0;
    }


<a id="org851fd19"></a>

### Intermediate: Palindrome Checker

    #include <iostream>
    #include <string>
    using namespace std;
    
    int main(){
      string text;
      cout << "Enter a word: ";
      cin >> text;
    
      bool isPalindrome = true;
      int len = text.length();
    
      for(int i = 0; i < len/2; i++){
        if(tolower(text[i]) != tolower(text[len-1-i])){
          isPalindrome = false;
          break;
        }
      }
    
      if(isPalindrome){
        cout << "\"" << text << "\" is a palindrome!" << endl;
      }
      else{
        cout << "\"" << text << "\" is not a palindrome." << endl;
      }
    
      return 0;
    }


<a id="org6b7fa95"></a>

## Switch Statement Solutions


<a id="orgd21aa88"></a>

### Intermediate: Calculator

    #include <iostream>
    using namespace std;
    
    int main(){
      double num1, num2;
      char operation;
    
      cout << "Enter first number: ";
      cin >> num1;
      cout << "Enter operation (+, -, *, /): ";
      cin >> operation;
      cout << "Enter second number: ";
      cin >> num2;
    
      switch(operation){
        case '+':
          cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
          break;
        case '-':
          cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
          break;
        case '*':
          cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
          break;
        case '/':
          if(num2 != 0){
    	cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
          }
          else{
    	cout << "Error: Division by zero!" << endl;
          }
          break;
        default:
          cout << "Invalid operation!" << endl;
      }
    
      return 0;
    }


<a id="org92ebf87"></a>

## Function Solutions


<a id="org3a729e8"></a>

### Basic: Larger of Two Numbers

    #include <iostream>
    using namespace std;
    
    int larger(int a, int b){
      if(a > b){
        return a;
      }
      else{
        return b;
      }
      // Could also write: return (a > b) ? a : b;
    }
    
    int main(){
      int num1, num2;
    
      cout << "Enter two numbers: ";
      cin >> num1 >> num2;
    
      cout << "The larger number is: " << larger(num1, num2) << endl;
    
      return 0;
    }


<a id="org1c44852"></a>

### Intermediate: Area Calculators

    #include <iostream>
    #include <cmath>
    using namespace std;
    
    double circleArea(double radius){
      return 3.14159 * radius * radius;
    }
    
    double rectangleArea(double length, double width){
      return length * width;
    }
    
    double triangleArea(double base, double height){
      return 0.5 * base * height;
    }
    
    int main(){
      int choice;
    
      cout << "Area Calculator" << endl;
      cout << "1. Circle" << endl;
      cout << "2. Rectangle" << endl;
      cout << "3. Triangle" << endl;
      cout << "Choose shape (1-3): ";
      cin >> choice;
    
      switch(choice){
        case 1:{
          double radius;
          cout << "Enter radius: ";
          cin >> radius;
          cout << "Area: " << circleArea(radius) << endl;
          break;
        }
        case 2:{
          double length, width;
          cout << "Enter length: ";
          cin >> length;
          cout << "Enter width: ";
          cin >> width;
          cout << "Area: " << rectangleArea(length, width) << endl;
          break;
        }
        case 3:{
          double base, height;
          cout << "Enter base: ";
          cin >> base;
          cout << "Enter height: ";
          cin >> height;
          cout << "Area: " << triangleArea(base, height) << endl;
          break;
        }
        default:
          cout << "Invalid choice!" << endl;
      }
    
      return 0;
    }


<a id="org32870f6"></a>

## Pass by Reference Solutions


<a id="orgb195c8e"></a>

### Basic: Swap Function

    #include <iostream>
    using namespace std;
    
    void swap(int &a, int &b){
      int temp = a;
      a = b;
      b = temp;
    }
    
    int main(){
      int x = 5, y = 10;
    
      cout << "Before swap: x = " << x << ", y = " << y << endl;
      swap(x, y);
      cout << "After swap: x = " << x << ", y = " << y << endl;
    
      return 0;
    }


<a id="orgf291954"></a>

### Intermediate: Division with Quotient and Remainder

    #include <iostream>
    using namespace std;
    
    int divide(int dividend, int divisor, int &remainder){
      remainder = dividend % divisor;
      return dividend / divisor;
    }
    
    int main(){
      int num1, num2;
      int remainder;
    
      cout << "Enter dividend: ";
      cin >> num1;
      cout << "Enter divisor: ";
      cin >> num2;
    
      if(num2 != 0){
        int quotient = divide(num1, num2, remainder);
        cout << num1 << " / " << num2 << " = " << quotient 
    	 << " with remainder " << remainder << endl;
      }
      else{
        cout << "Error: Cannot divide by zero!" << endl;
      }
    
      return 0;
    }


<a id="orgf4a8862"></a>

### Challenge: Array Statistics

    #include <iostream>
    using namespace std;
    
    double analyzeArray(int arr[], int size, int &min, int &max){
      min = arr[0];
      max = arr[0];
      double sum = arr[0];
    
      for(int i = 1; i < size; i++){
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
        sum += arr[i];
      }
    
      return sum / size;  // Return average
    }
    
    int main(){
      int numbers[10];
      int min, max;
    
      cout << "Enter 10 numbers:" << endl;
      for(int i = 0; i < 10; i++){
        cout << "Number " << i+1 << ": ";
        cin >> numbers[i];
      }
    
      double avg = analyzeArray(numbers, 10, min, max);
    
      cout << "\nStatistics:" << endl;
      cout << "Minimum: " << min << endl;
      cout << "Maximum: " << max << endl;
      cout << "Average: " << avg << endl;
    
      return 0;
    }


<a id="org5efcea6"></a>

## Data Validation Solutions


<a id="org6f826e6"></a>

### Challenge: Date Validator

    #include <iostream>
    using namespace std;
    
    bool isLeapYear(int year){
      return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
    
    bool isValidDate(int month, int day, int year){
      if(year < 1 || year > 9999) return false;
      if(month < 1 || month > 12) return false;
    
      int daysInMonth;
      switch(month){
        case 2:
          daysInMonth = isLeapYear(year) ? 29 : 28;
          break;
        case 4: case 6: case 9: case 11:
          daysInMonth = 30;
          break;
        default:
          daysInMonth = 31;
      }
    
      return day >= 1 && day <= daysInMonth;
    }
    
    int main(){
      int month, day, year;
    
      cout << "Enter a date (MM DD YYYY): ";
      cin >> month >> day >> year;
    
      while(cin.fail() || !isValidDate(month, day, year)){
        if(cin.fail()){
          cin.clear();
          cin.ignore(256, '\n');
          cout << "Invalid input! Please enter numbers only." << endl;
        }
        else{
          cout << "Invalid date! ";
          if(month < 1 || month > 12){
    	cout << "Month must be 1-12." << endl;
          }
          else if(month == 2 && day > 29){
    	cout << "February cannot have more than 29 days." << endl;
          }
          else if(month == 2 && day == 29 && !isLeapYear(year)){
    	cout << year << " is not a leap year." << endl;
          }
          else{
    	cout << "Day is invalid for this month." << endl;
          }
        }
        cout << "Enter a date (MM DD YYYY): ";
        cin >> month >> day >> year;
      }
    
      cout << "Valid date: " << month << "/" << day << "/" << year << endl;
    
      return 0;
    }


<a id="org087bb19"></a>

## Notes on Solutions

These solutions demonstrate various programming concepts and best practices:

1.  ****Input validation****: Always check user input for validity
2.  ****Edge cases****: Consider special cases like division by zero
3.  ****Code organization****: Use functions to break down complex problems
4.  ****Comments****: While not heavily commented here, production code should include explanations
5.  ****Efficiency****: Some solutions prioritize clarity over optimization for learning purposes
6.  ****Alternative approaches****: Many problems have multiple valid solutions

Remember: The best solution is one that works correctly, is readable, and can be maintained. As you gain experience, you'll develop your own coding style and preferences.


# Footnotes

<sup><a id="fn.1" href="#fnr.1">1</a></sup> bet you never saw that coming!

<sup><a id="fn.2" href="#fnr.2">2</a></sup> Is that too specific? Is the author of this portion telling on themselves?

<sup><a id="fn.3" href="#fnr.3">3</a></sup> A compiler is a thing that takes source code and turns it into a stand alone program. The act of turning the code into the stand alone program is called "compiling". If you dealt with Python or JavaScript or even something like Scratch before you were probably interacting with "interpreters", which are programs that take the code and run it. Now, some people talk about "compiled" or "interpreted" languages. This is wrong. A language per se isn't compiled or interpreted. A language is a language and can be run&#x2014;albeit slowly&#x2014;with a pencil and paper and no compiler or interpreter in sight.

<sup><a id="fn.4" href="#fnr.4">4</a></sup> Oh boy, are types actually a huge topic. Way bigger than you'd think. Okay, so in C++ types are very weak. They prevent fairly limited kinds of errors. They won't let you treat an int as a string or visa versa. But! As we'll see in a bit they let you still do some pretty weird things like conflate 0,1, `true`, and `false`. The types in C++ also don't prevent errors like blasting past the end of a list of items and grabbing random chunks of the computer's memory. You can break C++ code in so many ways it honestly makes you wonder what the point of types at all, are, if this is what people tell you typed languages are like<sup><a id="fnr.5" class="footref" href="#fn.5" role="doc-backlink">5</a></sup>. A-ha! But, in reality, types in programming languages can be terrifyingly powerful. Rust uses types to guarantee memory safety. Haskell uses types to ensure that the compiler can do absolutely wild optimizations, including writing programs that involve generating "infinite data". Languages like Agda and Coq use types to bridge the gap between how mathematicians work and how programmers work, making the act of writing theorems and proofs a kind of programming! It's a great topic. Feel free to ask me about it.

<sup><a id="fn.5" href="#fnr.5">5</a></sup> Oh look a footnote in a footnote: I say "typed" and "untyped" rather than "static" and "dynamic". This is more technically correct and I will not be taking questions at this time.

<sup><a id="fn.6" href="#fnr.6">6</a></sup> I literally forget constantly and have to go back and fix my examples. If you've had me for in-person lecture you have definitely seen this happen.

<sup><a id="fn.7" href="#fnr.7">7</a></sup> Okay, so I do actually encourage you to&#x2014;whenever possible&#x2014;try to answer questions you have about how code works by trying to make a program that tests out the idea. This will get easier as you learn more about coding, but it's just a good habit to get into and you'd be surprised by how many people never learn to think this way: coding is not a passive enterprise but an active art practice. Learn by trying things!

<sup><a id="fn.8" href="#fnr.8">8</a></sup> Okay type systems, in general, can actually do so much more than this but in C/C++ this is one of the primary reasons. If you take a systems programming class, you'll learn more about *why* C/C++ work this way.

<sup><a id="fn.9" href="#fnr.9">9</a></sup> This is only true for memory allocated, allocated being the technical term for setting up the dividers on the storage wall and putting the labels on the cubbyhole, *on the stack*. All the memory you're allocating in this class&#x2014;every variable you create, every array you make&#x2014;will be on the stack. There is *another* way to allocate memory that is more flexible but also harder to manage that can persist even after the program is closed. That's not a neat feature though, that's called a "memory leak" and is the reason why Chrome and Firefox seem to swell up to 20GB of RAM if you leave them open long enough. It still can't be used for long-term storage!

<sup><a id="fn.10" href="#fnr.10">10</a></sup> Okay, what on earth does "less precise" mean in this context? Okay, let's talk about sizes of infinity. No, really, I promise that this isn't a tangent. So the whole numbers, the integers, are infinite. You can start counting in either direction&#x2014;positive or negative&#x2014;and you'll never reach the end. This is the smallest infinity though. The numbers that have decimals, which are the "real numbers", are much bigger than the whole numbers. There are more real numbers between 0 and 1 than the entirety of the integers. The reason for this is, in a sense, is because a real number can have an infinite number of digits to the right of the decimal point. The problem for us, as computer scientists, is that there's no way to represent "an infinite number of digits" in a way that can fit in a finite amount of memory. So, instead, we have to compromise and instead of representing **all** possible real numbers we represent **some** of them. How well we can represent a number is the "precision". The higher the precision, the more fine-grained of distinctions we can make between representing two real numbers.

<sup><a id="fn.11" href="#fnr.11">11</a></sup> Computer scientists, when talking about the "meaning" of things in programming borrow a word from the linguistics community and we talk about the *semantics* of a program. So the *semantics* of "the number of wins" should be a whole number, an integer, because there's no such thing as "a partial win". So our point can be rephrased as saying that "the type of the data should fit the *semantics* of the data".
