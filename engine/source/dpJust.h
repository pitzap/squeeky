#pragma once 

#include <string>
#include <vector>

class DPJust final {
    private:
        vector<string> uglyText;
        struct PrettyLines{
            vector<vector<string>> rows;
            PrettyLines();
        }
   public:
        DPJust();
        DPJust(string feedText);
        DPJust(vector<string> feedText);
        ~DPJust();
}
