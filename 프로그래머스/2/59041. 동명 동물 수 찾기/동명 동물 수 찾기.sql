-- 코드를 입력하세요

select 
    name, 
    count(name) cnt 
from animal_ins
    where name is not null
    group by name
    HAVING count(name) > 1
order by name