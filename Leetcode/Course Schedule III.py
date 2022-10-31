# Problem Link: https://leetcode.com/problems/course-schedule-iii/

class Solution:
    def scheduleCourse(self, courses: List[List[int]]) -> int:
        courses.sort(key = lambda a:(a[1],a[0]))
        
        coursesTaken = [] # Max Heap
        curTime = 0
        
        for duration, endTime in courses:
            
            if duration > endTime:
                continue
            
            if curTime + duration <= endTime:
                curTime+=duration
                heapq.heappush(coursesTaken, (-duration, endTime))
            
            else:
                if duration > -coursesTaken[0][0]:
                    continue
                else:
                    curTime -= -heapq.heappop(coursesTaken)[0]
                    curTime+=duration
                    heapq.heappush(coursesTaken, (-duration, endTime))
        
        return len(coursesTaken)
