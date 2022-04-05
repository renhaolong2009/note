#ifndef INC_02_SELECTION_SORT_USING_TEMPLATE_STUDENT_H
#define INC_02_SELECTION_SORT_USING_TEMPLATE_STUDENT_H

#include <iostream>
#include <string>

using namespace std;

struct Student
{

    string name;
    int score;

    //返回值类型 operator 运算符名称 (形参表列)
    bool operator<(const Student &otherStudent) //引用
    {

        /*if (score != otherStudent.score)
        {
            return score > otherStudent.score;
        }
        else
        {
            return name < otherStudent.name;
        }同下
               if(这句话为真)      ？           那么走这个      ：              否则走这个；*/
        return score != otherStudent.score ? score > otherStudent.score : name < otherStudent.name;
    }

    friend ostream &operator<<(ostream &os, const Student &student)
    {

        os << "Student: " << student.name << " " << student.score << endl;
        return os;
    }
};

#endif // INC_02_SELECTION_SORT_USING_TEMPLATE_STUDENT_H