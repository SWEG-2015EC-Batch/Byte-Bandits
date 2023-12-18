1. Problem Description
Print a pattern of increasing numbers in a tabular format based on user input for number of rows and columns.

2. Problem Analysis   
- Inputs:  
    - Rows (number of rows for pattern)
    - Columns (number of columns for pattern)
- Process:
    - Use nested loops to print numbers 
        - Outer loop controls rows
        - Inner loop controls columns
    - Print numbers in sequence, incrementing by 1 after each print
    - Add tab spacing between numbers  
    - Move to next line after each row
- Outputs:  
    - Number pattern based on input rows and columns
3. Algorithm

    1. Start
    2. Take rows and columns input from user
    3. Initialize number (num) to 1 
    4. Use outer for loop from 0 to (rows - 1)
    5. Inside outer loop use inner for loop from 0 to (cols - 1)
    6. Print num and add tab spacing (\t)
    7. Increment num after printing each number
    8. After inner loop finishes one row, print new line
    9. Repeat steps 4 to 7 until outer loop finishes all rows
    10. Exit

4. Algoritm (Flowchart)

```mermaid
graph TD
    A[Start] --> B{Get rows from user}
    B --> C{Get columns from user}
    C --> D{Define num = 10}
    D --> E{Define i = 0}
    E --> F{i < rows?}
    F -->|Yes| G{Define j = 0}
    G --> H{j < columns?} 
    H -->|Yes| I{Print num \t}
    I --> J{num++}
    J --> K{j++}
    K --> H
    H -->|No| L{Print \n}
    L --> M{i++}
    M --> F
    F -->|No| N[End]
```
```