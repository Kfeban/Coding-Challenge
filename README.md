# CODING CHALLENGE #

# -PART 1


# A. How To Find a Single Salary Given a Non-empty Array of Intergers(Salaries) using "C" Programming language

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




# - PART 2

# B. How to Find First and Last Position of Element in Sorted Array Given an array of integers numbers sorted in non-decreasing order

## i. Inroduction

This program solves the problem of finding the first and last occurrence of a target integer in a sorted array of integers. Given a sorted array and a target integer, the goal is to determine the indices of the first and last occurrences of the target integer in the array.


***1.2 Problem statement*** <P>
- find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].

****Example 1****

Input: numbers = [5,7,7,8,8,10], target = 8
Output: [3,4]

****Example 2****

Input: numbers = [5,7,7,8,8,10], target = 6
Output: [-1,-1]


****Example 3****

Input: numbers = [], target = 0
Output: [-1,-1]

****Constraints****
• 0 <= numbers.length <= 105
• -109 <= numbers[i] <= 1011
• numbers is a non-decreasing array.
• 0 <= target <= 1011

## ii.Table on content
- 1. Introduction
     - 1.2 Problem statement
- 2. Table of content
- 3. Approach
- 4. Constaints
- 5. How to use
- 6. Code layout
- 7. Results/output
- 8. Conclusion
 
## iii.Approach

- [x] ***Binary search approach***

The program utilizes a modified binary search algorithm to find the first and last occurrences of the target integer. By performing two separate binary searches, we can efficiently locate the first and last occurrences in a logarithmic time complexity.

The algorithm is as follows:
1. Perform a binary search to find the first occurrence of the target integer:
     - Initialize low and high pointers to the first and last indices of the array.
     - While low is less than or equal to high:
     - Calculate the mid index as the average of low and high.
     - If the element at the mid index is equal to the target integer:
     - Check if the mid index is the first occurrence or if the element at the previous index is different.
     - If true, return the mid index as the first occurrence.
     - Otherwise, update the high pointer to mid - 1 and continue the binary search.
     - If the element at the mid index is less than the target integer, update the low pointer to mid + 1.
     - If the element at the mid index is greater than the target integer, update the high pointer to mid - 1.
     - If the target integer is not found, return an appropriate value indicating that the target integer does not exist in the array.
2. Perform a binary search to find the last occurrence of the target integer:
    - Initialize low and high pointers to the first and last indices of the array.
    - While low is less than or equal to high:
    - Calculate the mid index as the average of low and high.
    - If the element at the mid index is equal to the target integer:
    - Check if the mid index is the last occurrence or if the element at the next index is different.
    - If true, return the mid index as the last occurrence.
    - Otherwise, update the low pointer to mid + 1 and continue the binary search.
    - If the element at the mid index is less than the target integer, update the low pointer to mid + 1.
    - If the element at the mid index is greater than the target integer, update the high pointer to mid - 1.
    - If the target integer is not found, return an appropriate value indicating that the target integer does not exist in the array.

The program is designed to efficiently handle large arrays and provide accurate results for finding the first and last occurrences of the target integer.

## iv.Constraints

By considering these constraints, the program can handle arrays of different lengths, values, and a specified target value while accurately identifying the first and last occurrence of the target value in the array. It is important to ensure that the input array is sorted and the target value falls within the specified range for the program to operate correctly.

1. Array Length: The length of the input array, numbers, satisfies the constraint 0 <= numbers.length <= 10^5. This means that the array can have a length ranging from 0 to 100,000 elements. The program is designed to handle arrays of varying lengths within this range efficiently.

2. Element Values: Each element in the numbers array adheres to the constraint -10^9 <= numbers[i] <= 10^11. This indicates that the values of the elements in the array can range from -1,000,000,000 to 100,000,000,000. The program is built to handle such wide-ranging values and perform the necessary operations accurately.

3. Sorted Array: The numbers array is assumed to be in non-decreasing order. This constraint ensures that the binary search algorithm can be applied correctly. The program expects the input array to be sorted in order for it to function accurately.

4. Target Value: The constraint for the target value is 0 <= target <= 10^11. This means that the target value can range from 0 to 100,000,000,000. The program is designed to handle target values within this range.


## v.How to use
1. Copy the code from the code block.
2. Compile the code using a C compiler.
3. Run the compiled executable.
4. The program will output the the first and last elemenet.
Ensure that you have a C compiler installed on your system before attempting to compile the code.

Feel free to modify the code and experiment with different test cases to test its functionality and performance.


## vi.Code layout
![image](https://github.com/Kfeban/Coding-Challenge/assets/151723266/6e5cd995-d116-4d66-bccd-8eae4eaf3071)
![image](https://github.com/Kfeban/Coding-Challenge/assets/151723266/6edb735c-c92f-45c1-ae6e-38abd4b100ce)
![image](https://github.com/Kfeban/Coding-Challenge/assets/151723266/36a11a67-c99b-450b-ae2a-99415422cf6d)


## vii.Results/Output

![image](https://github.com/Kfeban/Coding-Challenge/assets/151723266/8cbdc8bc-f9d2-4aab-9eac-c9f0979a49bc)

The above output meets our given constraints


## viii.Conclusion

In conclusion, the "First and Last Integer" program is designed to efficiently identify the first and last occurrence of a target integer within a sorted, non-decreasing array. The program adheres to the constraints, including the array length, element values, sorted array requirement, and target value range, to provide accurate results.

- By carefully considering the constraints, such as the array length ranging from 0 to 100,000 elements, element values within the range of -1,000,000,000 to 100,000,000,000, and the need for a sorted array, the program handles various scenarios effectively.

- The program's objective is to locate the first and last occurrence of the target integer, providing valuable information for further analysis or processing. It handles cases where the target integer may or may not exist in the array, gracefully indicating the absence of the target value when required.

- By adhering to these constraints and utilizing the program appropriately, users can confidently apply the "First and Last Integer" program to efficiently identify the first and last occurrence of a target integer in a sorted array, enabling more effective data manipulation and analysis.





