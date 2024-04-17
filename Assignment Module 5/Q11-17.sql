use TTS_10_30_SE;
-- Assignment Q11
create table salesperson(s_no int primary key,s_name varchar(20),city text,comm float);
insert into salesperson values
(1001,"Peel","London",0.12),
(1002,"Serres","San Jose",0.13),
(1004,"Motika","London",0.11),
(1007,"Rafkin","Barcelona",0.15),
(1003,"Axelrod","New York",0.1);
select * from salesperson;

create table customer1(CNM int primary key, c_name varchar(20), city text, rating int,
s_no int, foreign key customer1(s_no) references salesperson(s_no));
insert into customer1 values
(201,"Hoffman","London",100,1001),
(202,"Giovanne","Rome",200,1003),
(203,"Liu","San Jose",300,1002),
(204,"Grass","Barcelona",100,1002),
(206,"Clemens","London",300,1007),
(207,"Pereira","Rome",100,1004);
select * from customer1;

-- Assignment Q12
-- Retrieve the below data from above table.

-- Assignment Q13
-- Wrong question for this table for answer see Q18-19

-- Assignment Q14
select s_name,city,comm from salesperson
where city="London" and comm>0.12;

-- Assignment Q15
select s_name,city from salesperson
where city="London" or city="Barcelona";

-- Assignment Q16
select s_name,comm from salesperson
where comm between 0.10 and 0.12;

-- Assignment Q17
select c_name,rating,city from customer1
where rating<=100 or city="Rome";
