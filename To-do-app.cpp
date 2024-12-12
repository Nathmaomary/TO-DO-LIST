#include<iostream>
#include<vector>
#include<string>

using namespace std;

//Function to display menu
void displayMenu(){

    cout << "\n --- To Do List App --- \n";
    cout << "1. Add Task \n";
    cout << "2. view Tasks \n";
    cout << "3. Delete a Task \n";
    cout << "4. Exit \n";
    cout << " Enter your Choice from 1 - 4 : ";
}

//Function to add Tasks

void addTask(vector<string>&tasks){
    string task;
    cout << "Enter the task to add: ";
    cin.ignore();
    getline(cin, task);
    tasks.push_back(task);
    cout << "Task added succefull \n";
}

//Function to vie task
void viewTasks(vector<string>&tasks){
    if(tasks.empty()){
        cout << "No task available \n";

    }else{
        cout << "--- Your task List: ---";

        for (int i = 0; i < tasks.size(); i++){
            cout << i + 1 << "." << tasks[i] << endl;
        }
        }
}

//Function to remove Task

void removetask(vector<string>&tasks){
    if(tasks.empty()){
        cout << "No task if available to remoce \n";
        return;
    }

    int taskindex;
    cout << "Enter number of task you want to remove : ";
    cin >> taskindex;

    //To check task Index

    if (taskindex >= 1 && taskindex <= tasks.size()){
        tasks.erase(tasks.begin() + taskindex - 1); //Removing Task
        
    }else{
        cout << "Invalid task Number. \n";
    }

}

int main(){
    vector<string> tasks;
    int choice;

    do{
        displayMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            addTask(tasks);
            break;
        case 2:
            viewTasks(tasks);
            break;
        case 3:
            removetask(tasks);
            break;
        case 4:
            cout << "Exiting the programm ... \n";
            break;
           
        default:
            cout << "Invalid Choice plese try 1 to 4 as your choice \n";
            break;
        }
        
    }while (choice != 4);

    return 0;
}