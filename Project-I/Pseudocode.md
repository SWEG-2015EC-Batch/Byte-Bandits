1. Problem Description 

- Create an inventory management program with options to input reports, generate reports, search inventory, and display information

2. Problem Analysis

- Inputs:
  - Menu option selected
  - Warehouse, product name, quantity (for inputting reports)
  - Search criteria (for searching inventory)

- Process:
  - Store input reports in a multi-dimensional array 
  - Summarize inventory data for reporting
  - Search array based on given criteria
  - Display current info from program state

- Outputs:
  - Confirmation messages
  - Generated inventory report
  - Search results
  - Current program information

3. Algorithm

   1. Display welcome message
   2. Show menu options:
      1. Input report  
      2. Generate report
      3. Search inventory
      4. Display current information
      5. Exit program
   3. If input report selected:
      - Prompt for warehouse
      - Prompt for product 
      - Input quantity
      - Save input report in inventory array
   4. If generate report:
      - Calculate inventory totals
      - Print inventory report
   5. If search inventory:
      - Get search criteria  
      - Find matching inventory
      - Print search results
   6. If display current information:
      - Print info on current state
   7. If exit:
      - End program
   8. Go back to menu after each option until exit
   9. End
