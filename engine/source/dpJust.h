#pragma once 

#include <string>
#include <vector>

class DPJust final {
    private:
        int lengthOfMessage;
        string uglyText;
        struct PrettyLines{
            vector<vector<string>> rows;
            PrettyLines();
        }
        void intialize();
        void dynamic_setup_string();
        int costFunction(int i, int j);
   public:
        DPJust();
        DPJust(string feedText);
        vector<PrettyLines*> prettyLines;
        ~DPJust();
}
