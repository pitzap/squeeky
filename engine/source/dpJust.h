#pragma once 

#include <string>
#include <vector>

class DPJust final {
    private:
        string uglyText;
        struct PrettyLines{
            vector<vector<string>> rows;
            PrettyLines();
        }
        void intialize();
        void dynamic_setup_string();
   public:
        DPJust();
        DPJust(string feedText);
        vector<PrettyLines*> prettyLines;
        ~DPJust();
}
