"""
Given an array of meeting time intervals consisting of
start and end times [[s1,e1],[s2,e2],...] (si < ei)],
determine if a person could attend all meetings.

Soluion
We will sort by end time of all the meetings 
then check if there is a case where one meeting starts before the previous meeting stops. 

If such a case exists, 
then it is not possible to attend all the meetings.

Otherwise, it is possible to attend all the meetings.

For example,
Given 
[[0, 30],[5, 10],[15, 20]]
return false.
[[4,6],[7,10]
return true

"""


def canAttendMeetings(intervals):
        
    intervals.sort(key=lambda a: a[0])
    for i in range(len(intervals)-1):
        if intervals[i][-1] > intervals[i+1][0]:
            return False
    return True

lists1 = [[0, 30],[5, 10],[15, 20]]
lists2 = [[4,6],[7,10]]

result1 =canAttendMeetings(lists1)
result2 = canAttendMeetings(lists2)

print(result1)
print(result2)