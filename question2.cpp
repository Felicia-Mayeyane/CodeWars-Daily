#include <iostream>
#include <string>

using namespace std;

// function decl: how to calculate the full marks for t1,t2 and assingment
double FullMark(double score1, double score2, double assignment) {
    return 0.33 * score1 + 0.33 * score2 + 0.34 * assignment;
}

// funcation decl:calcultating  Final Mark
double FinalMark(double fullMark, double examScore) {
    return 0.4 * fullMark + 0.6 * examScore;
}

// Determine if student failed or passed
string PassFail(double fullMark, double finalMark) {
    if (fullMark >= 40 && finalMark >= 50)
        return "PASS";
    else
        return "FAIL";
}

int main() {
    int StudentNum;
    cout << "Enter the Number of Students to Add: ";
    cin >> StudentNum;
//iterating student details, name, surname, scores
    for (int i = 0; i < StudentNum; ++i) {
        string name, surname;
        double score1, score2, assignment, exam;

        cout << "Enter Student name: ";
        cin >> name;
        cout << "Enter  Student surname: ";
        cin >> surname;
        cout << "Enter Score 1 mark for " << name << " " << surname << ": ";
        cin >> score1;
        cout << "Enter Score 2 mark for " << name << " " << surname << ": ";
        cin >> score2;
        cout << "Enter Assignment mark for " << name << " " << surname << ": ";
        cin >> assignment;
        cout << "Enter Exam mark for " << name << " " << surname << ": ";
        cin >> exam;

        double fullMark = FullMark(score1, score2, assignment);
        double finalMark = FinalMark(fullMark, exam);
        string passOrFail = PassFail(fullMark, finalMark);

        cout << name << " " << surname << " " << fullMark << " " << finalMark << " " << passOrFail << endl;
    }

    return 0;
}
