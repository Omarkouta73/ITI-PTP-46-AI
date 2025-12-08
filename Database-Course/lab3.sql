-- Display the Department id, name and its manager id and the name of its manager.
SELECT Dnum, Dname, MGRSSN, SSN
FROM departments, employee
WHERE departments.MGRSSN = employee.SSN;

SELECT * from employee;