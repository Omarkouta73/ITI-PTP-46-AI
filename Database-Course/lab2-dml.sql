SELECT Fname, Lname, Salary, Dno 
from employee
where DNO = 30 AND Salary BETWEEN 1000 and 2000;


select Pname, Plocation, Dnum from project;

select CONCAT(Fname, " ", Lname) AS Full_Name, 0.1*Salary AS ANNUAL_COMM
from employee;

select SSN, Fname, Salary
from employee
where salary > 1000;

SELECT Fname, Lname, Salary 
from employee
where gender = 'F';

SELECT Dnum, Dname 
FROM departments
WHERE MGRSSN = 968574;

SELECT Pnumber, Pname, Plocation
FROM project
WHERE (Dnum = 10 or Dnum = 20) and (City = 'Cairo' or City = 'Alex');


SELECT Pname, Plocation
FROM project
where SUBSTRING(Pname, 1, 1) = 'a'; 

SELECT Dno, Max(Salary)
from employee
GROUP BY Dno
HAVING count(Dno) >= 2;
SELECT * from employee;

INSERT INTO employee (Fname, Lname, Bdate, Address, gender, Dno, SSN, Salary, Superssn)
VALUES ('Omar', 'Kouta', '2003-09-17', 'Cairo, Egypt', 'M', 30, 666666, 1000, 112233);

SELECT * from employee where Fname = 'Omar';

INSERT INTO employee (Fname, Lname, Bdate, Address, gender, Dno, SSN)
VALUES ('Momen', 'Atallah', '2003-02-04', 'Cairo, Egypt', 'M', 30, 555555);

SELECT * from employee where Fname = 'Momen';


insert into departments(Dname, Dnum, MGRSSN, MGRStart)
VALUES('DEPT IT', 100, 112233, '2006-11-01')

SELECT * from departments;


SELECT *
from employee;

update employee
set Dno = 20, Superssn = 666666
where SSN = 555555;

update employee
set Dno = 100
where SSN = 968574;

SELECT * from employee where SSN > 555554;


SELECT * from departments;

update departments
set MGRSSN = 555555, MGRStart = CURDATE()
where Dnum = 20;

update departments
set MGRSSN = 968574, MGRStart = CURDATE()
where Dnum = 100;

SELECT * from employee;
SELECT * from departments;
SELECT * from works_for;


-- replace kamal in departments supervision
update departments
set MGRSSN = 666666, MGRStart = CURDATE()
where MGRSSN = 223344;

-- replace kamal in employees supervision
update employee
set Superssn = 666666
where Superssn = 223344;

DELETE FROM dependent
WHERE ESSN = 223344;

DELETE FROM works_for
WHERE ESSN = 223344;

DELETE from employee
WHERE SSN = 223344;