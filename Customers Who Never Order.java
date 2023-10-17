select c.name as Customers
from Customers c
where c.id Not In (select customerId from Orders ); 
 
 
