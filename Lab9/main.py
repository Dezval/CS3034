class Student:
    def __init__(self, student_name, student_id):
        self.name = student_name
        self.id = student_id
        self.courses = []

    def __str__(self):
        return "%s Student ID# %s" % (self.name, self.id)


class Course:
    def __init__(self, course_name, course_id):
        self.name = course_name
        self.id = course_id

    def __str__(self):
        return "Course # %s: %s" %(self.id, self.name)


class University:

    def __init__(self):
        self.uni_courses = {}
        self.students = {}

    def __str__(self):
        return "%s is taking %s" % (self.students[0], self.uni_courses[0])

    def create_course(self, course_name):
        self.uni_courses[len(self.uni_courses)] = Course(course_name, len(self.uni_courses)+1)

    def enroll_student(self, student_name):
        self.students[len(self.students)] = Student(student_name, len(self.students)+1)

    def enroll_student_in_course(self, student_id, course_id):
        self.students[student_id].courses.append(course_id)

    def show_all_course(self):
        for course in self.uni_courses:
            print(course, self.uni_courses[course])

    def find_course(self, course_id):
        if course_id in self.uni_courses:
            return self.uni_courses[course_id]

    def find_student(self, student_id):
        if student_id in self.students:
            return self.students[student_id]

    def show_student_courses(self):
        for student in self.students:
            print(self.students[student])
            for course in self.students[student].courses:
                print(self.find_course(course))


def main():
    Uni = University()
    Uni.create_course("Math 101")
    Uni.create_course("Physics 101")
    Uni.create_course("Computer Science 101")
    Uni.create_course("English 101")
    Uni.create_course("Chemistry 101")
    Uni.create_course("Sociology 101")
    Uni.enroll_student("Tom")
    Uni.enroll_student("Jerry")
    Uni.enroll_student_in_course(0,0)
    Uni.enroll_student_in_course(0,2)
    Uni.enroll_student_in_course(1,3)
    Uni.enroll_student_in_course(1,0)
    Uni.show_student_courses()


if __name__ == "__main__":
    main()