# mini-RTOS in Ada

Ada Profile Ravenscar for realtime and embedded application

## Tasks

```
--  Task declaration
task My_Task;
```

```
--  Task implementation
task body My_Task is
begin
  --  Do something cool here...
end My_Task;
```

```
T1 : My_Task_Type;
T2 : My_Task_Type;
```

## Time by the package Ada.Real_Time

A periodic task

```
   task body My_Task is
      Period       : constant Time_Span := Milliseconds (100);
      Next_Release : Time;
   begin
      --  Set Initial release time
      Next_Release := Clock + Period;

      loop
         --  Suspend My_Task until the Clock is greater than Next_Release
         delay until Next_Release;

         --  Compute the next release time
         Next_Release := Next_Release + Period;
         
         --  Do something really cool at 10Hz...
      end loop;

   end My_Task;
```

## priority-based preemptive scheduling in Ravenscar

```
   Task My_Low_Priority_Task
     with Priority => 1;

   Task My_High_Priority_Task
     with Priority => 2;
```

## mutual exclusion and shared resources: protected objects

A priority is assigned to each protected object, any tasks calling a protected sub-program must have a priority below or equal to the priority of the protected object.




## Ref

[1](https://blog.adacore.com/theres-a-mini-rtos-in-my-language)

