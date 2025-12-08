def dailyTemperatures(temps):
        results = [0] * len(temps)
        stack = []
        # UPVOTE !
        for i, temp in enumerate(temps):
            while stack and temps[stack[-1]] < temp:
                index = stack.pop()
                results[index] = i - index
            stack.append(i)

        return results

print(dailyTemperatures([73, 74, 75, 71, 69, 72, 76, 73]))


class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        # Observation: We only need the values greater than the current value.
        # Monotonic stack can be an effective data structure to use in this case.
        # In the end we need to check the remaining values.
        # The best way to do it is to append 0 at the end of the heights array(unique approach).
        # Time comp.-> O(N), Space comp.-> O(N)
        heights.append(0)
        stack = []
        res = 0
        for i in range(len(heights)):
            index = i
            while stack and heights[i] < stack[-1][0]:
                value, index = stack.pop()
                area = value * (i - index)
                res = max(res, area)
            stack.append([heights[i], index])
        return res
