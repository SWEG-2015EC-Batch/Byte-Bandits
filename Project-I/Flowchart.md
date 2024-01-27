Algorithm(Flowchart)


```mermaid
graph TD
    A[Start] --> B[Display welcome]
    B --> C{Show menu}
    
    C -->|1. Input| D[Prompt warehouse]
    D --> E[Prompt product] 
    E --> F[Input quantity]
    F --> G[Save inventory]
    G --> H{Day full?}
    H -- Yes --> I[Reset day]
    H -- No --> C
    
    C -->|2. Generate| J[Calculate totals]
    J --> K[Print table]
    K --> C
    
    C -->|3. Search| L[Get search type]
    L --> M[Get search term]
    M --> N[Find index]
    N -- Not found --> O[Print error]  
    O --> C
    N -- Found --> P[Print report]
    P --> C
    
    C -->|4. Display| Q[Print current info]
    Q --> C
    
    C -->|5. Exit| R[Exit program]
    R --> S[End]
