Author  : [Srinikethan Mankala
    ](mailto:sriz1392@gmail.com)

<!-- Title and Heading Content -->
# Asymptotic Analysis

Analysing what happens to an algorithm as the number of inputs become very large is called "*Asymptotic Analysis*".

When we are measuring algorithms & data structures we are interested in 2 things:
* **Operational Complexity**</br>
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  Amount of time taken for the operation to complete

* **Resource complexity**</br>
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
    Amount of Memory (resources) an algorithm uses

*Computation Complexity analysis* would provide the **"Time"** for execution and **"Space"** required for execution.

Big-O notation gives an upper bound of the complexity in the "*worst case*".</br>


__Rate of Growth__ </br>
This describes how an algorithm's Complexity changes as the input size grows
This is commonly expressed as Big-O notation.

1. **Constant** - O (1)

    An O (1) algorithm is one whose complexity is constant regardless of how large the input size is. The size of input do not influence the time, the operation takes.

2. **Linear** -  O (n)

    An O(n) algorithm is one whose complexity grows linearly with size of
    input.</br>
    For an input size of 1, it takes 5 ms -->then for 1000 takes 5 seconds.</br>
    eg : *Loop mechanisms*

3. **Logarithmic** - O (Log n)

    An O(Log n) algorithm is one whose complexity is logarithmic to its size. Most of the divide & conquer algorithms all fall into this.</br>
    eg : *binary Search Tree*

4. **Linearithmic** - O (n log n)

    A loglinear in an algortihm that has complexity of O(n log n). Some divide &
    conquer algorithms fall under this. </br>
    eg : *Merge sort & quicksort*

5. **Quadratic** -   O ($n^2$)

    An algorithm whose COmplexity is quadratic to its size. 
    Quadratic algorithms do not scale well as input size grows.</br>
    eg : *bubble sort*


6. **Cubic** - O ($n^3$)
7. **Exponential** - O( $b^n$ ) ; b> 1
8. **Factorial**   - O( $n!$ )