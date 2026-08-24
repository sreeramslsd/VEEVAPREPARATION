-- Step 1: Rollback to restore the original salaries
ROLLBACK TO S1;

-- Step 2: Reduce each faculty member's salary by ₹2,000
UPDATE Faculty SET salary = 98000 WHERE faculty_id =  1;
UPDATE Faculty SET salary = 93000 WHERE faculty_id =  2;
UPDATE Faculty SET salary = 83000 WHERE faculty_id =  3;
UPDATE Faculty SET salary = 108000 WHERE faculty_id = 4;
UPDATE Faculty SET salary = 90000 WHERE faculty_id =  5;

-- Step 3: Retrieve the updated faculty details
SELECT faculty_id, name, salary FROM Faculty;

-- Step 4: Calculate the new average salary
SELECT AVG(salary) AS avg_salary FROM Faculty;