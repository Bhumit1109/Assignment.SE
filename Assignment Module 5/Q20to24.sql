use TTS_10_30_SE;
create table item_list(product_ID int primary key, product_name varchar(25), product_price int, company_code int);
insert into item_list values
(101,"Mother Board",3200.00,15),
(102,"Key Board",450.00,16),
(103,"ZIP Drive",250.00,14),
(104,"Speaker",550.00,16),
(105,"Monitor",5000.00,11),
(106,"DVD drive",900.00,12),
(107,"CD Drive",800.00,12),
(108,"Printer",2600.00,13),
(109,"Refill Cartridge",350.00,13),
(110,"Mouse",250.00,12);

select * from item_list;

-- Assignment Q20
select * from item_list
where Price_in_Rs between 200 and 600;

-- Assignment Q21
select avg(Price_in_Rs) from item_list
where company_code=16;

-- Assignment Q22 
alter table item_list rename column product_name to item_name;
alter table item_list rename column product_price to Price_in_Rs;

-- Assignment Q23
select * from item_list
where Price_in_Rs>=250;
select * from item_list
order by Price_in_Rs desc;
select * from item_list
order by item_name asc;

-- Assignment Q24
select company_code,avg(Price_in_Rs) from item_list
group by company_code;

