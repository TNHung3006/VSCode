package Cau18;
public class Course {
    private String name;
    private String[] students;
    private int numberOfStudents;

    public Course(String name) {
        this.name = name;
        this.students = new String[100]; // Giả sử tối đa 100 sinh viên
        this.numberOfStudents = 0;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void addStudent(String student) {
        students[numberOfStudents] = student;
        numberOfStudents++;
    }

    public String[] getStudents() {
        return students;
    }

    public int getNumberOfStudents() {
        return numberOfStudents;
    }
}
