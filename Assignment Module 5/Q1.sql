use TTS_10_30_SE;
create table student1(roll int primary key, name varchar(20), branch varchar(20));
create table exam(roll int, s_code varchar(5), marks int, p_code varchar(2), foreign key exam(roll) references student1(roll));
-- drop table exam;
insert into student1 values
(1,"Jay","Computer Science"),
(2,"Suhani","Electronic & Comm."),
(3,"Kriti","Electronic & Comm.");
insert into exam values
(1,"CS11",50,"CS"),
(1,"CS12",60,"CS"),
(2,"EC101",66,"EC"),
(2,"EC102",70,"EC"),
(3,"EC101",45,"EC"),
(3,"EC102",50,"EC");

select s.roll,s.name,s.branch,e.marks,e.s_code,e.p_code from student1 as s left join exam as e on e.roll=s.roll
union
select s.roll,s.name,s.branch,e.marks,e.s_code,e.p_code from exam as e right join student1 as s on s.roll=e.roll;