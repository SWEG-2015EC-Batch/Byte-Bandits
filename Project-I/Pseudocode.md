1. Problem Description

   - Write a program for inventory management that can input reports, generate reports, search by product/salesperson, and calculate bonuses
   
2. Problem Analysis

   - Inputs:
      - Option selected
      - Warehouse, product, quantity (for input reports)
      - Product name or salesperson name (for search)
      
   - Process:
      - Store input reports in inventory array
      - Summarize inventory data for reporting
      - Search inventory data by product or salesperson
      - Calculate bonus based on total sales
      
   - Outputs:  
      - Input report confirmation
      - Inventory report
      - Search results
      - Bonus report
      
3. Algorithm   

  1. Start
  
  2. Display menu with options:
     - 1. Input Report
     - 2. Generate Report  
     - 3. Search
     - 4. Calculate Bonus
     - 5. Exit
     
  3. If option 1: 
     - Repeat:
       - Get warehouse
       - Get product  
       - Get quantity
       - Store in inventory array
     - Until no more reports
     - Increment day
     
  4. If option 2:
     - Summarize inventory data
     - Print inventory report table
     
  5. If option 3: 
     - Get search type (product or salesperson)
     - If search by product:
       - Get product name
       - Find matching product index
         - If not found print error
         - Else print product quantities table
     - If search by salesperson:
       - Get salesperson name
       - Find matching salesperson index
         - If not found print error
         - Else print salesperson quantities table 
         
  6. If option 4:
     - Calculate total sales for each salesperson
     - Calculate bonus based on bonus rate
     - Print bonus report table
     
  7. If option 5:
     - Exit program
     
  8. Display menu again, repeat steps based on input until exit
  9. End