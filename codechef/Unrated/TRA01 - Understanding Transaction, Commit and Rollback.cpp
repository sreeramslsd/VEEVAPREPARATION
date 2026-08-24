
-- Create a sample table if it does not exist
CREATE TABLE IF NOT EXISTS Employees (
    EmpID INT,
    Name VARCHAR(50),
    Salary DECIMAL(10, 2)
);

-- Start a transaction
BEGIN TRANSACTION;

-- Insert a new employee
INSERT INTO Employees (EmpID, Name, Salary) VALUES (1, 'John Doe', 50000);

-- Create a savepoint
SAVEPOINT sp1;

-- Insert another employee
INSERT INTO Employees (EmpID, Name, Salary) VALUES (2, 'Jane Smith', 60000);

-- Create another savepoint
SAVEPOINT sp2;

-- Insert another employee
INSERT INTO Employees (EmpID, Name, Salary) VALUES (3, 'Jordan', 70000);

-- Create another savepoint
SAVEPOINT sp3;

-- Insert another employee
-- Assume that this record was repeatedly entred by mistake (as this already exists)
INSERT INTO Employees (EmpID, Name, Salary) VALUES (1, 'John Doe', 50000);

SELECT * FROM Employees;

-- Since the last INSERT was a mistake, rollback to the last savepoint (sp3)
ROLLBACK TO sp3;

.print "After rollback the transaction is removed"

-- Now commit the transaction
COMMIT;

-- Verify the data
SELECT * FROM Employees;
