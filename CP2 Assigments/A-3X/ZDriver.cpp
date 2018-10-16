/*
   **********************************************************
   **    Name:        Debora Urrutia                       **
   **    Instructor:  Prof. Ramos.                         **  
   **    Course:      Computer Programming 2               **
   **    Assignment:  Assignment on Inheritance            ** 
   **    Date:        10/23/2014                           **
   **********************************************************
Problem Statement ==============================================================
|  * Using the code from the worker.zip file, create three new classes.        |
|    These three new classes inherit member functions and data members from    |
|    the Worker class. HourlyWorker represents the specific case of a person   |
|    who is compensated for his/her work based on the amount of time. A        |
|    SalariedWorker is a worker that is paid a fixed annual amount known as a  |
|    alary. Depending on the payroll system used by an organization, a salaried|
|    worker is paid periodically on a weekly, bi-monthly, or other basis. For  |
|    purposes of this assignment, we will compute the weekly pay amount as     |
|    Weekly Pay. A Manager is a specific case of a salaried worker that manages|
|    a department. A manager receives a salary, and may also receive a large   |
|    monetary bonus at the end of the year if the manager's department meets or|
|    exceeds certain departmental goals.                                       |       
Design -------------------------------------------------------------------------
+  Main: -Create three new classes.                                            +
+        -Make these classes inherit from worker.h.                            +
+        -Then create a driver program that tests each one of the new classes. +                             
+  Work: - For HourlyWorker, compute the weekly pay amount                     +
+          as: Weekly Pay = Hours * HourlyPayRate.                             +
+        - For SalariedWorker, compute the weekly pay amount                   +
+          as: Weekly Pay = AnnualSalary / 52.                                 +
+        - For Manager, compute the weekly pay amount                          +
+          as: Weekly Pay = (AnnualSalary + Bonus from last year) / 52.        +
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
#include "Worker.h"
#include "Salaried_Worker.h"
#include "Hourly_Worker.h"
#include "Manager.h"
#include <vector>
#include <iostream>

using namespace std;

int main()
{
/*
  Worker         w("Walter", 70113, "sales", 123456789);
  
  cout << w.getName() << " made " << w.compute_pay() << endl;
  cout << endl;
*/
    vector<Worker*> workers(4);
    workers[0] = new Worker ();
    workers[1] = new Hourly_Worker(40, 10);
    workers[2] = new Salaried_Worker(1000);
    workers[3] = new Manager(100000, 10000);
    
    for (int i = 0; i < workers.size(); i++)
    {
        cout << workers[i]->compute_pay() << endl;
    }
    system ("pause");
  return 0;    
    

}    
