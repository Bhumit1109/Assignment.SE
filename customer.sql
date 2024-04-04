use TTS_10_30_SE;
create table customer(customer_id int PRIMARY KEY, customer_name varchar(50),
city varchar(20), grade int, salesman_id int, FOREIGN KEY(salesman_id) REFERENCES salesman(salesman_id));
insert into customer values
(3002,"Nick Rimando","New York",100,5001),
(3007,"Brad Davis","New York",200,5001),
(3005,"Graham Zusi","California",200,5002),
(3008,"Julian Green","London",300,5002),
(3004,"Fabian Johnson","Paris",300,5006),
(3009,"Geoff Cameron","Berlin",100,5003),
(3003,"Jozy Altidor","Moscow",200,5007);
insert into customer(customer_id,customer_name,
city,salesman_id) values
(3001,"Brad Guzan","London",5005);
select customer.customer_id,customer.customer_name,customer.city,salesman.name,salesman.commission
from customer
join salesman on customer.salesman_id = salesman.salesman_id;