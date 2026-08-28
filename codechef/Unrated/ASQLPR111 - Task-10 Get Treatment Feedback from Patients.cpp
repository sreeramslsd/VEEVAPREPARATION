-- Write all the queries here & SUBMIT them all at once.
-- Step 1: Write the query to alter the Treatments Table to include a column called 'FeedbackScore'


-- Step 2: Write the queries to update the Treatments Table by inserting the new FeedbackScore values


-- Step 3: Write the query to fetch and display all the records from the Treatments Table






alter table Treatments add column FeedbackScore int check (FeedbackScore between 1 and 5);

update Treatments set FeedBackScore = 5 where TreatmentID = 1;
update Treatments set FeedBackScore = 4 where TreatmentID = 2;
update Treatments set FeedBackScore = 3 where TreatmentID = 3;



SELECT * FROM TREATMENTS;
