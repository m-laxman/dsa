/*  2534. Time Taken to Cross the Door
    Input: arrival = [0,1,1,2,4], state = [0,1,0,0,1]
    Output: [0,3,1,2,4]
    Explanation: At each second we have the following:
    - At t = 0: Person 0 is the only one who wants to enter, so they just enter through the door.
    - At t = 1: Person 1 wants to exit, and person 2 wants to enter. Since the door was used the previous second for entering, person 2 enters.
    - At t = 2: Person 1 still wants to exit, and person 3 wants to enter. Since the door was used the previous second for entering, person 3 enters.
    - At t = 3: Person 1 is the only one who wants to exit, so they just exit through the door.
    - At t = 4: Person 4 is the only one who wants to exit, so they just exit through the door.
*/
// O(n), O(n)
vector<int> timeTaken(vector<int> &arrival, vector<int> &state)
{
    int n = arrival.size();
    queue<pair<int, int>> exit, enter;
    vector<int> ans(n);
    int t = 0;
    string door = "unused";
    for (int i = 0; i < n; i++)
    {
        if (state[i])
            exit.push({arrival[i], i});
        else
            enter.push({arrival[i], i});
    }
    while (!enter.empty() || !exit.empty())
    {
        if ((enter.empty() || enter.front().first > t) && (exit.empty() || exit.front().first > t))
            door = "unused";
        else if (!exit.empty() && exit.front().first <= t && (enter.empty() || enter.front().first > t))
        {
            ans[exit.front().second] = t;
            exit.pop();
            door = "exit";
        }
        else if ((exit.empty() || exit.front().first > t) && !enter.empty() && enter.front().first <= t)
        {
            ans[enter.front().second] = t;
            enter.pop();
            door = "enter";
        }
        else
        {
            if (door == "unused" || door == "exit")
            {
                ans[exit.front().second] = t;
                exit.pop();
                door = "exit";
            }
            else
            {
                ans[enter.front().second] = t;
                enter.pop();
                door = "enter";
            }
        }
        t++;
    }
    return ans;
}