group-02
========
The Banker's algorithm is a resource allocation and deadlock avoidance algorithm  that tests for safety by simulating
the allocation of predetermined maximum possible amounts of all resources, and then makes a "s-state" check to test
for possible deadlock conditions for all other pending activities, before deciding whether allocation should be allowed
to continue.

It uses mutex lock on the resourse the a process is currently haveing. If a process is currently holding a resource no 
other process will be allocated to that resource.

Algorithm

The Banker's algorithm is run by the operating system whenever a process requests resources. The algorithm avoids
deadlock by denying or postponing the request if it determines that accepting the request could put the system in 
an unsafe state (one where deadlock could occur). When a new process enters a system, it must declare the maximum
number of instances of each resource type that it may ever claim; clearly, that number may not exceed the total number
of resources in the system. Also, when a process gets all its requested resources it must return them in a finite 
amount of time.

For the Banker's algorithm to work, it needs to know three things:

    How much of each resource each process could possibly request.
    How much of each resource each process is currently holding.
    How much of each resource the system currently has available.



Resources may be allocated to a process only if it satisfies the following conditions:

    request ≤ max, else set error condition as process has crossed maximum claim made by it.
    request ≤ available, else process waits until resources are available.

