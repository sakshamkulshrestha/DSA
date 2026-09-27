class Solution {
public:
    vector<double> convertTemperature(double c) {
        vector<double> v;
        v.push_back(c + 273.15);
        v.push_back(c*1.80 + 32.00);

        return v;
    }
};