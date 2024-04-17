use TTS_10_30_SE;
-- Assignment Q2
create table employee2(id int primary key, firstname varchar(10), lastname varchar(10),
 salary int, joining_date varchar(50), department text);
-- drop table incentive;
create table incentive(ref_id int,Inc_date varchar(10), Inc_amt int, foreign key incentive(ref_id) references employee2(id));
insert into employee2 values
(1,"John","Abraham",1000000,"01-JAN-13 12.00.00 AM","Banking"),
(2,"Michael","Clarke",800000,"01-JAN-13 12.00.00 AM","Insurance"),
(3,"Roy","Thomas",700000,"01-FEB-13 12.00.00 AM","Banking"),
(4,"Tom","Jose",600000,"01-FEB-13 12.00.00 AM","Insurance"),
(5,"Jerry","Pinto",650000,"01-FEB-13 12.00.00 AM","Insurance"),
(6,"Philip","Mathew",750000,"01-JAN-13 12.00.00 AM","Services"),
(7,"Rahul","Shroff",650000,"01-JAN-13 12.00.00 AM","Services"),
(8,"Bhumit","Shah",600000,"01-FEB-13 12.00.00 AM","Insurance");
select * from employee2;

insert into incentive values
(1,"01-FEB-13",5000),
(2,"01-FEB-13",3000),
(3,"01-FEB-13",4000),
(1,"01-JAN-13",4500),
(2,"01-JAN-13",3500);
select * from incentive;
-- Assignment Q3
Select firstname as Employee_Name from employee2;

-- Assignment Q4
select firstname,joining_date,salary from employee2;

-- Assignment Q5
select * from employee2
order by firstname asc;
select * from employee2
order by salary desc;

-- Assignment Q6
select * from employee2
where firstname like "%j%";

-- Assignment Q7 and Q8

select  department, max(salary) as max_salary from employee2
group by department
order by max_salary;

-- Assignment Q9
select e.firstname,i.inc_amt from employee2 as e inner join incentive as i on e.id=i.ref_id
where inc_amt>3000;

-- Assignment Q10
create table view_table(id int primary key, firstname varchar(10), lastname varchar(10),
 salary int, joining_date varchar(50), department text);
 
 create trigger copy_data
 after insert on employee2
 for each row
 insert into view_table values
 (new.id,new.firstname,new.lastname,new.salary,new.joining_date,new.department);
 
 insert into employee2 values
 (9,"Monit","Jain",650000,"05-FEB-13 12.00.00 AM","Marketing");
 
 select * from view_table;
 
 







