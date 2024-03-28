### 2.9

a.   
$
\Pi_{ID,course\_id}(takes) \div \Pi_{course\_id}(\sigma_{dept\_name='Comp. Sci.}(course))
$

b.  
$
A \leftarrow \Pi_{ID,course\_id}(takes) \\
B \leftarrow \Pi_{course\_id}(\sigma_{dept\_name='Comp.Sci.'}(course)) \\
C \leftarrow \Pi_{ID}(A) \\
C - \Pi_{ID}((B \times C) - A) 
$


### 2.15  
a.  
$
\Pi_{loan\_number}(\\
\quad \sigma_{amount>10000}(loan)
\\)
$

b.  
$
\Pi_{ID} (\\
\quad depositor \bowtie_{depositor.account\_number = account.account\_number} (\sigma_{balance>6000}(account))
\\)
$

c.  
$
\Pi_{ID} (\\
\quad depositor \bowtie_{depositor.account\_number = account.account\_number} \\
\quad (\sigma_{balance>6000 \wedge branch_name='Uptown'}(account))
\\)
$

### 2.16 
unknown, non-exist

### 2.18 
a.  
$
\Pi_{ID,name}(\\
\quad   \sigma_{dept\_name='Physics'}(instructor)
\\)
$

b.  
$
\Pi_{ID,name} (\\
\quad instructor \bowtie_{instructor.dept\_name = department.dept\_name} \\
\quad (\sigma_{building = 'Watson'}(department))
\\)
$

c.   
$
\Pi_{student.ID,student.name} (\\ 
\quad   student \bowtie_{student.ID = takes.ID} \\
\quad   (takes \bowtie_{takes.course\_id = course.course\_id}
        (\sigma_{dept\_name = 'Comp. Sci.'}(course)))
\\)
$


d.  
$
\Pi_{student.ID, student.name} (\\
\quad   student \bowtie_{student.ID = takes.ID}
        (\sigma_{year=2018}(takes))
\\)
$

e.  
$
\Pi_{ID,name}(student) \\ - \\
\Pi_{student.ID, student.name} (\\
\quad   student \bowtie_{student.ID = takes.ID}
        (\sigma_{year=2018}(takes))
\\)
$





