create table department(
dept_id number(5),
dept_name varchar2(50) not null,
hod_name varchar2(40) not null,
office_location varchar2(30) ,
contact_number numeric(10),

CONSTRAINT pk_department
PRIMARY KEY(dept_id),

CONSTRAINT uq_department_name
UNIQUE (dept_name)
);


create table student(
  student_id number(6),
  student_name varchar2(30),
  dob date,
  gender char(1),
  mobile_number number(10),
  email_id varchar2(20),
  dept_id number(5), -- Changed to number(5) to match your department table
  admission_date date default SYSDATE,
  cgpa numeric(4,2),

  CONSTRAINT pk_student PRIMARY KEY(student_id),
  CONSTRAINT uq_student_email UNIQUE(email_id),
  CONSTRAINT chk_gender CHECK (gender IN ('M','F','T')), -- Added the missing comma here
  CONSTRAINT chk_cgpa CHECK (cgpa between 0 and 10)
);


create table faculty(
faculty_id number(6),
faculty_name varchar2(30),
qualification varchar2(20),
designation varchar2(20),
joining_date date default sysdate,
salary numeric(10,2),
email_id varchar2(20),
dept_id number(5),

CONSTRAINT pk_faculty
PRIMARY KEY (faculty_id),

CONSTRAINT uq_faculty_email
UNIQUE (email_id),

CONSTRAINT chck_faculty_salary CHECK (salary>0)
);

create table course(
  course_id number(6) CONSTRAINT pk_course PRIMARY KEY,
  course_name varchar2(20) not null,
  credits number(2) check (credits BETWEEN 1 AND 6),
  semester number(2) check (semester BETWEEN 1 AND 8),
  dept_id number(5),     -- Matches the department table perfectly!
  faculty_id number(6)   -- Changed from number(5) to match the faculty table
);

INSERT INTO department (dept_id, dept_name, hod_name, office_location, contact_number)
VALUES (101, 'Computer Science', 'Dr. Bindiya M Varghese', 'Kalamassery Campus', 4842660601);

INSERT INTO department (dept_id, dept_name, hod_name, office_location, contact_number)
VALUES (102, 'Social Work', 'Dr. Kiran Thampi', 'Kalamassery Campus', 4842660602);

INSERT INTO department (dept_id, dept_name, hod_name, office_location, contact_number)
VALUES (103, 'Psychology', 'Dr. Rashmi P.', 'Kalamassery Campus', 4842660603);





INSERT INTO faculty (faculty_id, faculty_name, qualification, designation, joining_date, salary, email_id, dept_id)
VALUES (200001, 'Dr. Shiju Thomas M.Y', 'Ph.D, MCA', 'Associate Professor', TO_DATE('01-06-2012', 'DD-MM-YYYY'), 85000.00, 'shiju@rajagiri.edu', 101);

INSERT INTO faculty (faculty_id, faculty_name, qualification, designation, joining_date, salary, email_id, dept_id)
VALUES (200002, 'Dr. Ann Baby', 'Ph.D', 'Assistant Professor', TO_DATE('15-07-2018', 'DD-MM-YYYY'), 65000.00, 'annb@rajagiri.edu', 101);

INSERT INTO faculty (faculty_id, faculty_name, qualification, designation, joining_date, salary, email_id, dept_id)
VALUES (200003, 'Dr. Anish K.R.', 'Ph.D, MSW', 'Associate Professor', TO_DATE('10-01-2010', 'DD-MM-YYYY'), 90000.00, 'anish@rajagiri.edu', 102);

INSERT INTO faculty (faculty_id, faculty_name, qualification, designation, joining_date, salary, email_id, dept_id)
VALUES (200004, 'Dr. Lijo K.J.', 'Ph.D', 'Assistant Professor', TO_DATE('01-11-2020', 'DD-MM-YYYY'), 60000.00, 'lijo@rajagiri.edu', 103);




INSERT INTO course (course_id, course_name, credits, semester, dept_id, faculty_id)
VALUES (300001, 'Data Analytics', 4, 3, 101, 200001);

INSERT INTO course (course_id, course_name, credits, semester, dept_id, faculty_id)
VALUES (300002, 'Machine Learning', 4, 4, 101, 200002);

INSERT INTO course (course_id, course_name, credits, semester, dept_id, faculty_id)
VALUES (300003, 'Social Case Work', 3, 1, 102, 200003);

INSERT INTO course (course_id, course_name, credits, semester, dept_id, faculty_id)
VALUES (300004, 'Clinical Psychology', 4, 2, 103, 200004);





INSERT INTO student (student_id, student_name, dob, gender, mobile_number, email_id, dept_id, admission_date, cgpa)
VALUES (400001, 'Arjun K. Suresh', TO_DATE('14-05-2004', 'DD-MM-YYYY'), 'M', 9876543210, 'arjun@rajagiri.edu', 101, TO_DATE('10-06-2025', 'DD-MM-YYYY'), 8.75);

INSERT INTO student (student_id, student_name, dob, gender, mobile_number, email_id, dept_id, admission_date, cgpa)
VALUES (400002, 'Riya Maria Joseph', TO_DATE('22-11-2003', 'DD-MM-YYYY'), 'F', 9887766554, 'riya@rajagiri.edu', 102, TO_DATE('12-06-2025', 'DD-MM-YYYY'), 9.20);

INSERT INTO student (student_id, student_name, dob, gender, mobile_number, email_id, dept_id, admission_date, cgpa)
VALUES (400003, 'Devanand M.B.', TO_DATE('05-01-2004', 'DD-MM-YYYY'), 'M', 9445566778, 'deva@rajagiri.edu', 103, TO_DATE('15-06-2025', 'DD-MM-YYYY'), 7.80);


select * from course;
select * from DEPARTMENT;
select * from FACULTY;
select * from student;