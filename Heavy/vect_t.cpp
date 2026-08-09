#include <cstdio>
#include <vector>

class CalcMat{
    public:
     CalcMat() = default;
     CalcMat(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b)
     :mat_a_(a), mat_b_(b){}

     // getters 
     std::vector<std::vector<int>> GetFirstMatrix() const {
        return mat_a_;
     }

     std::vector<std::vector<int>> GetSecondMatrix() const {
        return mat_b_;
     }

     // setters 
     void SetFirstMatrix(const std::vector<std::vector<int>>& a) {
        mat_a_ = a;
     }

     void SetSecondMatrix(const std::vector<std::vector<int>>& b) {
        mat_b_ = b;
     }

     // addition 
     void AddMatrix() {
        if(!mat_a_.empty() && !mat_b_.empty()) {
            // checking rows
            if(mat_a_.size() == mat_b_.size()) {
                //checking columns  
                if(mat_a_[0].size() == mat_b_[0].size()) {
                    // ToDo: calculation
                } else {
                    std::printf("Error: Columns Should Be Equal!\n");
                }
            } else {
                std::printf("Error: Rows Should Be Equal!\n");
            }
        } else {
            std::printf("Error: Matrices Can Not Be Empty!\n");
        }
     }

    private: 
     std::vector<std::vector<int>> mat_a_;
     std::vector<std::vector<int>> mat_b_;
};

int main(int argc, char* argv[]) {

    std::vector<std::vector<int>> matrix_a = {
        {12, 33, 12, 39, 45, 90},
        {23, 89, 56, 34, 67, 78},
        {19, 28, 59, 20, 26, 39},
        {69, 50, 26, 49, 37, 23}
    };

    std::vector<std::vector<int>> matrix_b = {
        {92, 90, 34, 90, 92, 32},
        {10, 20, 30, 40, 50, 60},
        {20, 30, 73, 56, 83, 20},
        {52, 63, 74, 64, 40, 22}
    };

    CalcMat cal_matrix(matrix_a, matrix_b);


    return 0;
}