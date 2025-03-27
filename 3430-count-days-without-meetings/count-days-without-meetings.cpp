class Solution {
public:
    int countDays(int n, vector<vector<int>>& m) {
        map<int, int> events;
        for (const auto& mng : m) {
            events[mng[0]]++;  //  strart meeting
            events[mng[1]]--;  // end meeting
        }

        int freeDays = 0, ongoing = 0, last = 0;
        for (auto [d, c] : events) {
            if (!ongoing) {
                freeDays += (d - last - 1);
            }
            last = d;
            ongoing += c;
        }
        return freeDays + (n - last);
    }
};