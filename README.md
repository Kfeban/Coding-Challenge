# How To Find a Single Salary Given a Non-empty Array of Intergers(Salaries) using "C" Programming language

## i.Introduction
This code wiil solve the problem of finding a single element(salary) in a non-empty array of integers(salaries) where every element appears twice except for one. The goal is to find that single element(salary).<p>

***1.2 Problem statement*** <P>
Given a non-empty array of integers salaries, every element appears twice except for one. Find 
that single one.<p>

****Example 1**** <p>
Input: salaries = [25000,25000,19000].

Output: 19000

****Example 2****
Input: salaries = [400000,110000,400000,110000,2000000]

Output: 2000000

****Example 3****

Input: salaries = [5000]

Output: 5000

****Constraints****

• 1 <= salaries.length <= 3 * 104

• -3 * 104 <= salaries[i] <= 3 * 1010

• Each element in the array appears twice except for one element which appears only once.

## ii.Table on content
- 1. Introduction
     - 1.2 Problem statement
- 2. Table of content
- 3. Approach
     
     - 3.1 Frequency Array approach
     
     - 3.2 Bitwise XOR Approach
- 4. Constaints
- 5. How to use
- 6. Code layout
- 7. Results/output
- 8. Conclusion 

## iii.Approach
To solve this problem,two approaches can be used used ;

- [x] ***3.1 Frequency array approach or The counting elements approach***
      <p>  It involves using an auxiliary array (in this case, frequency) to keep track of the frequencies or counts of each element in the input array (salaries).<p>
      ****Algorithm****<p>
1. Initialize a frequency array, frequency[], with the maximum possible size based on the given constraints, and initialize all elements to zero.
2. Iterate over the input array, salaries[], from index 0 to length-1.
    - Increment the frequency of the current salary by 1 in the frequency array.
3. Iterate over the frequency array, from index 0 to maximum possible salary value.
    - If the frequency at the current index is equal to 1, return the corresponding salary as the single salary.
4. If no single salary is found, return an appropriate value or error message indicating that no single salary exists in the input array.

This approach is commonly used when we need to count the occurrences of elements in an array or track the frequencies of certain values. It allows us to efficiently determine the count or frequency of each element by using an auxiliary array.

- [x] ***3.2 Bitwise XOR approach***
      <p> In this approach, the XOR operator (^) is applied to all the elements in the array. Since XORing a number with itself results in zero, and XORing zero with any number returns the number itself, XORing all the elements in the array will cancel out the duplicate elements, leaving only the single element that appears once.<P>
****Algorithm**** <P>
1. Initialize a variable called "singleSalary" with 0.
2. Iterate(repeat) through each element, "salary", in the given array "salaries".
3. Update the "singleSalary" by XORing it with the current "salary".
4. After the iteration, the "singleSalary" will contain the single salary that appears only once.
5. Return the value of "singleSalary" as the output.

The XOR-based approach has a time complexity of O(n), where n is the length of the array, as it only requires a single pass through the array to find the single element.:-

Using the XOR operation in this manner is a clever and efficient way to solve problems where elements appear in pairs, except for one unique element.:-

> [!NOTE]
> For the sake of this study,we will limit ourselves to th use of the Frequency array approach

## iv.Constraints

In the given conditions, the term "constraints" refers to the limitations or restrictions that are imposed on the problem or input data. These constraints define the boundaries or specific requirements that must be considered when solving the problem or designing an algorithm.
In the context of the problem statement you provided, the constraints specify certain limitations on the input data, including:
1. The length of the "salaries" array should be between 1 and 3 * 10^4 (inclusive). This means that the array should contain at least one element and can have a maximum of 30,000 elements.
2. The salary values in the array can range from -3 * 10^4 to 3 * 10^10 (inclusive). This indicates that the salaries can be negative or positive integers within the specified range.
3. Each element in the array appears twice, except for one element that appears only once. This constraint ensures that there is always a single salary value that occurs uniquely in the array.<p>



Considering these constraints, any solution or algorithm designed for the problem should adhere to these limitations and provide accurate results within the given boundaries.
When solving programming problems, understanding the constraints is crucial as it helps in determining the appropriate approach, optimizing the solution, and ensuring the solution works efficiently for the given input size and limitations.

## v.How to use
1. Copy the code from the code block.
2. Compile the code using a C compiler.
3. Run the compiled executable.
4. The program will output the single element for each provided test case.
Ensure that you have a C compiler installed on your system before attempting to compile the code.

Feel free to modify the code and experiment with different test cases to test its functionality and performance.

## vi.Code represenattion on compiler

![image](https://github.com/Kfeban/Coding-Challenge/assets/151723266/3ef2feb0-ce55-4d0f-a450-6ea530a76803)[^1]: image 2 of code.
![image](https://github.com/Kfeban/Coding-Challenge/assets/151723266/17b7bdde-898b-4d18-9dd0-94bbd79b8d9a)[^2]: image 2 of code.

## vii.Results/Output
The output of our code will be 19000.This is because of the following;

****exapmle 1**** 

- The salary that satisfies all our conditions/constraints is 19000.

****example 2****

- The salary 200,000 satisfies our condition of being the single salary but it doesn't satisfy the condition of being in the maximum salary ,thus greater than 30,0001.

****example 3****

- There is no output .This is because there is just a sinlgle element  in the array.

## viii.Conclusion

The Single Salary program provides an efficient solution for finding a single element in a non-empty array of salaries, where every element appears twice except for one. By applying either the Frequency Array approach or the XOR-based approach, we can accurately identify the single salary in the array.

The Frequency Array approach involves initializing a frequency array with the maximum possible size based on the given constraints. The array is then populated by counting the occurrences of each salary value in the input array. By iterating over the frequency array, we can find the salary with only one occurrence, which represents the single salary in the input array.

Alternatively, the XOR-based approach utilizes the XOR operator to cancel out the duplicate elements in the array, leaving only the single element. By performing the XOR operation on all the elements in the array, we can efficiently determine the single salary.

Both approaches yield a time complexity of O(n), where n is the length of the input array. This ensures fast and scalable performance even for large arrays.


