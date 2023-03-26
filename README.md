# Weighted-Resource-Constrained-Scheduling-Problem-cplusplus
Weighted Resource Constrained Scheduling Problem, read readme for complete details.


One of the key tasks in Project Management is
scheduling where its completion time is determined. For scheduling you at least needs a list of tasks, their durations
and dependencies. One method which takes this task information to determine schedule is Critical Path Method
(https://asana.com/resources/critical-path-method)
We will develop a more sophisticated method which not only considers task information but also resources and their
skills when generating the schedule.

Start time of at least one task will be zero (0). A project will have N tasks and R resources, N and R will be entered by
the user. You have to implement the following functions, think about the parameters required and return type of the
following functions
    1. addTasks();
    2. setTaskDuration();//change task duration of all tasks
    3. set_nth_TaskDuration();//change duration of a specific task
    4. printTaskDependencyList();//print dependencies of a specific task
    5. calculateBasicSchedule(); Use Critical Path Method to calculate this schedule. print completion time of the
       project
    6. printCriticalTasks(); returns array of critical tasks and displays them – sum of their duration should be equal
       to project completion time
    7. completionTimeWithResources(); You can use basic schedule and depending on the resource availability a
       task can start.
    8. completionTimeWithResourceProficiency(); You can use basic schedule and depending on the resource
       availability a task can start.
