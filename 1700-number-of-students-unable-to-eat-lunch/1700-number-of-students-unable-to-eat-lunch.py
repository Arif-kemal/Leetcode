class Solution:
    def countStudents(self, students: list[int], sandwiches: list[int]) -> int:
        n=len(students)
        while len(students):
            if students[0]==sandwiches[0]:
                students.pop(0)
                sandwiches.pop(0)
            elif sandwiches[0] in students:
                x=students[0]
                students.pop(0)
                students.append(x)
            else:
                break                 
        return len(students)    