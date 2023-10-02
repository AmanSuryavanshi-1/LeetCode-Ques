-> The loop iterates in reverse order, starting from the second-last element (index n - 2).
->for (int i = n - 2; i >= 0; i--) {
if (i + nums[i] >= goal) {
goal = i;
}
**DRY RUN**
**EG-1 = {3, 2, 1, 0, 4}**
1. Iteration 1 (i = 3): 3 <= 4  ❌ (condition no true so goal is not updated)
2. Iteration 2 (i = 2): 3 <= 4  ❌
3. Iteration 3 (i = 1): 3 <= 4  ❌
4. Iteration 4 (i = 0): 3 <=  4 ❌
​
**EG-1 =nums = {2, 3, 1, 1, 4};**
1. Iteration 1 (i = 3) : Check if 3 + 1(position + nums[i]) is >= to goal (position 4).✅ (4>=4), so update goal to i
2. Iteration 2 (i = 2): i + nums[i] is 2 + 1, which is 3. 3  goal, so update goal to 2.
3. Iteration 3 (i = 1): i + nums[i] is 1 + 3, which is 4. 4 >= goal, so update goal to 1.
4. Iteration 4 (i = 0): i + nums[i] is 0 + 2, which is 2. 2 >= goal, so update goal to 0.