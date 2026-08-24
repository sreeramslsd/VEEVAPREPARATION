-- Step 1: Alter the Faculty table to add a salary column
ALTER TABLE Faculty ADD COLUMN salary DECIMAL(10,2);

-- Create a SAVEPOINT before making updates
SAVEPOINT S1;

-- Update salary for each faculty member
UPDATE Faculty SET salary = 100000 WHERE faculty_id = 1;
UPDATE Faculty SET salary = 95000 WHERE faculty_id = 2;
UPDATE Faculty SET salary = 85000 WHERE faculty_id = 3;
UPDATE Faculty SET salary = 110000 WHERE faculty_id = 4;
UPDATE Faculty SET salary = 92000 WHERE faculty_id = 5;

-- Step 2:
-- Query 1: Retrieve the Average Salary of All Faculty Members
SELECT AVG(salary) AS avg_salary FROM Faculty;

-- Query 2: Find the Total Credit Points Across All Courses
SELECT SUM(credits) AS total_credits FROM Courses;