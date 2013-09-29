SleepingBarber.cpp
========
This project is create using dev c++ 4.9.9.2.
To run this project you need to install graphics.h file.


Sleeping Barber

Consider a barber’s shop where there is only one barber, one barber chair and three waiting chairs for the customers.
When there are no customers the barber sits on the barber chair and sleeps. When a customer arrives he awakes
the barber or waits in one of the vacant chairs if the barber is cutting someone else’s hair.
When all the chairs are full, the newly arrived customer simply leaves.

this project is solved by using binary semaphore, when any one is get cut his hair, any other person can't
access the barber seat. when he is done, waiting customer follows to get cut their hair, accoring to sequences
they arrived.
